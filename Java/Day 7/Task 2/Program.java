public class Program {
  public static void main(String[] args) {
    MarqueeGUI app = new MarqueeGUI("Welcome Java World");
    Thread thread = new Thread(app);
    thread.start();
  }
}
