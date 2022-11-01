#include <stdio.h>

int idade_pessoa (int anos, int meses, int dias) {

  int idade;
  idade = anos * 365 + meses * 30 + dias;

  return (idade);
}

int main() {

  int a, m, d;
  
  printf ("Insira idade expressa em anos, meses e dias:\n");
  scanf ("%d%d%d", &a, &m, &d);

  printf ("\nA idade expressa em dias eh %d.\n", idade_pessoa(a, m, d));
  
  return 0;
}