import java.util.Map;
import java.util.TreeMap;
import java.util.TreeSet;

public class WordDictionary {
  private Map<Character, TreeSet<String>> wordsMap;

  public WordDictionary() {
    wordsMap = new TreeMap<>();

    for (char c = 'a'; c <= 'z'; c++) {
      wordsMap.put(c, new TreeSet<>());
    }
  }

  public void addWord(String word) {
    if (word != null && !word.isEmpty()) {
      char firstLetter = Character.toLowerCase(word.charAt(0));
      if (Character.isLetter(firstLetter)) {
        TreeSet<String> words = wordsMap.get(firstLetter);
        words.add(word.toLowerCase());
      }
    }
  }

  public void printAllWords() {
    for (Map.Entry<Character, TreeSet<String>> entry : wordsMap.entrySet()) {
      System.out.println(entry.getKey() + ": " + entry.getValue());
    }
  }

  public void printWordsOfLetter(char letter) {
    TreeSet<String> words = wordsMap.get(Character.toLowerCase(letter));
    if (words != null) {
      System.out.println(letter + ": " + words);
    } else {
      System.out.println("No words found for letter " + letter);
    }
  }

  public void printAllLetters() {
    System.out.println("Letters in the dictionary:");
    wordsMap.keySet().forEach(System.out::println);
  }
}