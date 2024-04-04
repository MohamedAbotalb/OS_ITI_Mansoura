//1- whole object
const module1 = require("./module1");
// console.log(module1);
//2- destructure
// const{id,projrctHours}=require("./module1");
//3-  run the file
// require("./module1");
//-------------------------- default exports
// module1(); // call default function exported from module1
// new module1()// call object from defualt exported class
module1();
module1.id;
module1.projectHours;
