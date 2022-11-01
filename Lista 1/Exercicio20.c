#include <stdio.h>

float soma(int n) {

  float s = 0;

  for (int x = 1; x <= n; ++x) {
    s += (float)1/x;
  }

  return (s);
}

int main() {

  int num;

  printf ("Insira um valor inteiro positivo: ");
  scanf ("%d", &num);
  
  printf ("\nO valor de S eh %.2f.\n", soma(num));
  
  return 0;
}