import java.util.Random;

public class LinearSearch {
  private int elements[];
  private Random rand;

  public LinearSearch() {
    elements = new int[1000];
    rand = new Random();
  }

  public void fillElementsValues() {
    for(int i = 0; i < 1000; i++) {
      elements[i] = rand.nextInt(1000);
    }
  }

  public void findMinimumElement() {
    int minimumElement = elements[0];

    for (int i = 1; i < elements.length; i++) {
      if (minimumElement > elements[i]) {
        minimumElement = elements[i];
      }
    }

    System.out.println("The Minimum Element in the array = " + minimumElement);
  }

  public void findMaximumElement() {
    int maximumElement = elements[0];

    for (int i = 1; i < elements.length; i++) {
      if (maximumElement < elements[i]) {
        maximumElement = elements[i];
      }
    }

    System.out.println("The Minimum Element in the array = " + maximumElement);
  }
}
