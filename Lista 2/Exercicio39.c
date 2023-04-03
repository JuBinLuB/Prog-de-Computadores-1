#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  int *loteria = malloc(6 * sizeof(int));
  int *jogador = malloc(6 * sizeof(int));

  int a = 0, b, igual;
  
  srand(time(NULL));
  do {
    loteria[a] = rand() % 21;
    igual = 0;
    
    for (b = 0; b < a; b++) {
      if (loteria[b] == loteria[a]) {  //Gera valores aleatorios sem repeticoes.
        igual = 1;
      }
    }
    
    if (igual == 0) {
      a++;
    }
  } while (a < 6);
  
  printf ("Faca sua aposta, por valores de 1 a 20...\n\n");
  
  for (int i = 0; i < 6; i++) {
    printf ("Digite o %d numero: ", i+1);
    scanf ("%d", &jogador[i]);
  }

  int contador = 0;
  
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      if (loteria[i] == jogador[j]) {   //Conta quantidade de acertos.
        contador++;
        break;
      }
    }
  }

  int *correct = malloc(contador * sizeof(int));

  int k = 0;
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      if (loteria[i] == jogador[j]) {   //Armazena os corretos.
        correct[k] = jogador[j];
        k++;
        break;
      }
    }
  }
  
  printf ("\nNumeros sorteados: ");
  
  for (int i = 0; i < 6; i++) {
    printf ("%d ", loteria[i]);
  }
  
  printf ("\nNumeros corretos: ");
  
  if (contador == 0) {
    printf ("Nenhum acerto!");
  } else {
    for (int i = 0; i < contador; i++) {
      printf ("%d ", correct[i]);
    }
  }
  printf ("\n");
  
  free(loteria);
  free(jogador);
  free(correct);
  return 0;
}