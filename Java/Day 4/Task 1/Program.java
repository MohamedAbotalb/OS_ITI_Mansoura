public class Program {
  public static void main(String[] args) {
    MyClass myObj = new MyClass();

    // Handling firstMethod exception
    try {
      myObj.firstMethod();
    } catch (MyException e) {
      System.out.println(e.getMessage());
    } finally {
      System.out.println("This is Finally block from handling First Method");
    }

    // Handling secondMethod exception
    try {
      myObj.secondMethod();
    } catch (MyException e) {
      System.out.println(e.getMessage());
    } finally {
      System.out.println("This is Finally block from handling Second Method");
    }

    // Handling thirdMethod exception
    try {
      myObj.thirdMethod();
    } catch (MyException e) {
      System.out.println(e.getMessage());
    } finally {
      System.out.println("This is Finally block from handling Third Method");
    }
  }
}
