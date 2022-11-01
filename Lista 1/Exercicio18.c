#include <stdio.h>
#include <math.h>

float volume_esfera(float raio) {

  float volume;
  volume = 4.0 / 3.0 * M_PI * pow(raio, 3);

  return (volume);
}

int main() {

  float raio;

  printf ("Informe o raio da esfera: ");
  scanf ("%f", &raio);

  printf ("\nO volume da esfera eh de %.1f metros cubicos.\n", volume_esfera(raio));
  
  return 0;
}