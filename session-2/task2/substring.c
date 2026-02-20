/*
 * Find a substring within a given string
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    // Define the string to search in and the substring to find
    char sentence[] = "The quick brown fox jumped over the lazy dog";
    char substring[] = "ump";
    
    // Use strstr() to find the substring - returns pointer to first occurrence
    char *result = strstr(sentence, substring);
    
    if (result != NULL) {
        // Print as pointer (memory location)
        printf("As pointer: %p\n", (void *)result);
        
        // Print as character (first character of found substring)
        printf("As character: %c\n", *result);
        
        // Print as string (substring from found position to end)
        printf("As string: %s\n", result);
        
        // Also show the position/index in the original string
        printf("Position in string: %ld\n", result - sentence);
    } else {
        printf("Substring '%s' not found.\n", substring);
    }
    
    return 0;
} 

