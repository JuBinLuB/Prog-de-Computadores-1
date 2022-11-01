#include <stdio.h>

int neg(float vetor[], int t) {

  int n = 0;
  
  for (int i = 0; i < t; ++i) {
    if (vetor[i] < 0) {
      ++n;
    }
  }
  
  return n;
}

int main(void) {

  float v[10];

  printf ("Insira 10 valores\n\n");
  
  for (int i = 0; i < 10; ++i) {
    printf ("Digite o %d valor: ", i+1);
    scanf ("%f", &v[i]);
  }

  printf ("\nO vetor possui %d valor(es) negativos.\n", neg(v, 10));
  
  return 0;
}