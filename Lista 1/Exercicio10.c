#include <stdio.h>

int main() {

  float nota1;
  float nota2;
  float trab;
  float faltas;

  do {
    printf ("\nInforme de 0 a 10 a nota do aluno na prova 1: ");
    scanf ("%f", &nota1);
  } while (nota1 < 0 || nota1 > 10);
  do {
    printf ("\nInforme de 0 a 10 a nota do aluno na prova 2: ");
    scanf ("%f", &nota2);
  } while (nota2 < 0 || nota2 > 10);
  do {
    printf ("\nInforme de 0 a 10 a nota de trabalho do aluno: ");
    scanf ("%f", &trab);
  } while (trab < 0 || trab > 10);
  
  printf ("\nInforme o numero de faltas do aluno: ");
  scanf ("%f", &faltas);

  float media;
  media = (nota1 * 3 + nota2 * 5 + trab * 2) / (3 + 5 + 2);
  printf ("\nMedia do aluno eh: %.2f\n", media);
  
  if (faltas > 15) {
    printf ("\nREPROVADO!\n");
  } else if (faltas < 15 && media > 6.0) {
    printf ("\nAPROVADO!\n");
  } else {
    printf ("\nREPROVADO!\nDevera fazer prova final.\n");
  }

  return 0;
}