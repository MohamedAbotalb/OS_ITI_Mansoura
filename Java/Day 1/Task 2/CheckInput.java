public class CheckInput {

  public static void main(String args[]) {
    if (args.length > 0) {
      int i = 1;
      for (String argument : args) {
        System.out.println("Value of Input [" + i + "] is " + argument);
        i++;
      } 
    } else {
      System.out.println("No input values.");
    }
  }

}