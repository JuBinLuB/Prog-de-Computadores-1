#include <stdio.h>
#include <string.h>

int contc(char str[], char c) {

  int contador = 0;

  for (int i = 0; str[i] != '\0'; ++i) {
    if (str[i] == c || str[i] == c-32) {
      ++contador;
    }
  }
  
  return contador;
}

int main(void) {

  char frase[101];

  printf ("Digite alguma frase: ");
  fflush(stdin);
  fgets (frase, 100, stdin);

  printf ("\n");

  puts(frase);
  printf ("Vezes em que o caracter 'c' apareceu na frase: %d.\n", contc (frase, 'c'));
  
  return 0;
}