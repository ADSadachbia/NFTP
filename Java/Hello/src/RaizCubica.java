import java.util.Scanner;

public class RaizCubica {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Calculadora de Raíz Cúbica");
        System.out.print("Introduce un número: ");
        double numero = scanner.nextDouble();

        double raiz = Math.cbrt(numero);
        System.out.println("La raíz cúbica de " + numero + " es " + raiz);

        scanner.close();
    }
}
