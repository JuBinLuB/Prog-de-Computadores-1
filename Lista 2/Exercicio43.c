#include <stdio.h>
#include <stdlib.h>

typedef struct veic_est{

  char condutor[50];
  char placa[20];
  char cor[20];
  char turno;

} veiculos;

void imprime(veiculos *x, int tam) {

  printf ("\n\nLista dos veiculos cadastrados:\n");

  for (int i = 0; i < tam; i++) {
    printf ("\n%d veiculo:\n", i+1);
    printf ("Condutor: %s\n", x[i].condutor);
    printf ("Placa: %s\n", x[i].placa);
    printf ("Cor: %s\n", x[i].cor);
    printf ("Turno: %c\n", x[i].turno);
  }
}

void leitura(veiculos *x, int tam) {
  
  printf ("Faca o cadastro dos veiculos...\n");
  
  for (int i = 0; i < tam; i++) {
    printf ("\n%d Veiculo:\n", i+1);
    printf ("Nome do condutor: ");
    fflush(stdin);
    scanf ("%49[^\n]", x[i].condutor);
    printf ("Informe a placa: ");
    fflush(stdin);
    scanf ("%19[^\n]", x[i].placa);
    printf ("Cor do veiculo: ");
    fflush(stdin);
    scanf ("%19[^\n]", x[i].cor);
    printf ("Turno, m (manha), t (tarde), n (noite) e i (dia inteiro): ");
    fflush(stdin);
    scanf (" %c", &x[i].turno);
  }
  imprime(x, tam);  
}

int main(void) {

  veiculos *cadastro = malloc(10 * sizeof(veiculos));
  
  leitura(cadastro, 10);
  
  free(cadastro);
  return 0;
}