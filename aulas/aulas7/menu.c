#include <stdio.h>
#include <stdlib.h>
int main() {
  int opcao = 0;
  while (opcao != 4) {
    int deu_certo = system("clear");
    printf("MEU JOGO\n");
    printf("1 - iniciar\n");
    printf("2 - ver ranking\n");
    printf("3 - ajuda\n");
    printf("4 - sair\n");
    printf("escolha uma opcao =>");
    deu_certo = scanf("%i", &opcao);
    while (getchar() != '\n')
      ; // limpar buffer do teclado
    if (!deu_certo) {
      opcao = 0;
    }

    switch (opcao) {
    case 1: {
      char nome[31];
      printf("qual o seu nome?");
      deu_certo = scanf("%[^\n]s", nome);
      while (getchar() != '\n')
        ; // limpar buffer do teclado
      printf("ola %s!\n", nome);
      printf("prssione ENTER p/ iniciar...");
      getchar();
      break;
    }
    case 2:{
      deu_certo =system("clear");
      printf("ranking -top 5\n");
      printf("1o lugar : jose - 1000 pontos\n");
      printf("2o lugar : maria - 800 pontos\n");
      printf("3o lugar : bia - 700 pontos\n");
      printf("4o lugar : pedro - 500 pontos\n");
      printf("5o lugar : joao - 200 pontos\n");
      printf("pressione ENTER p/ voltar...");
      getchar();
      break;
    }
    case 3:
      break;
    case 4:
      printf("ate logo!\n");
      break;
    default:
      printf("opcao invalida! pressione enter p/ prosseguir\n");
      getchar();
    }
  }
  return 0;
}
