
/*
 * Some small tests of the string library
 */

#include <stdio.h>
#include <string.h>

int main( void ) {
    char str1[100] = "hello";
    char str2[100] = "goodbye";
    char str3[100];

    // use printf to verify the following tests
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    // use 'strcmp' to compare 2 strings - print the return value
    int cmp_result = strcmp(str1, str2);
    printf("strcmp(str1, str2) = %d\n", cmp_result);
    // Returns < 0 if str1 < str2, 0 if equal, > 0 if str1 > str2

    // use 'strcat' to concatenate 2 strings - print the resulting string
    strcat(str1, str2);  // str1 now contains "hellogoodbye"
    printf("After strcat(str1, str2), str1 = %s\n", str1);

    // use 'strcpy' to copy a string into str3 - print string 3
    strcpy(str3, "copied text");
    printf("After strcpy(str3, \"copied text\"), str3 = %s\n", str3);

    return 0;
}
