#include <stdio.h>

int main(void) {
  int x;
  int octal;
  
  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &x);
  printf("In octal, your number is: %d%d%d%d%d\n",(x/4096)%8,(x/512)%8,(x/64)%8,(x/8)%8,x%8);
}
