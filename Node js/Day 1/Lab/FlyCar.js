const Car = require('./Car.js');

class FlyCar extends Car {
  #canFly;

  constructor(model, year, canFly) {
    super(model, year);
    this.canFly = canFly;
  }

  set canFly(value) {
    this.#canFly = value;
  }

  get canFly() {
    return this.#canFly;
  }

  toString() {
    return `${super.toString()} and ${
      this.canFly ? 'I can fly' : "I can't fly"
    }`;
  }
}

exports.FlyCar = FlyCar;
