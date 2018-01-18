#include <stdio.h>

// Pointers as arguments 
void decompose(double x, long *int_part, double *frac_part) {
  *int_part = (long) x;
  *frac_part = x - *int_part;
  printf("x: %f\n", x);
  printf("int part: %li\n", *int_part);
  printf("fraction part: %f\n", *frac_part);
}

int main()
{
  int i, *p;

  double x = 10.1234;

  long int_part;
  double frac_part;

  p = &i; 

  // Also possible to initialize pointer at time of declartion:
  // *p = &i;

  printf("Address of int i: %p\n", p);

  // Using the indirection operator, *
  // we may access whats stored in the object, i
  printf("Value of int i: %d\n", *p);

  // Set i equal to 1
  i = 1;
  printf("i = %d\n", i);

  // Change value of i via its pointer, p
  *p = 2;

  printf("i = %d\n", i);

  // By passing pointers as arguments
  // The values of int_part and frac_part
  // May be modified within the decompose function scope
  decompose(x, &int_part, &frac_part);

  printf("After decompose\n");
  printf("int part: %li\n", int_part);
  printf("fraction part: %f\n", frac_part);

  return 0;
}