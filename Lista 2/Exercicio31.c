#include <stdio.h>
#include <string.h>
#include <ctype.h>

void copiaate(char destino[], char origem[], char parar) {

  int i;

  if (parar > 'a' && parar < 'z' ||
      parar > 'A' && parar < 'Z') {
        
        for (i = 0; origem[i] != '\0' && origem[i] != toupper(parar) && origem[i] != tolower(parar); i++) {
          destino[i] = origem[i];
        }
        destino[i] = '\0';
  }

  printf ("\n");
  puts (destino);
}

int main(void) {

  char dest[80];
  char orig[80];
  char p;

  printf ("Digite uma frase: ");
  fflush(stdin);
  fgets (orig, 79, stdin);
  
  printf ("Agora, digite um caractere: ");
  fflush(stdin);
  scanf ("%c", &p);

  copiaate(dest, orig, p);
  
  return 0;
}