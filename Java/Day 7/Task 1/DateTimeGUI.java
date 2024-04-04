import javax.swing.*;
import java.awt.*;
import java.util.Date;

public class DateTimeGUI extends JFrame implements Runnable {
  private Thread th;
  private JLabel timeLabel;

  public DateTimeGUI() {
    setTitle("Date & Time Frame Application");
    setSize(800, 600);
    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    setLocationRelativeTo(null);

    timeLabel = new JLabel();
    timeLabel.setFont(new Font("Arial", Font.BOLD, 24));
    timeLabel.setHorizontalAlignment(JLabel.CENTER);
    add(timeLabel, BorderLayout.CENTER);

    th = new Thread(this);
    th.start();
  }

  @Override
  public void run() {
    while (true) {
      Date date = new Date();
      timeLabel.setText(date.toString());
      try {
        Thread.sleep(1000);
      } catch (InterruptedException e) {
        e.printStackTrace();
      }
    }
  }

  public static void main(String[] args) {
    SwingUtilities.invokeLater(() -> {
      DateTimeGUI app = new DateTimeGUI();
      app.setVisible(true);
    });
  }
}
