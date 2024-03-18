function getCountryData(countryName) {
    const countryEndpoint = https://restcountries.com/v2/name/${countryName};

    return fetch(countryEndpoint)
        .then(response => response.json())
        .then(data => {
                const firstCountry = data[0];
                const neighboringCountryCode = firstCountry.borders[1];
                const neighboringCountryEndpoint = https://restcountries.com/v2/alpha/${neighboringCountryCode};

            return fetch(neighboringCountryEndpoint)
                .then(response => response.json())
                .then(neighboringCountryData => {
                return {
                    country: firstCountry,
                    neighboringCountry: neighboringCountryData
                };
        })
    })
}



function displayCountryInfo(countryData) {
    
    const countryCard = document.createElement('div');
    countryCard.className = 'country';

    const countryName = document.createElement('h2');
    countryName.textContent = countryData.country.name;

    const language = document.createElement('p');
    language.textContent = Language 💭: ${countryData.country.languages[0].name}; 

    const population = document.createElement('p');
    population.textContent = Population 👩‍👩‍👧‍👦: ${countryData.country.population};

    const region = document.createElement('p');
    region.textContent = Region 🌎 : ${countryData.country.region};

    const flag = document.createElement('img');
    flag.src = countryData.country.flags.png;
    flag.alt = 'Flag';

    countryCard.appendChild(flag);
    countryCard.appendChild(countryName);

    countryCard.appendChild(language);
    countryCard.appendChild(population);
    countryCard.appendChild(region);
    
    let div = document.getElementById('countryData');
    div.appendChild(countryCard);
    div.appendChild(displayCountryNieber(countryData.neighboringCountry));

}

function displayCountryNieber(countryData) {
    const countryCard = document.createElement('div');
    countryCard.className = 'country';

    const countryName = document.createElement('h2');
    countryName.textContent = countryData.name;

    const language = document.createElement('p');
    language.textContent = Language 💭:  ${countryData.languages[0].name}; 

    const population = document.createElement('p');
    population.textContent = Population 👩‍👩‍👧‍👦 :  ${countryData.population};

    const region = document.createElement('p');
    region.textContent = Region 🌎: ${countryData.region};

    const flag = document.createElement('img');
    flag.src = countryData.flags.png;
    flag.alt = 'Flag';
    
    countryCard.appendChild(flag);
    countryCard.appendChild(countryName);
    countryCard.appendChild(language);
    countryCard.appendChild(population);
    countryCard.appendChild(region);
    
    return countryCard;
}

getCountryData('Egypt')
    .then(displayCountryInfo)
    .catch(error => console.error('Error:', error));