import java.util.Scanner;

public class Contador {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        for (int x = 1; x <= 100; x++) {
            System.out.println(x);
        }
        
        scanner.close();
    }
}
