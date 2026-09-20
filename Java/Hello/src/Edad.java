import java.util.Scanner;

public class Edad {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingresa tu fecha de nacimiento (DD MM AAAA): ");
        int dia = scanner.nextInt();
        int mes = scanner.nextInt();
        int anio = scanner.nextInt();

        int edad = 2023 - anio;
        if (mes > 12 || (mes == 12 && dia > 1)) {
            edad--;
        }

        System.out.println("Tu edad es: " + edad + " años.");

        scanner.close();
    }
}
