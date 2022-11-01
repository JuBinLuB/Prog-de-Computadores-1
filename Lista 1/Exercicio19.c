#include <stdio.h>

void estacao(int dia, int mes) {

  switch (mes) {
    case 1 ...2:
      printf ("\nVerao.\n");
    break;
    case 3:
      if (dia >= 21) {
        printf ("\nOutono.\n");
      } else {
        printf ("\nVerao.\n");
      }
    case 4 ...5:
      printf ("\nOutono.\n");
    break;
    case 6:
      if(dia >= 21) {
        printf ("\nInverno.\n");
      } else {
        printf ("\nOutono.\n");
      }
    break;
    case 7 ...8:
      printf ("\nInverno.\n");
    break;
    case 9:
      if (dia >= 23) {
        printf ("\nPrimavera.\n");
      } else {
        printf ("\nInverno.\n");
      }
    break;
    case 10 ...11:
      printf ("\nPrimavera.\n");
    break;
    case 12:
      if (dia >= 21) {
        printf ("\nVerao.\n");
      } else {
        printf ("\nPrimavera.\n");
      }
    break;
    default:
      printf ("\nMes Invalido.\n");
    break;
  }
}

int main() {

  int d, m;

  printf ("Insira dia e mes:\n");
  scanf ("%d%d", &d, &m);
  estacao(d, m);

  return 0;
}