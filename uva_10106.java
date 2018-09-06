import java.math.BigInteger;
import java.util.Scanner;
 
public class Main
{
    public static void main (String args[])
    {
        Scanner s = new Scanner(System.in);
 
        while (s.hasNextBigInteger())
        {
            BigInteger a = s.nextBigInteger();
            BigInteger b = s.nextBigInteger();
 
            System.out.printf("%s\n",a.multiply(b));
        }
    }
}