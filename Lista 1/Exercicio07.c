#include <stdio.h>

int main() {

  float nota;

  printf ("Informe a nota do aluno: ");
  scanf ("%f", &nota);

  if (nota < 0 || nota > 100) {
    printf ("\nNOTA INVALIDA\n");
  } else if (nota >= 60) {
    printf ("\nAPROVADO\n");
  } else {
    printf ("\nREPROVADO\n");
  }
  
  return 0;
}