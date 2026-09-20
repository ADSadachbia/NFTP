import java.util.Scanner;

public class InteresCompuesto {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingrese el capital: $");
        float capital = scanner.nextFloat();

        System.out.print("Ingrese la tasa de interés (%): ");
        float tasa = scanner.nextFloat();

        System.out.print("Ingrese el tiempo (en años): ");
        float tiempo = scanner.nextFloat();

        float interesCompuesto = capital * (float) Math.pow(1 + tasa / 100, tiempo) - capital;

        System.out.println("El interés compuesto es: $" + interesCompuesto);

        scanner.close();
    }
}
