import javax.swing.JFrame;
import javax.swing.JPanel;
import java.awt.image.BufferedImage;
import java.awt.Graphics;
import javax.imageio.ImageIO;
import java.io.File;
import java.io.IOException;


class BallMovementGUI extends JPanel implements Runnable {
  private int ballX = 0, ballY = 100;
  private boolean isMovingRight = true;
  private boolean isMovingUp = true;

  public BallMovementGUI() {
    new Thread(this).start();
  }

  @Override
  public void run() {
    while (true) {
      if (ballX + 50 >= getWidth()) {
        isMovingRight = false;
      } else if (ballX <= 0) {
        isMovingRight = true;
      }
      if (ballY <= 0) {
        isMovingUp = false;
      } else if (ballY + 30 >= getHeight()) {
        isMovingUp = true;
      }
      ballX += getHorizontalSpeed();
      ballY += getVerticalSpeed();
      try {
        Thread.sleep(150);
      } catch (InterruptedException ex) {
        ex.printStackTrace();
      }
      repaint();
    }
  }

  @Override
  protected void paintComponent(Graphics g) {
    super.paintComponent(g);
    try {
      File imageSrc = new File("ball.png");
      BufferedImage img = ImageIO.read(imageSrc);
      g.drawImage(img, ballX, ballY, 50, 50, this);
    } catch (IOException ex) {
      ex.printStackTrace();
    }
  }

  private int getVerticalSpeed() {
    return isMovingUp ? -20 : 20;
  }

  private int getHorizontalSpeed() {
    return isMovingRight ? 20 : -20;
  }

}
