import javax.swing.SwingUtilities;

public class Program {
  public static void main(String[] args) {
    SwingUtilities.invokeLater(() -> {
      DateTimeGUI app = new DateTimeGUI();
      app.setVisible(true);
    });
  }
}
