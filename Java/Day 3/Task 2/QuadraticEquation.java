/* 
 * Use the interfaces in java.util.function to build an application
 * that defines the roots of the quadratic equation
 */

import java.util.function.Function;
import java.util.function.BiFunction;
import java.util.Scanner;

public class QuadraticEquation {
  private double a;
  private double b;
  private double c;

  public QuadraticEquation() {
    a = b = c = 0;
  }
  public void getValues() {
    try (Scanner sc = new Scanner(System.in)) {
      System.out.println("Please enter value of a, b and c");

      a = sc.nextDouble();
      b = sc.nextDouble();
      c = sc.nextDouble();

      if (a == 0 || b == 0 || c == 0) {
        System.out.println("The value of a, b or c cannot be 0.");
        return;
      }
    } catch (Exception e) {
        System.out.println("Please enter numbers only");
        return;
    }
  }

  public BiFunction<Double, Double, Double> calculateDiscriminant() {
    return new BiFunction<Double, Double, Double>() {
      @Override
      public Double apply(Double aValue, Double bValue) {
        return (bValue * bValue) - (4 * aValue * c);
      }
    };
  }

  public Function<Double, Double> calculateRoot(int x) {
    return new Function<Double, Double>() {
      @Override
      public Double apply(Double discriminant) {
        return (-b + (x * Math.sqrt(discriminant))) / (2 * a);
      }
    };
  }

  public void solveEquation() {
    this.getValue();
    double discriminant = calculateDiscriminant().apply(a, b);

    if (discriminant > 0) {
      double firstRoot = calculateRoot(1).apply(discriminant);
      double secondRoot = calculateRoot(-1).apply(discriminant);
      System.out.println("Root 1: " + firstRoot);
      System.out.println("Root 2: " + secondRoot);

    } else if (discriminant == 0) {
      double root = calculateRoot(1).apply(discriminant);
      System.out.println("Root: " + root);

    } else {
      System.out.println("No real roots exist.");
    }
  }
}
