#include <stdio.h>

int main() {
  
  float precoA;
  float precoN;
  float mediaC;
  float mediaS;
  float x = 0;
  float y = 0;
  float z = 0;

  for (int codigo = 0; codigo >= 0; ++z) {
    printf ("//Insira o codigo do Produto: ");
    scanf ("%d", &codigo);
    
    if (codigo >= 0) {
      printf ("//Insira o preco do produto: ");
      scanf ("%f", &precoA);
      precoN = 0.2 * precoA + precoA;
      printf ("\nNovo preco do produto %d sera %.2f\n\n", codigo, precoN);
      x += precoN;
      y += precoA;
    } else {
      --z;
    }
  }

  mediaC = x / z;
  mediaS = y / z;
  printf ("\nMedia dos precos com aumento %.2f\n", mediaC);
  printf ("\nMedia dos precos sem aumento %.2f\n", mediaS);

  return 0;
}