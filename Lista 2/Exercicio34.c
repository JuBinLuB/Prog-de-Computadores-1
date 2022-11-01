#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menor(int A[6][6]) {

  int menor = A[0][0];

  printf ("A diagonal principal da Matriz eh:\n\n");

  for (int i = 0; i < 6; ++i) {
    if (A[i][i] < menor) {
      menor = A[i][i];
    }
    for (int j = 0; j < i; ++j) {
      printf ("  ");
    }
    printf ("%d", A[i][i]);
    printf ("\n");
  }
  
  return menor;
}

int main(void) {

  int matriz[6][6];

  srand(time(NULL));

  for (int i = 0; i < 6; ++i) {
    for (int j = 0; j < 6; ++j) {
      matriz[i][j] = rand() % 10;
      printf ("%d ", matriz[i][j]);
    }
    printf ("\n");
  }

  printf ("\n");
  printf ("\nMenor elemento da diagonal principal eh: %d.\n", menor(matriz));
  
  return 0;
}