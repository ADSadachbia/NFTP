import java.util.Scanner;

public class InteresSimple {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingrese el capital: $");
        float capital = scanner.nextFloat();

        System.out.print("Ingrese la tasa de interés (%): ");
        float tasa = scanner.nextFloat();

        System.out.print("Ingrese el tiempo (en años): ");
        float tiempo = scanner.nextFloat();

        float interes = (capital * tasa * tiempo) / 100;

        System.out.println("El interés simple es: $" + interes);

        scanner.close();
    }
}
