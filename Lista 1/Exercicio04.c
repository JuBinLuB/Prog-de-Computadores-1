#include <stdio.h>
#include <math.h>

int main() {

  float raio;
  
  printf ("Informe o raio do circulo: ");
  scanf ("%f", &raio);
  
  printf ("\nA area e o perimetro deste circulo eh, respectivamente: %.2f e %.2f\n", M_PI * pow(raio, 2), 2 * M_PI * raio);

  return 0;
}