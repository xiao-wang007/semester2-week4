
/*
 * Matrix-vector product
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n = 4;           
    float **a, *b, *c;

    // Dynamically allocate matrix a (n x n)
    a = malloc(n * sizeof(float *));
    for (int i = 0; i < n; i++) {
        a[i] = malloc(n * sizeof(float));
    }

    // Dynamically allocate vectors b and c
    b = malloc(n * sizeof(float));
    c = malloc(n * sizeof(float));

    // Initialize matrix a and vector b to 1
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = 1.0;
        }
        b[i] = 1.0;
    }

    // Compute matrix-vector product: c[k] = sum_j(a[k][j] * b[j])
    for (int k = 0; k < n; k++) {
        c[k] = 0.0;
        for (int j = 0; j < n; j++) {
            c[k] += a[k][j] * b[j];
        }
    }

    // Print the result vector
    printf("c = a * b:\n");
    for (int i = 0; i < n; i++) {
        printf("%.1f\n", c[i]);
    }

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free(a[i]);
    }
    free(a);
    free(b);
    free(c);
    
    return 0;
 }
