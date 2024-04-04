import java.util.function.Predicate;

public class StringChecker {
  public static boolean containsOnlyAlphabets(String str, Predicate<Character> predicate) {
    for (char c : str.toCharArray()) {
      if (!predicate.test(c)) {
        return false;
      }
    }
    return true;
  }
}
