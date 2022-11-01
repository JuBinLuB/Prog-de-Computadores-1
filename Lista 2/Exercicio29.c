#include <stdio.h>
#include <ctype.h>
#include <string.h>

int ultima(char str[], char c) {

  int poc = -1;
  
  for (int i = 0; str[i] != '\0'; ++i) {
    if (str[i] == c || str[i] == toupper(c)) {
      poc = i;
    }
  }
  
  if (poc != -1) {
    return poc;
  } else {
    return poc;
  }
}

int main(void) {

  char string[101];

  printf ("Digite uma frase qualquer: ");
  fflush(stdin);
  fgets (string, 100, stdin);

  printf ("\n%d\n", ultima(string, 'c'));
  
  return 0;
}