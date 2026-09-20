import java.math.BigInteger;
import java.util.Scanner;

public class ContadorBig {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        BigInteger x = BigInteger.ONE;
        BigInteger limite = new BigInteger("999999999");
        
        while (x.compareTo(limite) <= 0) {
            System.out.println(x);
            x = x.add(BigInteger.ONE);
        }
        
        scanner.close();
    }
}
