public class Program {
  public static void main(String[] args) {
    long startTime;
    long endTime;
    LinearSearch ls = new LinearSearch();

    ls.fillElementsValues();

    startTime = System.nanoTime();
    ls.findMinimumElement();
    endTime = System.nanoTime();

    System.out.println("The Compute Time of the algorithm to find minimum element = " + (endTime - startTime) + " ns");


    startTime = System.nanoTime();
    ls.findMaximumElement();
    endTime = System.nanoTime();

    System.out.println("The Compute Time of the algorithm to find maximum element = " + (endTime - startTime) + " ns");

  }
}
