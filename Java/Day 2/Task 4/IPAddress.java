import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class IPAddress { 
  public static boolean validateIP(String ip) {
    String rejex = "(\\d{1,2}|(0|1)\\d{2}|2[0-4]\\d|25[0-5])";
    Pattern pattern = Pattern.compile(rejex + "\\." + rejex + "\\." + rejex + "\\." + rejex);
    Matcher matcher = pattern.matcher(ip.trim());
    
    return matcher.matches() ? true : false;
  }

  public static void printIP(String[] ip) {
    for (int i = 0; i < ip.length; i++) {
      System.out.println("IP part " + (i + 1) + " is " + ip[i]);
    }			
  }

  public static void splitIP(String ip) {		
    if (IPAddress.validateIP(ip)){
	String splittedIP[] = ip.trim().split("\\.");
	IPAddress.printIP(splittedIP);
    }else{
	System.out.println("Enter a Valid IP");
    }
  }
}
