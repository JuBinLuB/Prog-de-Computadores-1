#include <stdio.h>
#include <stdlib.h>

void par_impar(int *x, int tam) {

  int par = 0;
  int imp = 0;

  for (int i = 0; i < tam; ++i) {
    if (x[i] % 2 == 0) {
      ++par;
    } else {
      ++imp;
    }
  }
  
  printf ("\nNumeros pares digitados: %d\n", par);
  printf ("Numeros impares digitados: %d\n", imp);
}

int main(void) {

  int n;

  printf ("Insira quantos valores pretende digitar: ");
  scanf("%d", &n);

  int *p = malloc(n * sizeof(int));

  printf ("\n");
  for (int i = 0; i < n; ++i) {
    printf ("Digite o %d valor: ", i+1);
    scanf("%d", &p[i]);
  }

  par_impar(p, n);
  
  free(p);
  return 0;
}