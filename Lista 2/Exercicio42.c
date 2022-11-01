#include <stdio.h>
#include <stdlib.h>

typedef struct {

  int num;
  float peso;
  float altura;
  char nome;

} jogador;

int main(void) {

  jogador *time = malloc(11 * sizeof(jogador));

  printf ("Insira abaixo as seguintes informacoes do seu time...\n");
  
  for (int i = 0; i < 11; i++) {
    printf ("\n%d Jogador:\n", i+1);
    printf ("Numero de camisa: ");
    scanf ("%d", &time[i].num);
    printf ("Peso: ");
    scanf ("%f", &time[i].peso);
    printf ("Altura: ");
    scanf ("%f", &time[i].altura);
    printf ("Inicial do seu nome: ");
    fflush(stdin);
    scanf (" %c", &time[i].nome);
  }

  jogador baixo = time[0];
  jogador pesado = time[0];
  
  for (int j = 0 ; j < 11; j++) {
    printf ("\n//%d Jogador\n", j+1);
    printf ("Camisa: %d\nPeso: %.2fkg\nAltura: %.2fm\nInicial: %c\n", time[j].num, time[j].peso, time[j].altura, time[j].nome);
    
    if (baixo.altura > time[j].altura) {
      baixo = time[j];
    }
    if (pesado.peso < time[j].peso) {
      pesado = time[j];
    }
  }

  printf ("\nJogador mais baixo: %c\n", baixo.nome);
  printf ("Jogador mais pesado: %d\n", pesado.num);

  free(time);
  return 0;
}