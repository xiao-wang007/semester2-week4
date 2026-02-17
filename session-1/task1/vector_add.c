
/*
 * Sum of 2 vectors
 */

 #include <stdio.h>

 int main( void ) {
    float a[]={ 1.0,1.0,1.0,1.0,1.0 };
    float b[]={ 2.0,3.0,4.0,5.0,6.0 };
    float c[5];

    // Add vectors a and b, store in c
    for (int i = 0; i < 5; i++) {
        c[i] = a[i] + b[i];
    }
    
    // Print the result
    printf("c = [");
    for (int i = 0; i < 5; i++) {
        printf("%.1f", c[i]);
        if (i < 4) printf(", ");
    }
    printf("]\n");
    
    return 0;
 }
