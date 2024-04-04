import java.util.function.*;

public class TemperatureConverter {

  public static double convertCentigradeToFahrenheit(double centigrade) {
    Function<Double, Double> centigradeToFahrenheit = new Function<Double,Double>() {
      @Override
      public Double apply(Double c) {
        return (c * 9/5) + 32;
      }
    };
    return centigradeToFahrenheit.apply(centigrade);
  }

  public static void main(String[] args) {
    double centigrade = 25.0;
    double fahrenheit = convertCentigradeToFahrenheit(centigrade);
    System.out.println("Temperature in Centigrade: " + centigrade);
    System.out.println("Temperature in Fahrenheit: " + fahrenheit);
  }
}
