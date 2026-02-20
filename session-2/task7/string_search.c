
/* 
 * Concatenate command line arguments and search for a character
 * Usage: ./string_search The quick brown fox
 * Then searches for character 'k'
 */
#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    char sentence[200]="";
    char search_char = 'k';  // Character to search for

    // Check for command line arguments
    if (argc < 2) {
        printf("Usage: %s <words...>\n", argv[0]);
        printf("Example: %s The quick brown fox\n", argv[0]);
        return 1;
    }
    
    // Concatenate all command line arguments into one string
    for (int i = 1; i < argc; ++i) {
        strcat(sentence, argv[i]);
        if (i < argc - 1) {
            strcat(sentence, " ");  // Add space between words
        }
    }
    
    printf("Full sentence: \"%s\"\n", sentence);
    printf("Searching for character: '%c'\n", search_char);
    
    // Use strcspn to find position of first occurrence
    // strcspn returns length of initial segment NOT containing any character in set
    char search_set[2] = {search_char, '\0'};
    size_t pos = strcspn(sentence, search_set);
    
    if (pos < strlen(sentence)) {
        printf("Character '%c' found at position %zu\n", search_char, pos);
        printf("Character at that position: '%c'\n", sentence[pos]);
    } else {
        // Character not found - pos equals string length
        printf("Character '%c' not found in string\n", search_char);
        printf("strcspn returned: %zu (equals string length)\n", pos);
    }

    return 0;
}