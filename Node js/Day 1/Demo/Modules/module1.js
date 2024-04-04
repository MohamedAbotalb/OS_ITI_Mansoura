let id = 2;
let projectName = "ITI";
let projectHours = 20;

module.exports = function () {
  console.log("get Data");
};
// module.exports.insertStudent=funtion(){}
module.exports.id = id;
module.exports.projectHours = projectHours;
//shortcut
exports.projectName = projectName;

console.log(module);
