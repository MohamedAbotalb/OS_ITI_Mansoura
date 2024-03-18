// OS Track List Courses
let course = 'HTML5 & CSS3 123';
console.log(addCourse(course, trackListOS));

course = 'JavaScript';
console.log(addCourse(course, trackListOS));

course = 'Software-Engineering';
console.log(addCourse(course, trackListOS));

course = 'Introduction to Programming';
console.log(addCourse(course, trackListOS));

course = 'OOP with C++';
console.log(addCourse(course, trackListOS));

// console.log(removeCourse('Software-Engineering', trackListOS));
// console.log(removeCourse('Software Engineering', trackListOS));
// console.log(removeCourse('HTML5 & CSS3 123', trackListOS));
// console.log(removeCourse('HTML5 & CSS3 123', trackListOS));
// console.log(removeCourse('JavaScript', trackListOS));

// PD Track List Courses
course = 'Introduction to Programming';
console.log(addCourse(course, trackListPD));

course = 'C#';
console.log(addCourse(course, trackListPD));

course = 'ASP.NET';
console.log(addCourse(course, trackListPD));

course = 'SQL Server';
console.log(addCourse(course, trackListPD));

course = 'OOP with C++';
console.log(addCourse(course, trackListPD));

// console.log(removeCourse('C#', trackListPD));
// console.log(removeCourse('ASP.NET', trackListPD));
// console.log(removeCourse('ASP.NET', trackListPD));
// console.log(removeCourse('SQL Server', trackListPD));

console.log(moveCourse('C#', trackListOS));
console.log(moveCourse('NET', trackListOS));
console.log(moveCourse('OOP with C++', trackListOS));
console.log(moveCourse('OOP with C++', trackListPD));
console.log(moveCourse('Introduction to Programming', trackListPD));
