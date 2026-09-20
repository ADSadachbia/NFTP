import java.util.Scanner;

public class RaízCuadrada {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Calculadora de Raíz Cuadrada");
        System.out.print("Introduce un número: ");
        double numero = scanner.nextDouble();

        double raiz = Math.sqrt(numero);
        System.out.println("La raíz cuadrada de " + numero + " es " + raiz);

        scanner.close();
    }
}
