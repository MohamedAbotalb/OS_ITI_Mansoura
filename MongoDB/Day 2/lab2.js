db.instructors.find({}).projection({}).sort({ _id: -1 }).limit(100);

// Display all documents in instructors collection
db.instructors.find({});

// Display all instructors with salaries greater than 4000 (only show firstName and salary)
db.instructors.find(
  { salary: { $gt: 4000 } },
  { _id: 0, firstName: 1, salary: 1 }
);

db.instructors.find(
  {
    $and: [
      { firstName: { $exists: true, $ne: '' } },
      { salary: { $exists: true, $gt: 4000 } },
    ],
  },
  { _id: 0, firstName: 1, salary: 1 }
);

// Display all instructors with ages less than or equal 25
db.instructors.find({ age: { $lte: 25 } }, { _id: 0, firstName: 1, age: 1 });

db.instructors.find(
  {
    $and: [
      { firstName: { $exists: true, $ne: '' } },
      { age: { $exists: true, $lte: 25 } },
    ],
  },
  { _id: 0, firstName: 1, age: 1 }
);

// Display all instructors with city mansoura and street number 10 or 14 only display (firstname,address,salary).
db.instructors.find(
  {
    'address.city': 'mansoura',
    'address.street': { $in: [10, 14] },
  },
  { _id: 0, firstName: 1, address: 1, salary: 1 }
);

// Display all instructors that have js and jquery in their courses (both of them not one of them).
db.instructors.find(
  { courses: { $all: ['js', 'jquery'] } },
  { _id: 0, firstName: 1, courses: 1 }
);

// Display number of courses for each instructor and display first name with number of courses.
db.instructors.find({}).forEach((instructor) => {
  const numberOfCourses = instructor.courses.length;

  print(`${instructor.firstName}: ${numberOfCourses} courses`);
});

//Write mongodb query to get all instructors that have firstName and lastName properties , sort them by firstName ascending then by lastName descending and finally display their data FullName and age
const instructors = db.instructors
  .find(
    { firstName: { $exists: true }, lastName: { $exists: true } },
    { _id: 0, firstName: 1, lastName: 1, age: 1 }
  )
  .sort({ firstName: 1, lastName: -1 });

instructors.forEach((instructor) => {
  print(
    `Fullname: ${instructor.firstName} ${instructor.lastName}, Age: ${instructor.age}`
  );
});

// Delete instructor with first name “ebtesam” and has only 5 courses in courses array
db.instructors.deleteOne({
  firstName: 'ebtesam',
  courses: { $size: 5 },
});

// Add active property to all instructors and set its value to true.
db.instructors.updateMany({}, { $set: { active: true } });

// Change “EF” course to “jquery” for “mazen mohammed” instructor
db.instructors.updateOne(
  { firstName: 'mazen', lastName: 'mohammed', courses: 'EF' },
  { $set: { 'courses.$': 'jquery' } }
);

// Add jquery course for “noha hesham”.
db.instructors.updateOne(
  { firstName: 'noha', lastName: 'hesham' },
  { $push: { courses: 'jquery' } }
);

// Remove courses property for “ahmed mohammed ” instructor
db.instructors.updateOne(
  { firstName: 'ahmed', lastName: 'mohammed' },
  { $unset: { courses: '' } }
);

// Decrease salary by 500 for all instructors that has only 3 courses in their list ($inc)
db.instructors.updateMany(
  { courses: { $size: 3 } },
  { $inc: { salary: -500 } }
);

// Rename address field for all instructors to fullAddress.
db.instructors.updateMany({}, { $rename: { address: 'fullAddress' } });

// Change street number for noha hesham to 20
db.instructors.updateOne(
  { firstName: 'noha', lastName: 'hesham' },
  { $set: { 'fullAddress.street': 20 } }
);
