#include <stdio.h>

int main() {

  int n1, n2;

  printf ("Digite dois numeros:\n");
  scanf ("%d%d", &n1, &n2);

  printf ("\n");

  if (n1 <= n2){
    for (; n1 <= n2; ++n1) {
    printf ("%d ", n1);
    }
  } else {
    for (; n1 >= n2; ++n2) {
      printf("%d ", n2);
    }
  }

  printf("\n");
  
  return 0;
}