console.log("start");
setTimeout(() => {
  console.log("OUT");
}, 1000);
console.log("end");
// commonjs modules

/************* Using Modules ********/
// 1- own created modules
const module1 = require("./Modules/module1");

//2 use library (package)
const http = require("http");

//3- Extrenal modules
