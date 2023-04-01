#include <stdio.h>

int main() {

  int x = 0;
  int y = 0;
  float media = 0;

  printf("Insira valores inteiros positivos...\n");
  for (int i = 0; i >= 0; y++) {
    printf("Insira o %d valor: ", y + 1);
    scanf("%d", &i);

    if (i >= 0) {
      x += i;
    } else {
      y--;
    }
  }

  media = x / (float)y;
  printf("\n%d/%d = %.1f\n", x, y, media);

  return 0;
}