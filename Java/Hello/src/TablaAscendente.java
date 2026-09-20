public class TablaAscendente {

    public static void main(String[] args) {
        for (int i = 12; i >= 1; i--) {
            System.out.println("Tabla del " + i + ":");
            for (int j = 12; j >= 1; j--) {
                int resultado = i * j;
                System.out.println(i + " x " + j + " = " + resultado);
            }
            System.out.println();
        }
    }
}
