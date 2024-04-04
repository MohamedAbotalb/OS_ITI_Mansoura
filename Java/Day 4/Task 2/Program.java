import java.util.ArrayList;
import java.util.List;

public class Program {
  public static void drawShapes(List<? extends Shape> lists){
    for(Shape s : lists){
      s.draw();
    }
  }
  public static void main(String[] args) {
    List<Rectangle> rectangles = new ArrayList<>();
    rectangles.add(new Rectangle());
    rectangles.add(new Rectangle());

    List<Circle> circles = new ArrayList<>();
    circles.add(new Circle());
    circles.add(new Circle());

    drawShapes(rectangles);
    drawShapes(circles);
  }
}
