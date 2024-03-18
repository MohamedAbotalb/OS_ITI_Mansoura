export class Country {
  #name;

  constructor(name) {
    this.name = name;
  }

  set name(value) {
    this.#name = value;
  }
  get name() {
    return this.#name;
  }

  async getCountryData() {
    try {
      const res = await fetch(`https://restcountries.com/v2/name/${this.name}`);
      const data = await res.json();

      return data[0];
    } catch (err) {
      throw new Error('Please enter a valid country name');
    }
  }

  async getNeighborData(countryCode) {
    try {
      const res = await fetch(
        `https://restcountries.com/v2/alpha/${countryCode}`
      );
      const data = await res.json();

      return data;
    } catch (err) {
      throw new Error('Please enter a valid country name');
    }
  }
}
