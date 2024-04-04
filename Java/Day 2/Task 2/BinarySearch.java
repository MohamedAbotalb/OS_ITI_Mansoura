import java.util.*;

public class BinarySearch {
  private int elements[];
  private Random rand;

  public BinarySearch() {
    elements = new int[1000];
    rand = new Random();
  }

  public void fillElementsValues() {
    for(int i = 0; i < 1000; i++) {
      elements[i] = rand.nextInt(1000);
    }

    Arrays.sort(elements);
  }

  public void findMinimumElement() {
    int low = 0;
    int high = elements.length - 1;
    int min = 0;

    while (low + 1 < high){
      int mid = low + (high - low) / 2;
      
      if(elements[mid] == elements[high]){
          high = mid;
      } else if(elements[mid] > elements[high]){
          low = mid;
      } else {
          high = mid;
      }
    }

    if(elements[low] <= elements[high]){
      min = elements[low];
    } else {
      min = elements[high];
    }

    System.out.println("The Minimum Element in the elements array = " + min);
  }

  public void findMaximumElement() {
    int low = 0;
    int high = elements.length - 1;
    int max = 0;

    while(low + 1 < high){
      int mid = low + (high - low) / 2;
      if(elements[mid] == elements[low]){
        low = mid; 
      } else if(elements[mid] < elements[low]){
        high = mid;
      } else {
        low = mid;
      }
    }

    if(elements[high] >= elements[low]){
      max = elements[high];
    } else{
      max = elements[low];
    }

    System.out.println("The Maximum Element in the elements array = " + max);
  }
}
