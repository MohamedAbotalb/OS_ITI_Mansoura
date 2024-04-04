import java.math.BigDecimal;

public class ComplexNumber<T extends BigDecimal, R extends BigDecimal> {
  private T real;
  private T imaginary;

  public ComplexNumber(T real, T imaginary) {
    this.real = real;
    this.imaginary = imaginary;
  }

  @SuppressWarnings("unchecked")
  public ComplexNumber<T, R> add(ComplexNumber<T, R> complex) {
    T newReal = (T) this.real.add(complex.real);
    R newImaginary = (R) this.imaginary.add(complex.imaginary);
    return new ComplexNumber<>(newReal, newImaginary);
  }

  @SuppressWarnings("unchecked")
  public ComplexNumber<T, R> subtract(ComplexNumber<T, R> other) {
    T newReal = (T) this.real.subtract(other.real);
    R newImaginary = (R) this.imaginary.subtract(other.imaginary);
    return new ComplexNumber<>(newReal, newImaginary);
  }

  @Override
  public String toString() {
    return real + " + " + imaginary + "i";
  }
}

