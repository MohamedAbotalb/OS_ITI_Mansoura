db.find().sort;

db.createCollection('workers', {
  validator: {
    $jsonSchema: {
      bsonType: 'object',
      properties: {
        firstName: {
          bsonType: 'string',
        },
        lastName: {
          bsonType: 'string',
        },
        age: {
          bsonType: 'number',
        },
      },
    },
  },
});

// db.getCollectionInfos({name:"workers"})

db.workers.runCommand('collMod', {
  validator: {
    $jsonSchema: {
      bsonType: 'object',
      require: ['firstName', 'lastName'],
      additionalProperties: false,
      properties: {
        _id: { bsonType: 'number' },
        firstName: {
          bsonType: 'string',
        },
        lastName: {
          bsonType: 'string',
        },
        age: {
          bsonType: 'number',
        },
        address: {
          bsonType: 'object',
          properties: {},
        },
      },
    },
  },
});
