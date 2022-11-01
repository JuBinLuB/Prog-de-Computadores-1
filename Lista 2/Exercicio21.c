#include <stdio.h>

int main(void) {

  int n = 0;
  int i, j, k, w;

  for (i = 1; i <= 6; ++i) {
    for (j = 1; j <= 6; ++j) {
      for (k = 1; k <=6; ++k) {
        for (w = 1; w <= 6; ++w) {
          if (k != w && 
              j != k &&
              i != j) {
            ++n;
          }
        }
      }
    }
  }
  
  printf ("\nO numero de jogadas possiveis eh: %d.\n", n);

  return 0;
}