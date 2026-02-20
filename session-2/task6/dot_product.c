
#include <stdio.h>
#include <stdlib.h>

// Vector dot product with command-line argument for size
// Usage: ./dot_product <n>

int main( int argc, char **argv ) {
    // Get vector size from command line
    if (argc != 2) {
        printf("Usage: %s <vector_size>\n", argv[0]);
        return 1;
    }
    
    int n = atoi(argv[1]);
    if (n <= 0) {
        printf("Error: vector size must be positive\n");
        return 1;
    }
    
    printf("Computing dot product for vectors of size %d\n", n);
    
    // Dynamically allocate vectors
    float *vec1 = calloc(n, sizeof(float));
    float *vec2 = calloc(n, sizeof(float));
    
    if (vec1 == NULL || vec2 == NULL) {
        printf("Error: memory allocation failed\n");
        return 1;
    }

    // initial data
    for( int k=0; k<n; ++k ) {
        vec1[k] = (float)k;
        vec2[k] = (float)(20-2*k);
    }

    // dot product
    float dot = 0.0;
    for( int k=0; k<n; ++k ) {
        dot += vec1[k]*vec2[k]; 
    }

    printf("Dot product = %f\n", dot);

    // Free dynamically allocated memory
    free(vec1);
    free(vec2);

    return 0;
}