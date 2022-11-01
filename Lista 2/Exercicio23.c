#include <stdio.h>

int main(void) {

  int n, i, j, k;

  printf ("Digite um valor: ");
  scanf ("%d", &n);

  printf ("\n");

  for (i = 1; i <= n; ++i) {
    for (j = 1; j < i; ++j) {
      printf ("* ");
    }
    
    printf ("- ");
    
    for (k = 1; k <= n-i; ++k) {
      printf ("* ");
    }
    printf ("\n");
  }
  
  return 0;
}