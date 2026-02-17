
/*
 * Sum of 2 matrices
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4][4];
    float c[4][4];

    // Initialize matrices a and b to 1
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            a[i][j] = 1.0;
            b[i][j] = 1.0;
        }
    }

    // Compute sum c = a + b
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print the result matrix
    printf("c = a + b:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%.1f ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
 }
