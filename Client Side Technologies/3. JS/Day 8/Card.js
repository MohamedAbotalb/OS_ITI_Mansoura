export class Card {
  #data;

  constructor(data) {
    this.data = data;
  }

  set data(value) {
    this.#data = value;
  }
  get data() {
    return this.#data;
  }

  create() {
    const { flag, name, region, population, languages, currencies } = this.data;
    
    const parent = document.createElement('div');
    parent.classList.add('card');

    const flagImg = document.createElement('img');
    flagImg.src = flag;
    flagImg.classList.add('flag');

    const country = document.createElement('span');
    country.classList.add('country');
    country.textContent = name;

    const reg = document.createElement('span');
    reg.textContent = region;

    const pop = document.createElement('span');
    pop.textContent = `👫🏻 ${(population / 1000000).toFixed(1)} M People`;

    const language = document.createElement('span');
    language.textContent = `🗣️ ${languages[0].name}`;

    const currency = document.createElement('span');
    currency.textContent = `💰 ${currencies[0].name}`;

    parent.append(flagImg, country, reg, pop, language, currency);
    return parent;
  }
}
