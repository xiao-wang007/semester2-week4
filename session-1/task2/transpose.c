
/*
 * Transpose of a matrix
 */

 #include <stdio.h>

 int main( void ) {
    int a[4][4];

    // Initialize matrix a[i][j] = 2*i - j
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            a[i][j] = 2*i - j;
        }
    }

    // Print the initial matrix
    printf("Initial matrix A:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }

    // Transpose in-place: swap a[i][j] with a[j][i] for i < j
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    // Print the transposed matrix
    printf("\nTransposed matrix A:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
 }
