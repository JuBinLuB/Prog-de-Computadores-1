#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int soma(int A[7][6]) {

  int i;
  int so = 0;

  for (i = 0; i < 7; ++i) {
    so += A[i][2];
    if (i < 6) {
      so += A[4][i];
    }
  }
  
  return so;
}

int main(void) {

  int matriz[7][6];

  srand(time(NULL));

  for (int i = 0; i < 7; ++i) {
    for (int j = 0; j < 6; ++j) {
      matriz[i][j] = rand() % 10;
      printf ("%d ", matriz[i][j]);
    }
    printf ("\n");
  }
  
  printf ("\nA soma dos elementos da Linha 5 e da Coluna 3 eh: %d\n", soma(matriz));
  
  return 0;
}