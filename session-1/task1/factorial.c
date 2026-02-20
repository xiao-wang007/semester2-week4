
/*
 * Factorial (recursive)
 */

#include <stdio.h>

long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main(void) {
    for (int i = 0; i < 20; i++) {
        printf("factorial(%d) = %lld\n", i, factorial(i));
    }
    return 0;
}


/*
int main(void)
{
    int f[20];

    // factorial(0) = 1
    f[0] = 1;
    
    // factorial(n) = n * factorial(n-1)
    for (int i = 1; i < 20; i++) {
        f[i] = i * f[i-1];
    }
    
    // Print the results
    for (int i = 0; i < 20; i++) {
        printf("factorial(%d) = %d\n", i, f[i]);
    }
}
*/
