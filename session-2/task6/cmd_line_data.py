"""
Process command line arguments: 1 integer, 1 string, 1 double
Usage: python cmd_line_data.py -2 abcd 4.2

Comparison with C:
- Python: Type conversion is simpler with built-in int() and float()
- C: Requires stdlib.h and functions atoi(), atof()
- Python: argv is a list of strings, accessed directly
- C: argv is char** (array of char pointers)
"""

import sys

def main():
    # Check for correct number of arguments
    if len(sys.argv) != 4:
        print(f"Usage: {sys.argv[0]} <integer> <string> <double>")
        print(f"Example: {sys.argv[0]} -2 abcd 4.2")
        sys.exit(1)
    
    # Parse command line arguments (much simpler than C!)
    int_val = int(sys.argv[1])      # Convert string to integer
    str_val = sys.argv[2]            # String is already a string
    dbl_val = float(sys.argv[3])    # Convert string to float/double
    
    # Print the values
    print(f"Integer value: {int_val}")
    print(f"String value: {str_val}")
    print(f"Double value: {dbl_val:.2f}")

if __name__ == "__main__":
    main()
