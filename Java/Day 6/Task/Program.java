public class Program {
  public static void main(String[] args) {
    WordDictionary dictionary = new WordDictionary();

    dictionary.addWord("apple");
    dictionary.addWord("ant");
    dictionary.addWord("ant");
    dictionary.addWord("bear");
    dictionary.addWord("banana");
    dictionary.addWord("cat");
    dictionary.addWord("carrot");
    dictionary.addWord("dog");
    dictionary.addWord("elephant");
    dictionary.addWord("fish");
    dictionary.addWord("grape");
    dictionary.addWord("house");
    dictionary.addWord("icecream");
    dictionary.addWord("jaguar");
    dictionary.addWord("kite");
    dictionary.addWord("lemon");
    dictionary.addWord("monkey");
    dictionary.addWord("noodle");
    dictionary.addWord("orange");
    dictionary.addWord("penguin");
    dictionary.addWord("queen");
    dictionary.addWord("rabbit");
    dictionary.addWord("snake");
    dictionary.addWord("tiger");
    dictionary.addWord("umbrella");
    dictionary.addWord("violet");
    dictionary.addWord("walrus");
    dictionary.addWord("xylophone");
    dictionary.addWord("yak");
    dictionary.addWord("zebra");

    dictionary.printAllWords();

    System.out.println();

    dictionary.printWordsOfLetter('a');
    dictionary.printWordsOfLetter('b');
    dictionary.printWordsOfLetter('c');

    System.out.println();

    dictionary.printAllLetters();
  }
}
