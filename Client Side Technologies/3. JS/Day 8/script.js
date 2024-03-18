import { Card } from './Card.js';
import { Country } from './Country.js';
const input = document.querySelector('input');
const showBtn = document.querySelector('button');
const countryDiv = document.querySelector('.country');

let countryName = '';
input.addEventListener('blur', () => {
  if (!input.value.match(/^[A-Za-z\s]+$/)) {
    throw new Error('Please enter a valid name');
  }
  countryName = input.value;
});

showBtn.addEventListener('click', () => {
  countryDiv.textContent = '';
  const country = new Country(countryName);
  const result = country.getCountryData();

  result
    .then((data) => {
      console.log(data);
      const card = new Card(data);
      countryDiv.append(card.create());

      const [neighborCode] = data.borders;
      const neighbor = country.getNeighborData(neighborCode);
      neighbor
        .then((data) => {
          console.log(data);
          const card = new Card(data);
          countryDiv.append(card.create());
        })
        .catch((e) => {
          throw new Error(e.message);
        });
    })
    .catch((e) => {
      throw new Error(e.message);
    });
  input.value = '';
});