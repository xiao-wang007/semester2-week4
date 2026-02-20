
#include <stdio.h>
#include <stdlib.h>

// Matrix addition with command-line argument for size
// Usage: ./matrix_add <n>

int main( int argc, char **argv ) {
    // Get matrix size from command line
    if (argc != 2) {
        printf("Usage: %s <matrix_size>\n", argv[0]);
        return 1;
    }
    
    int n = atoi(argv[1]);
    if (n <= 0) {
        printf("Error: matrix size must be positive\n");
        return 1;
    }
    
    printf("Computing matrix addition for %dx%d matrices\n", n, n);

    // Dynamically allocate matrices as 1D arrays (row-major order)
    int *mat1 = malloc(n * n * sizeof(int));
    int *mat2 = malloc(n * n * sizeof(int));
    int *sum = malloc(n * n * sizeof(int));
    
    if (mat1 == NULL || mat2 == NULL || sum == NULL) {
        printf("Error: memory allocation failed\n");
        free(mat1);
        free(mat2);
        free(sum);
        return 1;
    }

    // set initial data
    for( int j=0; j<n; ++j) {
        for( int k=0; k<n; ++k ) {
            mat1[j*n + k] = -2;
            mat2[j*n + k] = 3; 
        }
    }

    // compute sum
    for( int j=0; j<n; ++j) {
        for( int k=0; k<n; ++k ) {
            sum[j*n + k] = mat1[j*n + k] + mat2[j*n + k]; 
        }
    }

    // print out the result
    for( int j=0; j<n; ++j) {
        for( int k=0; k<n; ++k ) {
            printf("%d ", sum[j*n + k]);
        }
        printf("\n");
    }

    // Free dynamically allocated memory
    free(mat1);
    free(mat2);
    free(sum);

    return 0;
}