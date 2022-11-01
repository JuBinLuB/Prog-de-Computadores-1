#include <stdio.h>

int main() {

  float salarioLiquido;
  float salarioBruto;
  float valorHoras;
  float horasExtras;

  printf ("Informe o salario bruto: ");
  scanf ("%f", &salarioBruto);
  printf ("\nInforme o valor de Horas Extras: ");
  scanf ("%f", &valorHoras);
  printf ("\nInforme o numero de Horas Extras: ");
  scanf ("%f", &horasExtras);

  salarioLiquido = salarioBruto + valorHoras * horasExtras;
  salarioLiquido -= (salarioLiquido * 0.08);

  printf ("\nO salario liquido do funcionario eh: %.2f.\n", salarioLiquido);
  
  return 0;
}