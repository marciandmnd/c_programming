#include <stdio.h>

// Number of integers to scan into array
#define N 10

// min_max prototype
void min_max(int a[], int n, int *min, int *max);

int main(void)
{
  int b[N], i, min, max;

  printf("Enter %d numbers: ", N);
  
  for(i = 0; i < N; i++) 
    scanf("%d", &b[i]);

  min_max(b, N, &min, &max);

  printf("Smallest: %d\n", min);
  printf("Largest: %d\n", max);

  return 0;
}


void min_max(int a[], int n, int *min, int *max)
{
  int i;

  *min = *max = a[0];

  for(i = 1; i < n; i++) {
    if (a[i] < *min)
      *min = a[i];
    else if (a[i] > *max)
      *max = a[i];
  }
}
