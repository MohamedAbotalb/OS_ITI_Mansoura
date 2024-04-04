// Find the highest populated city of each country

import java.util.Comparator;
import java.util.List;
import java.util.Optional;


public class Exercise1 {

   public static void main(String[] args) {
      CountryDao countryDao = InMemoryWorldDao.getInstance();

      List<Country> countries = countryDao.findAllCountries(); 

      countries.forEach(country -> {
         Optional<City> highestPopulatedCity = country.getCities().stream()
                 .max(Comparator.comparing(City::getPopulation));
     
         highestPopulatedCity.ifPresent(city -> {
            System.out.println("Highest populated city in " + country.getName() + " is " + city.getName() + " with population of " + city.getPopulation());
         });
      });
   }

}