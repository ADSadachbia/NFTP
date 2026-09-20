public class TablasMultiplicarRangos {

    public static void main(String[] args) {
        System.out.println("Tablas de multiplicar del 1 al 12:");
        imprimirTablas(1, 12);

        System.out.println("\nTablas de multiplicar del 1 al 6:");
        imprimirTablas(1, 6);

        System.out.println("\nTablas de multiplicar del 12 al 7 en orden reverso:");
        imprimirTablasReversas(12, 7);
    }

    public static void imprimirTablas(int desde, int hasta) {
        for (int i = 1; i <= 12; i++) {
            for (int j = desde; j <= hasta; j++) {
                System.out.printf("%2d x %2d = %3d\t", j, i, j * i);
            }
            System.out.println();
        }
    }

    public static void imprimirTablasReversas(int desde, int hasta) {
        for (int i = 12; i >= 1; i--) {
            for (int j = desde; j >= hasta; j--) {
                System.out.printf("%2d x %2d = %3d\t", j, i, j * i);
            }
            System.out.println();
        }
    }
}
