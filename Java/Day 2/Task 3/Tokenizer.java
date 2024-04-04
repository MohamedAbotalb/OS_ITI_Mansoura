import java.util.*;

public class Tokenizer {
  public static int getWordOccurrence(String word, String sentence) {
    StringTokenizer tokenizer = new StringTokenizer(sentence, " ");
  
    int count = 0;
    while (tokenizer.hasMoreTokens()) {
      String token = tokenizer.nextToken();
      if (token.equalsIgnoreCase(word)) {
        count++;
      }
    }

    return count;
  }
}
