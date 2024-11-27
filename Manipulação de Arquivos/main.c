#include <stdio.h>
#include <string.h>

struct pessoa{
  char nome[30];
  int idade;
  char sexo;
};
typedef struct pessoa pessoa;

int main(void) {

  FILE *arquivo;
  arquivo = fopen("registro.txt", "r");

//   if (arquivo == NULL) {
//     printf("Erro ao abrir o arquivo.");
//     return 1;
//   }

  // PUTC
  //  char ch;

  // printf("Digite os caracteres. Pressione Enter para   encerrar.\n");
  //  while (ch != '\n') {
  //    ch = getchar();
  //    putc(ch, arquivo);
  //  }
  //  printf("Fim\n");

  // GETC
  // char c;
  // while (c != EOF) {
  //   c = getc(arquivo);
  //   if (c >= 0 && c <= 127) {
  //     putchar(c);
  //   }
  // }
  

  // fclose(arquivo);

  // FPRINTF

  // fprintf(arquivo, "Altura: %.2f - Idade: %d\n", 1.88, 22);

  // char nome[30];
  // int idade;
  // char sexo;

  // printf("Idade?");
  // scanf("%d", &idade);
  // getchar();
  // printf("Nome? ");
  // fgets(nome, 30, stdin);
  // nome[strcspn(nome, "\n")] = '\0';

  // fprintf(arquivo, "%s possui %d anos\n", nome, idade);

  // FSCANF
  // char palavraLida[50];
  // fscanf(arquivo, "%[^/n]", palavraLida);
  // printf("Foi lido: %s", palavraLida);

  // int dia;
  // int mes;
  // int ano;

  // fscanf(arquivo, "%d/%d/%d", &dia, &mes, &ano);
  // printf("Dia: %d\n", dia);
  // printf("Mês: %d\n", mes);
  // printf("Ano: %d", ano);

  // char nome[30];
  // int idade;
  // char sexo;
  // pessoa p;

  // while(fgets(nome, sizeof(nome), arquivo) != NULL){
  //   nome[strcspn(nome, "\n")] = '\0';
  //   printf("Nome: %s\n", nome);
  // }

  // fscanf(arquivo, "%[^\n]\n%d\n%c", p.nome, &p.idade, &p.sexo);

  // printf("Nome: %s\n", p.nome);
  // printf("Idade: %d\n", p.idade);
  // printf("Sexo: %c", p.sexo);

  // FGETS
  // char linha[30];
  // while (fgets(linha, 30, arquivo) != NULL) {
  //   printf("%s", linha);
  // }

  // FEOF

  // char linha[50];

  // while(!feof(arquivo)){
  //   fgets(linha, 50, arquivo);
  //   printf("%s", linha);
  // }

  // STRTOK

  // int contador = 0;
  // char frase[50];
  // char pesquisa[10] = "professor";

  // while (fgets(frase, sizeof(frase), arquivo) != NULL) {
  //   char *token = strtok(frase, ",\t\n"); // Dividir a linha em palavras
  //   while (token != NULL) {
  //     if (strcmp(token, pesquisa) == 0) {
  //       contador++;
  //     }
  //     token = strtok(NULL, " \t\n");
  //   }
  // }
  // printf("Ocorrências: %d", contador);

  // fclose(arquivo);

  // 1
  // FILE *arquivo;
  // int vetor[5];
  // char nomeArquivo[30];

  // printf("Digite o nome do arquivo: ");
  // fgets(nomeArquivo, sizeof(nomeArquivo), stdin);

  // arquivo = fopen(nomeArquivo, "r");

  // if (arquivo == NULL) {
  //   printf("Erro ao abrir o arquivo.");
  //   return 1;
  // }

  // // for (int i = 0; i < 5; i++) {
  // //   printf("Digite um número: ");
  // //   scanf("%d", &vetor[i]);
  // //   fprintf(arquivo, "%d\n", vetor[i]);
  // // }

  // for (int i = 0; i < 5; i++) {
  //   fscanf(arquivo, "%d", &vetor[i]);
  // }

  // for (int i = 0; i < 5; i++) {
  //   printf("%d\n", vetor[i]);
  // }

  // fclose(arquivo);

  // 2
  // FILE *arquivo;
  // int qtdCaracteres = 0;
  // char letra;

  // arquivo = fopen("teste.txt", "r");

  // if (arquivo == NULL) {
  //   printf("Erro ao abrir o arquivo.");
  //   return 1;
  // }

  // while (letra != EOF) {
  //   letra = getc(arquivo);
  //   if (letra >= 32 && letra <= 127 && letra != ' ') {
  //     qtdCaracteres++;
  //   }
  // }
  // printf("Qtd: %d", qtdCaracteres);

  // fclose(arquivo);

  // 3
  //   FILE *arquivo;
  //   char frase[50];
  //   int qtdPalavras = 0;
  //   int qtdLinhas = 0;
  
  //   arquivo = fopen("teste.txt", "r");

  //   if (arquivo == NULL) {
  //     printf("Erro ao abrir o arquivo.");
  //     return 1;
  //   }

  //   while (fgets(frase, sizeof(frase), arquivo) != NULL) {
  //     qtdLinhas++;
  //   char *palavra = strtok(frase, " \t\n");
  //   while(palavra != NULL){
  //     qtdPalavras++;
  //     palavra = strtok(NULL, " \t\n");
  //   }
  // }

  // printf("Qtd de palavras: %d", qtdPalavras);
  // printf("\nQtd de linhas: %d", qtdLinhas);

  // fclose(arquivo);

  return 0;
}
