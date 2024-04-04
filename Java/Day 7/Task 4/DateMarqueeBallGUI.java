import javax.imageio.ImageIO;
import javax.swing.*;
import java.awt.*;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;
import java.util.Date;

public class DateMarqueeBallGUI extends JFrame {
    
    private DateTimeGUI dateTimeGUI;
    private MarqueeGUI marqueeGUI;
    private BallMovementGUI ballMovementGUI;

    public DateMarqueeBallGUI() {
        setTitle("Multiple GUIs on Same Frame");
        setSize(800, 600);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new GridLayout(3, 1));

        dateTimeGUI = new DateTimeGUI();
        marqueeGUI = new MarqueeGUI("Welcome Java World");
        ballMovementGUI = new BallMovementGUI();

        add(dateTimeGUI);
        add(marqueeGUI);
        add(ballMovementGUI);

        setLocationRelativeTo(null);
        setVisible(true);
    }

    public class DateTimeGUI extends JPanel {
        private JLabel timeLabel;

        public DateTimeGUI() {
            timeLabel = new JLabel();
            timeLabel.setFont(new Font("Arial", Font.BOLD, 24));
            timeLabel.setHorizontalAlignment(JLabel.CENTER);
            add(timeLabel);

            Thread th = new Thread(() -> {
                while (true) {
                    Date date = new Date();
                    timeLabel.setText(date.toString());
                    try {
                        Thread.sleep(1000);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                }
            });
            th.start();
        }
    }

    public class MarqueeGUI extends JPanel {
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
            add(label);

            Thread th = new Thread(() -> {
                while (running) {
                    marqueeX += speed;

                    if (marqueeX > getWidth()) {
                        marqueeX = -label.getWidth();
                    }

                    marqueeY = (getHeight() - getTextHeight()) / 2;

                    label.setBounds(marqueeX, marqueeY, label.getPreferredSize().width, label.getPreferredSize().height);

                    try {
                        Thread.sleep(20);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                }
            });
            th.start();
        }

        private int getTextHeight() {
            FontMetrics metrics = label.getFontMetrics(label.getFont());
            return metrics.getHeight();
        }
    }

    class BallMovementGUI extends JPanel {
        private int ballX = 0, ballY = 100;
        private boolean isMovingRight = true;
        private boolean isMovingUp = true;

        public BallMovementGUI() {
            Thread th = new Thread(() -> {
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
            });
            th.start();
        }

        @Override
        protected void paintComponent(Graphics g) {
            super.paintComponent(g);

						try {
              File imageSrc = new File("ball.png");
              BufferedImage img;
							img = ImageIO.read(imageSrc);
              g.drawImage(img, ballX, ballY, 50, 50, this);
						} catch (IOException e) {
							e.printStackTrace();
						}
            
        }

        private int getVerticalSpeed() {
            return isMovingUp ? -20 : 20;
        }

        private int getHorizontalSpeed() {
            return isMovingRight ? 20 : -20;
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            new DateMarqueeBallGUI();
        });
    }
}

