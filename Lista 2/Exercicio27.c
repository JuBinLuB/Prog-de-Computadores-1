#include <stdio.h>

float media(int vetor[], int t) {

  float med = 0;
  
  for (int i = 0; i < t; ++i) {
    med += vetor[i];
  }
  
  return (med/t);
}

int main(void) {

  int v[10] = {0};
  int i;

  printf ("Insira 10 valores ou 0 para interromper:\n\n");
  
  for (i = 0; i < 10; ++i) {
    printf ("Digite o %d valor: ", i+1);
    scanf ("%d", &v[i]);
    if (v[i] == 0) {
      break;
    } 
  }

  printf ("\nA media dos valores eh %.1f\n", media(v, i));
  
  return 0;
}