/*
 * Approximate Pi using the Leibniz series:
 *   pi_n = 4 * (1 - 1/3 + 1/5 - 1/7 + 1/9 - ...)
 * Usage: ./compute_pi <number_of_terms>
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main( int argc, char **argv ) {
    double Pi = 3.1415926535897932;

    // Check command line argument
    if (argc != 2) {
        printf("Usage: %s <number_of_terms>\n", argv[0]);
        return 1;
    }
    
    int n = atoi(argv[1]);
    if (n <= 0) {
        printf("Error: number of terms must be positive\n");
        return 1;
    }
    
    // Compute pi using the Leibniz series
    double pi_n = 0.0;
    double sign = 1.0;
    
    for (int k = 0; k < n; ++k) {
        pi_n += sign / (2.0 * k + 1.0);
        sign = -sign;  // Alternate sign
    }
    pi_n *= 4.0;  // Multiply by 4
    
    // Calculate error
    double error = fabs(Pi - pi_n);
    
    // Print results
    printf("Number of terms: %d\n", n);
    printf("Computed pi_n:   %.15f\n", pi_n);
    printf("Actual Pi:       %.15f\n", Pi);
    printf("Error:           %.15f\n", error);

    return 0;
}
 