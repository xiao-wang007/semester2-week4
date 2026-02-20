"""
Concatenate command line arguments and search for a character
Usage: python string_search.py The quick brown fox

Comparison with C:
- Python: Can join strings using ' '.join() - much simpler!
- C: Must use strcat() in a loop
- Python: Can use str.find() or `in` operator for searching
- C: Must use strcspn() or manual searching
- Python: No memory management concerns
- C: Must be careful about buffer sizes
"""

import sys

def main():
    search_char = 'k'  # Character to search for
    
    # Check for command line arguments
    if len(sys.argv) < 2:
        print(f"Usage: {sys.argv[0]} <words...>")
        print(f"Example: {sys.argv[0]} The quick brown fox")
        sys.exit(1)
    
    # Concatenate all command line arguments (much simpler than C!)
    sentence = ' '.join(sys.argv[1:])
    
    print(f'Full sentence: "{sentence}"')
    print(f"Searching for character: '{search_char}'")
    
    # Find position of first occurrence
    pos = sentence.find(search_char)
    
    if pos != -1:
        print(f"Character '{search_char}' found at position {pos}")
        print(f"Character at that position: '{sentence[pos]}'")
    else:
        print(f"Character '{search_char}' not found in string")

if __name__ == "__main__":
    main()
