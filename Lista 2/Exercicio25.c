#include <stdio.h>

int maior(int vetor[], int t) {

  int n = vetor[0];

  for (int i = 0; i < t; ++i) {
    if (vetor[i] > n) {
      n = vetor[i];
    }
  }

  return n;
}

int main(void) {

  int v[10];

  printf ("Insira 10 valores\n\n");
  
  for (int i = 0; i < 10; ++i) {
    printf ("Digite o %d valor: ", i+1);
    scanf ("%d", &v[i]);
  }

  printf ("\nO maior elemento digitado eh o numero %d.\n", maior(v, 10));
  
  return 0;
}