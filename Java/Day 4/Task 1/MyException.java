/* 
 * Create your own exception class and write down two other 
 * classes, the first will contain three methods throwing your
 * newly created exception class and the second class will be
 * calling the methods that throws exception using the try-catch-finally block.
*/

public class MyException extends Exception{
  public MyException(String message) {
    super(message);
  }
}