#include <stdio.h>

int main() {

  int ano;
  float chico = 1.50;
  float ze = 1.30;

  for (ano = 0; chico > ze; ++ano) {
    ze += 0.03, chico += 0.02;
  }
  
  printf ("\nZe sera maior do que Chico em %d anos.\n", ano);

  return 0;
}