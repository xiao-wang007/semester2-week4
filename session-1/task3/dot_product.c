
/*
 * Dot product of 2 vectors
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main( void ) {
    int n = 5;
    float *a, *b;  // stack-based pointers
    float d;       // scalar result

    // allocation of heap memory for vectors
    a = calloc( n, sizeof(float) );
    b = calloc( n, sizeof(float) );

    // Initialize vectors with numerical data
    for (int k = 0; k < n; k++) {
        a[k] = 1.0;
        b[k] = (float)(k + 2);  // b = {2, 3, 4, 5, 6}
    }

    // Compute dot product: d = sum(a[k] * b[k])
    d = 0.0;
    for (int k = 0; k < n; k++) {
        d += a[k] * b[k];
    }

    // Print the result
    printf("Dot product = %.1f\n", d);

    // explicit deallocation of heap memory before exit
    free(a);
    free(b);

    return 0;
 }