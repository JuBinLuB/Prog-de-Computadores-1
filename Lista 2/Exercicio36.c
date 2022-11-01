#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int *p = malloc(10 * sizeof(int));

  printf ("Insira 10 inteiros...\n\n");

  for (int i = 0; i < 10; ++i) {
    printf ("Digite o %d valor: ", i+1);
    scanf ("%d", &p[i]);
  }

  printf ("\n");
  for (int j = 0; j < 10; ++j) {
    printf ("Conteudo: %d - Endereco: %p\n", p[j], &p[j]);
  }

  free(p);
  return 0;
}