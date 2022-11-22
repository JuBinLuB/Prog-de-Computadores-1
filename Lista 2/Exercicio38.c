#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void par_impar(int *x, int tam) {

  int par = 0;
  int imp = 0;

  for (int i = 0; i < tam; i++) {
    if (x[i] % 2 == 0) {
      par++;
    } else {
      imp++;
    }
  }
  
  printf ("\nNúmeros pares digitados: %d\n", par);
  printf ("Números ímpares digitados: %d\n", imp);
}

int main(void) {

  setlocale(LC_ALL,"Portuguese");

  int n;

  printf ("Insira quantos valores pretende digitar: ");
  scanf("%d", &n);

  int *p = malloc(n * sizeof(int));

  printf ("\n");
  for (int i = 0; i < n; i++) {
    printf ("Digite o %dº valor: ", i+1);
    scanf("%d", &p[i]);
  }

  par_impar(p, n);
  
  free(p);
  return 0;
}