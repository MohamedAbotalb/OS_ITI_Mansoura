const { FlyCar } = require('./FlyCar.js');

const myCar = new FlyCar('BMW', 2022, true);
const myNewCar = new FlyCar('picante', 2023, false);

console.log(myCar.toString());
console.log(myNewCar.toString());
