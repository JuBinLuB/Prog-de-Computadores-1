#include <stdio.h>

typedef struct {

  float peso;
  float altura;

} pessoa;

int main(void) {

  pessoa joao, maria;

  joao.altura = 1.90;
  joao.peso = 98;
  maria.altura = 1.50;
  maria.peso = 55;

  joao.altura = 1.78;
  maria.peso = 75;

  float med1 = (joao.altura + maria.altura) / 2;
  float med2 = (joao.peso + maria.peso) / 2;

  printf ("A media da altura de Joao e Maria eh: %.2f\n", med1);
  printf ("A media do peso de Joao e Maria eh: %.2f\n", med2);
  
  return 0;
}