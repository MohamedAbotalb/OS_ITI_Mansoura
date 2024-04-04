public class StringUtils {
  public static String betterString(String first, String second, TwoStringPredicate predicate) {
    return predicate.test(first, second) ? first : second;
  }  
}
