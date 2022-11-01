#include <stdio.h>

int main() {

  int horas;
  float salario;

  printf ("Digite o numero de horas trabalhadas: ");
  scanf ("%d", &horas);

  if (horas < 40) {
    salario = horas * 15.00; 
    printf ("\nSeu salario sera: %.2f\n", salario);
  } else {
    salario = 600.00 + 21.00 * (horas - 40);
    printf ("\nSeu salario nesta semana sera: %.2f\n", salario);
  }

  return 0;
}