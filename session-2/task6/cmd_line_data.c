
/*
 * Process command line arguments: 1 integer, 1 string, 1 double
 * Usage: ./cmd_line_data -2 abcd 4.2
 */

#include <stdio.h>
#include <stdlib.h>

int main( int argc, char **argv ) {
    
    // Check for correct number of arguments
    if (argc != 4) {
        printf("Usage: %s <integer> <string> <double>\n", argv[0]);
        printf("Example: %s -2 abcd 4.2\n", argv[0]);
        return 1;
    }

    // Parse command line arguments
    int int_val = atoi(argv[1]);      // Convert string to integer
    char *str_val = argv[2];           // String is already a char*
    double dbl_val = atof(argv[3]);   // Convert string to double

    // Print the values with appropriate formatting
    printf("Integer value: %d\n", int_val);
    printf("String value: %s\n", str_val);
    printf("Double value: %.2f\n", dbl_val);

    return 0;
}
