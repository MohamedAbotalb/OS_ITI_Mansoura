// Find the Highest populated capital city

import java.util.Objects;
import java.util.Optional;
import static java.util.Comparator.comparing;
import static java.util.stream.Collectors.maxBy;

public class Exercise5 {

    public static void main(String[] args) {
        
        CountryDao countryDao = InMemoryWorldDao.getInstance();
        CityDao cityDao = InMemoryWorldDao.getInstance();
        
		Optional<City> highestPopulatedCapital = countryDao.findAllCountries()
                .stream()
                .map(country -> country.getCapital())
                .map(cityId -> cityDao.findCityById(cityId))
                .filter(Objects::nonNull)
                .collect(maxBy(comparing(City::getPopulation)));

        highestPopulatedCapital.ifPresent(capital ->
                System.out.println("Highest populated capital city: " + capital.getName() +
                " with a population of " + capital.getPopulation()));
    }

}