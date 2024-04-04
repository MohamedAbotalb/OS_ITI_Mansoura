public class Program {
  public static void main(String[] args) {
    String str1 = "Mohamed"; 
    String str2 = "Mohamed123"; 

    boolean firstResult = StringChecker.containsOnlyAlphabets(str1, Character::isLetter);
    boolean secondResult = StringChecker.containsOnlyAlphabets(str2, Character::isLetter);

    // Check if str1 contains only alphabets
    if (firstResult) {
      System.out.println(str1 + " contains only alphabets.");
    } else {
      System.out.println(str1 + " contains non-alphabetic characters.");
    }

    // Check if str2 contains only alphabets
    if (secondResult) {
      System.out.println(str2 + " contains only alphabets.");
    } else {
      System.out.println(str2 + " contains non-alphabetic characters.");
    }
  }
}
