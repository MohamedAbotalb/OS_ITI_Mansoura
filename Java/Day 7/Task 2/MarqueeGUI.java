import javax.swing.*;
import java.awt.*;

public class MarqueeGUI extends JFrame implements Runnable {
  private JLabel label;
  private String text;
  private int marqueeX, marqueeY;
  private int speed = 2; 
  private boolean running = true;

  public MarqueeGUI(String text) {
    this.text = text;
    this.marqueeX = 0;

    label = new JLabel(text);
    label.setFont(new Font("Arial", Font.BOLD, 24));
    label.setHorizontalAlignment(JLabel.LEFT);
    label.setVerticalAlignment(JLabel.CENTER);
    getContentPane().add(label, BorderLayout.CENTER);

    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    setTitle("Text Banner Application");
    setSize(800, 600);
    setLocationRelativeTo(null);
    setVisible(true);
  }

  private int getTextHeight() {
    FontMetrics metrics = label.getFontMetrics(label.getFont());
    return metrics.getHeight();
  }

  @Override
  public void run() {
    while (running) {
      // Move the text to the right
      marqueeX += speed;

      // Check when the text reaches the right border, reset its position to start from the left
      if (marqueeX > getWidth()) {
        marqueeX = -label.getWidth();
      }

      // Update the y-coordinate to center the text vertically
      marqueeY = (getHeight() - getTextHeight()) / 2;

      label.setBounds(marqueeX, marqueeY, label.getPreferredSize().width, label.getPreferredSize().height);

      try {
        Thread.sleep(20); // Adjust the delay time as needed for smoother animation
      } catch (InterruptedException e) {
        e.printStackTrace();
      }
    }
  }

  public static void main(String[] args) {
    MarqueeGUI app = new MarqueeGUI("Welcome Java World");
    Thread thread = new Thread(app);
    thread.start();
  }
}
