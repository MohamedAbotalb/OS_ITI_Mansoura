public class TwoInputs {
  
  public static void main(String[] args) {
    if (args.length != 2) {
      System.out.println("Please enter only 2 inputs");
      return;
    }

    int numberValue;
    try {
      numberValue = Integer.parseInt(args[0]);
    } catch (NumberFormatException e) {
      System.out.println("First argument must be integer.");
      return;
    }

    String stringValue = args[1];
    for (int i = 0; i < numberValue; i++) {
      System.out.println(stringValue);
    }
  }

}
