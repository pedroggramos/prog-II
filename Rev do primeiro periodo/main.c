#include <stdio.h>
#include <string.h>

int main(void) {

  // float salarios[2][3];

  //   for(int i = 0; i < 2; i++){
  //     for(int j = 0; j < 3; j++){
  //       printf("Salario?: ");
  //       scanf("%f", &salarios[i][j]);
  //     }
  //   }

  //   printf("\n");

  //   for(int i = 0; i < 2; i++){
  //     printf("\n");
  //     for(int j = 0; j < 3; j++){
  //       printf("[%.2f]", salarios[i][j]);
  //     }
  //   }

  // Exercício 1

  // float alturas[5];
  // float media = 0;
  // float soma = 0;
  // int qtdPessoas = 0;
  // int qtdPessoasAcima = 0;

  //   for(int i = 0;i < 5; i++){
  //     printf("altura: ");
  //     scanf("%f", &alturas[i]);
  //     qtdPessoas++;
  //     soma = alturas[i] + soma;

  //     if(alturas[i] > 1.75){
  //       qtdPessoasAcima++;
  //     }
  //   }

  //   media = soma / qtdPessoas;

  //   printf("\nSoma da Alturas %.2f", soma);
  //   printf("\nMedia: %.2f", media);
  //   printf("\nqtd de pessoas acima da media: %d", qtdPessoasAcima);

  // Exercicio 2

  // int idades[4];
  // float pesos[4];
  // int pesoIdade = 0;
  // int maiorIdade = 0;
  // int menorIdade = 0;
  // float menorPeso = 0;
  // float pesoPessoaNova = 0;

  //   for(int i = 0; i < 4;i++){
  //     printf("Idade?: ");
  //     scanf("%d", &idades[i]);
  //     printf("Pesos?: ");
  //     scanf("%f", &pesos[i]);

  //     if(idades[i] > 20 && pesos[i] < 70){
  //       pesoIdade++;
  //     }

  //     if(idades[i] > maiorIdade){
  //      maiorIdade = idades[i];
  //     }

  //     if(idades[i] < menorIdade || menorIdade == 0){
  //       menorIdade = idades[i];
  //       pesoPessoaNova = pesos[i];
  //     }

  //     if(pesos[i] < menorPeso || menorPeso == 0){
  //       menorPeso = pesos[i];
  //     }
  //   }

  //   printf("\nPessoas com mais de 20 anos e menos de 70Kg: %d", pesoIdade);
  //   printf("\nIdade da pessoa mais velha: %d", maiorIdade);
  //   printf("\nPeso da pessoa mais nova: %.2f", pesoPessoaNova);

  // Exercício 3
  // float salarios[2][3];
  // float media = 0;
  // float soma = 0;
  // int qtd = 0;
  // int qtdAbaixoMedia = 0;
  // int qtdEntre = 0;

  //   for(int i = 0; i < 2; i++){
  //     for(int j = 0; j < 3; j++){
  //       printf("Salário?: ");
  //       scanf("%f", &salarios[i]);
  //       if(salarios[i][j] >= 1250 && salarios[i][j] <= 2000){
  //         qtdEntre++;
  //       }
  //       qtd++;
  //       soma = soma + salarios[i][j];
  //     }
  //   }

  //   media = soma / qtd;

  //   for(int i = 0; i < 2; i++){
  //     for(int j = 0; j < 3; j++){
  //       if(salarios[i][j] < media){
  //         qtdAbaixoMedia++;
  //       }
  //     }
  //   }

  //   printf("média: %.2f", media);
  //   printf("qtd abaixo media: %d", qtdAbaixoMedia);

  return 0;
}