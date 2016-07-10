#include <stdio.h>

int main(void) {
  long ean;
  int sum_1, sum_2;

  printf("Enter the first 12 digits of an EAN: ");
  scanf("%ld", &ean);
  sum_1 = ((ean/10000000000) % 10) + ((ean/100000000) % 10) + ((ean/1000000) % 10) + ((ean/10000) % 10) + ((ean/100) % 10) + (ean%10); 
  sum_2 = ((ean/100000000000) % 10) + ((ean/1000000000) % 10) + ((ean/10000000) % 10) + ((ean/100000) % 10) + ((ean/1000) % 10) + ((ean/10)%10);
  printf("Check digit: %d\n", 9-(((sum_1*3)+sum_2)-1)%10);
}
