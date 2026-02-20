"""
Approximate Pi using the Leibniz series:
    pi_n = 4 * (1 - 1/3 + 1/5 - 1/7 + 1/9 - ...)
Usage: python compute_pi.py <number_of_terms>

Comparison with C:
- Python: No explicit type declarations needed
- C: Must declare variables with types (int, double)
- Python: Built-in abs() works for floats
- C: Must use fabs() from math.h
- Python: Much more concise code
"""

import sys

def main():
    Pi = 3.1415926535897932
    
    # Check command line argument
    if len(sys.argv) != 2:
        print(f"Usage: {sys.argv[0]} <number_of_terms>")
        sys.exit(1)
    
    n = int(sys.argv[1])
    if n <= 0:
        print("Error: number of terms must be positive")
        sys.exit(1)
    
    # Compute pi using the Leibniz series
    pi_n = 0.0
    sign = 1.0
    
    for k in range(n):
        pi_n += sign / (2.0 * k + 1.0)
        sign = -sign  # Alternate sign
    
    pi_n *= 4.0  # Multiply by 4
    
    # Calculate error
    error = abs(Pi - pi_n)
    
    # Print results
    print(f"Number of terms: {n}")
    print(f"Computed pi_n:   {pi_n:.15f}")
    print(f"Actual Pi:       {Pi:.15f}")
    print(f"Error:           {error:.15f}")

if __name__ == "__main__":
    main()
