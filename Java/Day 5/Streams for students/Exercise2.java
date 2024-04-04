// Find the most populated city of each continent

import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import java.util.Set;


public class Exercise2 {
    public static void main(String[] args) {
        CountryDao countryDao = InMemoryWorldDao.getInstance();

        Set<String> continents = countryDao.getAllContinents();

        Map<String, City> highestCity = new HashMap<>();

        continents.forEach(continent -> {
            List<Country> countries = countryDao.findCountriesByContinent(continent);

            List<City> highestCitiesInContinent = new ArrayList<>();

            countries.forEach(country -> {
                Optional<City> highestPopulatedCityInCountry = country.getCities().stream()
                        .max(Comparator.comparing(City::getPopulation));
                highestPopulatedCityInCountry.ifPresent(highestCitiesInContinent::add);
            });

            City highestCityInContinent = highestCitiesInContinent.stream()
                .max(Comparator.comparing(City::getPopulation))
                .orElse(null);

            highestCity.put(continent, highestCityInContinent);
        });

        System.out.println("Highest Populated Cities in Each Continent:");
        highestCity.forEach((continent, city) -> {
            if (continent != "Antarctica") 
                System.out.println(continent + ": " + city.getName() + " with population of " + city.getPopulation());
        });        
    }

}
