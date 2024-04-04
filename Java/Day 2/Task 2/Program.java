public class Program {
  public static void main(String[] args) {
    long startTime;
    long endTime;
    BinarySearch bs = new BinarySearch();

    bs.fillElementsValues();

    startTime = System.nanoTime();
    bs.findMinimumElement();
    endTime = System.nanoTime();

    System.out.println("The Compute Time of the algorithm to find minimum element = " + (endTime - startTime) + " ns");


    startTime = System.nanoTime();
    bs.findMaximumElement();
    endTime = System.nanoTime();

    System.out.println("The Compute Time of the algorithm to find maximum element = " + (endTime - startTime) + " ns");

  }
}
