#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  int M[5][5];
  int i, j;
  int linha4 = 0;
  int colun2 = 0;
  int diago1 = 0;
  int diago2 = 0;

  srand(time(NULL));

  for (i = 0; i < 5; ++i) {
    for (j = 0; j < 5; ++j) {
      M[i][j] = rand() % 10;
      printf ("%d ", M[i][j]);
    }
    printf ("\n");
  }

  for (i = 0; i < 5; ++i) {
    linha4 += M[3][i];
    colun2 += M[i][1];
    diago1 += M[i][i];
    diago2 += M[i][4-i];
  }

  printf ("\nA soma da Linha 4 da Matriz eh: %d\n", linha4);
  printf ("A soma da Coluna 2 da Matriz eh: %d\n", colun2);
  printf ("A soma da diagonal principal da Matriz eh: %d\n", diago1);
  printf ("A soma da diagonal secundaria da Matriz eh: %d\n", diago2);
  
  return 0;
}