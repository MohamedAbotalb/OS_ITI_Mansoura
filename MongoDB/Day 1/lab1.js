db.instructors.find({}).projection({}).sort({ _id: -1 }).limit(100);

const instructorsArray = [
  {
    _id: 6,
    firstName: 'noha',
    lastName: 'hesham',
    age: 21,
    salary: 3500,
    address: { city: 'cairo', street: 10, building: 8 },
    courses: ['js', 'mvc', 'signalR', 'expressjs'],
  },

  {
    _id: 7,
    firstName: 'mona',
    lastName: 'ahmed',
    age: 21,
    salary: 3600,
    address: { city: 'cairo', street: 20, building: 8 },
    courses: ['es6', 'mvc', 'signalR', 'expressjs'],
  },

  {
    _id: 8,
    firstName: 'mazen',
    lastName: 'mohammed',
    age: 21,
    salary: 7040,
    address: { city: 'Ismailia', street: 10, building: 8 },
    courses: ['asp.net', 'mvc', 'EF'],
  },

  {
    _id: 9,
    firstName: 'ebtesam',
    lastName: 'hesham',
    age: 21,
    salary: 7500,
    address: { city: 'mansoura', street: 14, building: 3 },
    courses: ['js', 'html5', 'signalR', 'expressjs', 'bootstrap'],
  },

  {
    _id: 10,
    firstName: 'badr',
    lastName: 'ahmed',
    age: 22.0,
    salary: 5550.0,
    address: {
      city: 'cairo',
      street: 10.0,
      building: 8.0,
    },
    courses: ['sqlserver', 'mvc', 'signalR', 'asp.net'],
  },
  {
    _id: 2,
    firstName: 'mona',
    lastName: 'mohammed',
    age: 21.0,
    salary: 3600.0,
    address: {
      city: 'mansoura',
      street: 20.0,
      building: 18.0,
    },
    courses: ['es6', 'js', 'mongodb', 'expressjs'],
  },
  {
    _id: 3,
    firstName: 'mazen',
    lastName: 'ali',
    age: 30.0,
    salary: 7010.0,
    address: {
      city: 'cairo',
      street: 10.0,
      building: 5.0,
    },
    courses: ['asp.net', 'mvc', 'EF'],
  },
  {
    _id: 4,
    firstName: 'ebtesam',
    lastName: 'ahmed',
    age: 28.0,
    salary: 6200.0,
    address: {
      city: 'mansoura',
      street: 14.0,
      building: 7.0,
    },
    courses: ['js', 'html5', 'signalR', 'expressjs', 'bootstrap', 'es6'],
  },
];

db.instructors.insertMany(instructorsArray);

// Insert my data
db.instructors.insertOne({
  _id: '1',
  firstName: 'mohamed',
  lastName: 'abotalb',
  age: 27,
  salary: 8000,
  address: {
    city: 'mansoura',
    street: 4,
    building: 3,
  },
  courses: ['JS', 'TS', 'Node.js', 'express.js'],
});

db.instructors.insertOne({
  _id: '12',
  firstName: 'morad',
  lastName: 'ali',
  age: 22,
  salary: 6000,
  address: {
    city: 'mansoura',
    street: 9,
    building: 6,
  },
  courses: ['js', 'mvc', 'jquery', 'express.js'],
});

// Insert instructor without firstName and LastName
db.instructors.insertOne({
  _id: '11',
  age: 24,
  salary: 7000,
  address: {
    city: 'tanta',
    street: 3,
    building: 2,
  },
  courses: ['JS', 'React.js', 'HTML5', 'Bootstrap'],
});

// 7. Try the following queries
db.instructors.find({});

db.instructors.find();

db.instructors.findOne();

db.instructors.find().constructor.name; // DBQuery

db.instructors.find({}).forEach((document) => {
  print(document);
});

// display only firstName and lastName for each instructor?
db.instructors.find({}).forEach((document) => {
  print({
    firstName: `${document.firstName}`,
    lastName: `${document.lastName}`,
  });
});

// find the average, max and min salary for all instructors.
let maxSalary = db.instructors.findOne().salary;
let minSalary = db.instructors.findOne().salary;
let sum = 0;
let count = 0;
db.instructors.find({}).forEach((instructor) => {
  if (instructor.salary > maxSalary) {
    maxSalary = instructor.salary;
  }
  if (instructor.salary < minSalary) {
    minSalary = instructor.salary;
  }
  sum += instructor.salary;
  count++;
});

print('maxSalary: ' + maxSalary);
print('minSalary: ' + minSalary);
print('averageSalary: ' + sum / count);
