
#include <stdio.h>
#include <string.h>

int main( void ) {
    int a, b;
    char op;
    char input[100];
    int result;

    // Method 1: Using scanf() with format string
    printf("=== Method 1: Using scanf() ===\n");
    printf("Enter expression (e.g., '3 + 4 ='): ");
    int count = scanf("%d %c %d =", &a, &op, &b);
    printf("Read %d values: a=%d, op='%c', b=%d\n", count, a, op, b);
    
    // Clear input buffer
    while (getchar() != '\n');

    // Method 2: Using fgets() and sscanf()
    printf("\n=== Method 2: Using fgets() and sscanf() ===\n");
    printf("Enter expression (e.g., '5 - 2 ='): ");
    fgets(input, sizeof(input), stdin);
    count = sscanf(input, "%d %c %d =", &a, &op, &b);
    printf("Read %d values: a=%d, op='%c', b=%d\n", count, a, op, b);

    // Method 3: Simple calculator with operator handling
    printf("\n=== Method 3: Calculator ===\n");
    printf("Enter expression (e.g., '4 * 6 ='): ");
    fgets(input, sizeof(input), stdin);
    count = sscanf(input, "%d %c %d =", &a, &op, &b);
    
    if (count == 3) {
        switch(op) {
            case '+': result = a + b; break;
            case '-': result = a - b; break;
            case '*': result = a * b; break;
            case '/': 
                if (b != 0) result = a / b;
                else { printf("Error: Division by zero\n"); return 1; }
                break;
            default:
                printf("Unknown operator '%c'\n", op);
                return 1;
        }
        printf("%d %c %d = %d\n", a, op, b, result);
    } else {
        printf("Invalid input format\n");
    }

    return 0;
}