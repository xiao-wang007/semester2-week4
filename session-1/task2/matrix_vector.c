
/*
 * Matrix-vector product
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4];
    float c[4];

    // Initialize matrix a to 1
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            a[i][j] = 1.0;
        }
    }

    // Initialize vector b to 1
    for (int i = 0; i < 4; i++) {
        b[i] = 1.0;
    }

    // Compute matrix-vector product: c[k] = sum_j(a[k][j] * b[j])
    for (int k = 0; k < 4; k++) {
        c[k] = 0.0;
        for (int j = 0; j < 4; j++) {
            c[k] += a[k][j] * b[j];
        }
    }

    // Print the result vector
    printf("c = a * b:\n");
    for (int i = 0; i < 4; i++) {
        printf("%.1f\n", c[i]);
    }

    return 0;
 }
