#include <stdio.h>

int main() {

  int n;

  printf ("Digite um numero inteiro: ");
  scanf ("%d", &n);

  if (n % 10 == 0) {
    printf ("\n%d\n", n / 2);
  } else {
    printf ("\nO numero digitado nao termina com 0.\n");
  }
  
  return 0;
}