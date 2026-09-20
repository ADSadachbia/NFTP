import java.util.Scanner;

public class MatricesTeclado {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Definir las matrices
        int[][] A = new int[3][3];
        int[][] B = new int[3][3];
        int[][] C = new int[3][3];

        // Pedir al usuario que ingrese los elementos de la matriz A
        System.out.println("Ingrese los elementos de la matriz A:");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                A[i][j] = scanner.nextInt();
            }
        }

        // Pedir al usuario que ingrese los elementos de la matriz B
        System.out.println("Ingrese los elementos de la matriz B:");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                B[i][j] = scanner.nextInt();
            }
        }

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

        scanner.close();
    }
}
