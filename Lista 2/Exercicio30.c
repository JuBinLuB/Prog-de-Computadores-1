#include <stdio.h>
#include <string.h>

int contabranco(char string[]) {

  int contador;

  for (int i = 0; string[i] != '\0'; ++i) {
    if (string[i] == ' ') {
      ++contador;
    }
  }

  return contador;
}

int main(void) {

  char str[101];

  printf ("Digite uma frase: ");
  fflush (stdin);
  fgets (str, 100, stdin);

  printf ("\n%d\n", contabranco(str));
 
  return 0;
}