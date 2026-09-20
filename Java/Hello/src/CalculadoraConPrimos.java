import java.util.Scanner;

public class CalculadoraConPrimos {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Calculadora con Verificación de Número Primo");

        System.out.print("Ingresa la expresión matemática: ");
        String expression = scanner.nextLine();

        double result = eval(expression);
        System.out.println("El resultado es: " + result);

        if (esPrimo((int) result)) {
            System.out.println("El resultado es un número primo");
        } else {
            System.out.println("El resultado no es un número primo");
        }

        scanner.close();
    }

    public static double eval(String expression) {
        return Double.parseDouble(expression);
    }

    public static boolean esPrimo(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
}
