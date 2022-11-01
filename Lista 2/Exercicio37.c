#include <stdio.h>
#include <stdlib.h>

int main(void) {

  float *p = malloc(5 * sizeof(float));

  printf ("Insira cinco valores reais:\n\n");
  
  for (int i = 0; i < 5; ++i) {
    printf ("Digite o %d valor: ", i+1);
    scanf ("%f", &p[i]);
  }

  float maior = p[0];
  float menor = p[0];

  for (int j = 0; j < 5; ++j) {
    if (p[j] > maior) {
      maior = p[j];
    }
    if (p[j] < menor) {
      menor = p[j];
    }
  }
  
  printf ("\nMaior valor: %.3f\nMenor valor: %.3f\n", maior, menor);

  free(p);
  return 0;
}