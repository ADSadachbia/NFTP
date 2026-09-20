public class OperacionesMatrices {

    public static void main(String[] args) {
        int[][] A = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
        int[][] B = {{9, 8, 7},
                     {6, 5, 4},
                     {3, 2, 1}};
        int[][] C = new int[3][3];

        // Realizar la suma de matrices
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                C[i][j] = A[i][j] + B[i][j];
            }
        }

        // Imprimir la suma de matrices
        System.out.println("Suma de matrices:");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(C[i][j] + " ");
            }
            System.out.println();
        }

        // Realizar la resta de matrices
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                C[i][j] = A[i][j] - B[i][j];
            }
        }

        // Imprimir la resta de matrices
        System.out.println("Resta de matrices:");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(C[i][j] + " ");
            }
            System.out.println();
        }

        // Realizar la multiplicación de matrices
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                C[i][j] = 0;
                for (int k = 0; k < 3; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        // Imprimir la multiplicación de matrices
        System.out.println("Multiplicación de matrices:");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(C[i][j] + " ");
            }
            System.out.println();
        }
    }
}
