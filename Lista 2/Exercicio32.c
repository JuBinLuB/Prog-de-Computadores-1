#include <stdio.h>

int soma(int A[5][5]) {

  int di, dj;
  int so = 0;

  for (di = 0; di < 5; ++di) {
    for (dj = 0; dj < 5; ++dj) {
      so += A[di][dj];
    }
  }
  
  return so;
}

int main(void) {

  int matriz[5][5];

  printf ("Insira os valores da Matriz:\n\n");
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      printf ("%d Linha - %d Coluna: ", i+1, j+1);
      scanf ("%d", &matriz[i][j]);
    }
    printf ("\n");
  }

  printf ("A soma dos elementos da Matriz eh: %d\n", soma(matriz));
  
  return 0;
}