#include <stdio.h>
#include <math.h>

typedef struct {

  int x;
  int y;

} ponto;

int main(void) {

  ponto a;
  ponto b;

  printf ("Insira as coordenadas (x, y) do ponto A:\n");
  printf ("Coordenada X: ");
  scanf ("%d", &a.x);
  printf ("Coordenada Y: ");
  scanf ("%d", &a.y);
  printf ("\nInsira as coordenadas (x, y) do ponto B:\n");
  printf ("Coordenada X: ");
  scanf ("%d", &b.x);
  printf ("Coordenada Y: ");
  scanf ("%d", &b.y);

  printf ("\nPonto A (%d, %d);\n", a.x, a.y);
  printf ("Ponto B (%d, %d);\n", b.x, b.y);

  float dist = sqrt(pow((b.x-a.x), 2) + pow((b.y-a.y), 2));
  
  printf ("\nA distancia entre os pontos eh: %.3f\n", dist);
  
  return 0;
}