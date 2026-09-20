public class TablaDePantalla {

    public static void main(String[] args) {
        int C;

        for (int i = 1; i <= 12; i++) {
            for (int z = 1; z <= 12; z++) {
                C = i * z;
                System.out.println(i + "x" + z + "=" + C);
            }
        }
    }
}
