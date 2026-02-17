
/*
 * Dot product of 2 vectors
 */

 #include <stdio.h>

 int main( void ) {
    float a[]={ 1.0,1.0,1.0,1.0,1.0 };
    float b[]={ 2.0,3.0,4.0,5.0,6.0 };
    float d;

    // Compute dot product: d = sum(a[i] * b[i])
    d = 0.0;
    for (int i = 0; i < 5; i++) {
        d += a[i] * b[i];
    }
    
    // Print the result
    printf("Dot product = %.1f\n", d);
    
    return 0;
 }