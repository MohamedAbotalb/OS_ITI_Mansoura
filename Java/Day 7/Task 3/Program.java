import javax.swing.JFrame;

public class Program {
  public static void main(String[] args) {
    JFrame frame = new JFrame();
    frame.add(new BallMovementGUI());
    frame.setSize(800, 600);
    frame.setLocationRelativeTo(null); 
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    frame.setVisible(true);
    frame.setTitle("Ball Movement Application");
    frame.setLocationRelativeTo(null);
  }
}
