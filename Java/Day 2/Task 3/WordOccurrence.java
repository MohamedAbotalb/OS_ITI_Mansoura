/*
 * Given a sentence and a word, your task is that to count the
 * number of occurrences of the given word in the string and
 * print the number of occurrence of the word.
 * 1. Perform the above task using only methods of the String class (2 ways). 
 * 2. Print the tokenizers as a specific word is the delimiter using StringTokenizer class
 * "ITI develops people and ITI house of developers and ITI for people"
 */

public class WordOccurrence {

  public static int firstWay(String word, String sentence) {
    String words[] = sentence.split(" ");
    int wordOccurrence = 0;

    for (String w : words) {
      if (w.equals(word)) {
        wordOccurrence++;
      }
    }

    return wordOccurrence;
  }

  public static int secondWay(String word, String sentence) {
    int wordOccurrence = 0;
    int index = 0;
    while (index != -1) {
      index = sentence.indexOf(word, index);
      if (index != -1) {
        wordOccurrence++;
        index += word.length();
      }
    }
    return wordOccurrence;
  }
  
}
