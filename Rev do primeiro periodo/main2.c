#include <stdio.h>
#include <string.h>

int main(void) {

  // char nomes[5][30];
  // int tam[5];

  // for (int i = 0; i < 5; i++) {
  //   printf("Dígite seu nome: ");
  //   scanf("%s", nomes[i]);

  //   tam[i] = strlen(nomes[i]);
  // }

  // for (int i = 0; i < 5; i++) {
  //   printf("\nnome número %d: %s", i + 1,nomes[i]);
  // }

  // for (int i = 0; i < 5; i++) {
  //   printf("\n\nO nome numero %d tem: %d letras", i + 1, tam[i]);
  // }

  // ------------------------------------

  // char nomes[5][30];
  // int tam = 0;
  // int maior = 0;
  // int comp = 0;
  // int qtd = 0;
  // int menor = 0;
  // char menorNome[30];
  // char nomeFormal[30];

  // for (int i = 0; i < 5; i++) {
  //   printf("Dígite seu nome: ");
  //   scanf("%s", nomes[i]);

  //   tam = strlen(nomes[i]);

  //   if(tam > maior){
  //     maior = tam;
  //   }

  //   comp = strcmp(nomes[i], "Ana");
  //   if(comp == 0){
  //     qtd++;
  //   }

  //   if(tam < menor || menor == 0){
  //     menor = tam;
  //     strcpy(menorNome, nomes[i]);
  //   }

  //   strcpy(nomeFormal, "Sr(a) ");
  //   strcat(nomeFormal, menorNome);
  // }

  // -----------------------------------------------

  // Exercício 1-------------

  // char nomes[4][30];

  // for (int i = 0; i < 4; i++) {
  //   printf("Dígite seu nome: ");
  //   scanf("%s", nomes[i]);
  // }

  // for (int i = 0; i < 4; i++) {
  //   printf("\nnome número %d: %s", i + 1, nomes[i]);
  // }

  // Exercício 2----------------

  // int idades[3][2];
  // int qtdMaior18 = 0;
  // int idadesAbaixo = 0;

  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 2; j++) {
  //     printf("Dígite sua idade: ");
  //     scanf("%d", &idades[i][j]);

  //     if (idades[i][j] >= 18) {
  //       qtdMaior18++;
  //     }
  //     else {
  //       printf("Menor: %d\n", idades[i][j]);
  //     }
  //   }
  // }

  // printf("\n\nqtd maiores ou igual a 18: %d", qtdMaior18);

  // Exercicio 3---------------------------------

  // char nome[3][30];
  // int tam = 0;
  // int maior = 0;
  // int menor = 0;
  // int ana = 0;
  // int comp = 0;
  // char menorNome[30];

  // for (int i = 0; i < 3; i++) {
  //   printf("Dígite seu nome: ");
  //   scanf("%s", nome[i]);

  //   tam = strlen(nome[i]);

  //   if (tam > maior) {
  //     maior = tam;
  //   }

  //   if (tam < menor || i == 0) {
  //     menor = tam;
  //     strcpy(menorNome, nome[i]);
  //   }

  //   comp = strcmp(nome[i], "Ana");
  //   if (comp == 0) {
  //     ana = 1;
  //   }
  // }

  // printf("\nMaior quantidade de caracteres: %d", maior);
  // printf("\nMenor nome: %s", menorNome);
  // if(ana == 1){
  //   printf("\nAna foi digitado");
  // }


  // EXERC 4----------------------


  

  return 0;
}