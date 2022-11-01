#include <stdio.h>

int main() {

  float kW;
  float icms;
  float valor;

  printf ("Informe o numero de quilowatts consumido: ");
  scanf ("%f", &kW);

  kW *= 0.12;
  icms = kW * 0.18;
  valor = kW + icms;

  printf ("\nO valor a ser pago de Energia Eletrica eh: %.2f\n", valor);
  
  return 0;
}