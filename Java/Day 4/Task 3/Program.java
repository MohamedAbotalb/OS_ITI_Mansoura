import java.math.BigDecimal;

public class Program {
  public static void main(String[] args) {
    
    ComplexNumber<BigDecimal, BigDecimal> firstComplex = new ComplexNumber<>(BigDecimal.valueOf(3.0), BigDecimal.valueOf(4.0));
    ComplexNumber<BigDecimal, BigDecimal> secondComplex = new ComplexNumber<>(BigDecimal.valueOf(5.0), BigDecimal.valueOf(2.0));

    System.out.println("First Complex: " + firstComplex);
    System.out.println("Second Complex: " + secondComplex);
    System.out.println("Addition: " + firstComplex.add(secondComplex));
    System.out.println("Subtraction: " + firstComplex.subtract(secondComplex));
  }
}