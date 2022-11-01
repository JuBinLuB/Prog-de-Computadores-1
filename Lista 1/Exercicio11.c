#include <stdio.h>

int main() {

  int notas;

  printf("Insira a nota: ");
  scanf("%d", &notas);

  switch (notas) {
    case 9 ...10:
      printf("\nA\n");
      break;
    case 7 ...8:
      printf("\nB\n");
      break;
    case 5 ...6:
      printf("\nC\n");
      break;
    case 0 ...4:
      printf("\nD\n");
      break;
    default:
      printf ("\nDigito Invalido.\n");
      break;
  }
    
  return 0;
}