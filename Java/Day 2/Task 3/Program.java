import java.util.*;

public class Program {
  public static void main(String[] args) {
    String sentence = "ITI develops people and ITI house of developers and ITI for people";

    String word = "ITI";

    System.out.println("Occurrence of " + word + " is " + WordOccurrence.firstWay(word, sentence) + " times");

    System.out.println("Occurrence of " + word + " is " + WordOccurrence.secondWay(word, sentence) + " times");
  
    System.out.println("Occurrence of " + word + " is " + Tokenizer.getWordOccurrence(word, sentence) + " times");
  }
}
