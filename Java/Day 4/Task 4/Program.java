
public class Program {
  public static void main(String[] args) {
    String firstString = "Ahmed";
    String secondString = "Mohamed";

    // check which string is longer
    String longer = StringUtils.betterString(firstString, secondString, (str1, str2) -> str1.length() > str2.length());

    // always return the first string
    String first = StringUtils.betterString(firstString, secondString, (str1, str2) -> true);

    System.out.println("Longer string: " + longer);
    System.out.println("First string: " + first);
  }
}
