// This program calculates an integer raised to the power of another integer

#include <stdio.h>

// Declare Functions
long intToInt (int, int);

int main(void) {
  // Get input
  int number, exponent;
  printf ("Enter input <number> <exponent>: ");
  scanf ("%d %d",&number, &exponent);
  
  // Use program
  long int answer;
  answer = intToInt (number, exponent);

  // Print results
  printf ("The result is:  %ld\n", answer);

  return 0;
}

// Define functions
long int intToInt (int x, int n) {
  if (n == 0) {
    return (1);
  }
  else {
    return (intToInt (x, n-1) * x);
  }
}