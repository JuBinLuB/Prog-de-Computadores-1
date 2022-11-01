#include <stdio.h>

int var(int vetor[], int tamanho, int valor) {

  int per = -1;
  
  for (int i = 0; i < tamanho; i++) {
    if (vetor[i] == valor) {
      per = i;
    }
  }

  if (per != -1) {
    return 1;
  } else {
    return 0;
  }
}

int main(void) {

  int v[10] = {0};
  int n;

  printf ("Insira 10 valores:\n\n");
  
  for (int i = 0; i < 10; ++i) {
    printf ("Digite o %d valor: ", i+1);
    scanf ("%d", &v[i]);
  }

  printf ("\n\nPor fim, digite um valor qualquer: ");
  scanf ("%d", &n);

  printf ("\n%d\n", var(v, 10, n));
  
  return 0;
}