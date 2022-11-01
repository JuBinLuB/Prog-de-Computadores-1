#include <stdio.h>

int main() {

  int n1;
  int n2;
  int n3;

  do {
    printf ("\nDigite dois inteiros entre 1 e 10:\n");
    scanf ("%d%d", &n1, &n2);
  } while (n1 < 1 || n2 < 1 || n1 > 10 || n2 > 10);
  
  n3 = n1 + n2;
  switch (n3) {
    case 2 ...7:
      printf ("\nA media dos numeros eh igual a %.1f\n", (n1 + (float)n2) / 2);
    break;
    case 8:
      n3 = n1 * n2;
      printf ("\nO produto entre os numeros eh igual a %d\n", n3);
    break;
    case 9 ...18:
      if (n1 > n2) {
        printf ("\n%d dividido por %d eh igual a %.1f.\n", n1, n2, n1/(float)n2);
      } else {
        printf ("\n%d dividido por %d eh igual a %.1f.\n", n2, n1, n2/(float)n1);
      }
    break;
  }

  return 0;
}