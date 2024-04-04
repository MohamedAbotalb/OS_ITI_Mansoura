class Car {
  #model;
  #year;

  constructor(model, year) {
    this.model = model;
    this.year = year;
  }

  set model(value) {
    this.#model = value;
  }

  get model() {
    return this.model;
  }

  set year(value) {
    this.#year = value;
  }

  get year() {
    return this.year;
  }

  toString() {
    return `Car's model is ${this.#model}, created in ${this.#year}`;
  }
}

module.exports = Car;
