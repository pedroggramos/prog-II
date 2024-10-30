#include <stdio.h>
#include <string.h>

int main(void) {  


  FILE *arquivo;
  arquivo = fopen("registro.txt", "a");

  // if (arquivo == NULL) {
  //   printf("Erro ao abrir o arquivo.");
  //   return 1;
  // }

  // PUTC
  //  char ch;

  // printf("Digite os caracteres. Pressione Enter para encerrar.\n");
  // while (ch != '\n') {
  //   ch = getchar();
  //   putc(ch, arquivo);
  // }
  // printf("Fim\n");

  // GETC
  // char c;
  // while (c != EOF) {
  //   c = getc(arquivo);
  //   if (c >= 0 && c <= 127) {
  //     putchar(c);
  //     printf("%c", c);
  //   }
  //}

  // FPRINTF

//   char nome[30];
//   int idade;
  // char sexo;

  // printf("Idade?");
  // scanf("%d", &idade);
  // getchar();
  // printf("Nome? ");
  // fgets(nome, 30, stdin);
  // nome[strcspn(nome, "\n")] = '\0';

  // fprintf(arquivo, "%s possui %d anos\n", nome, idade);

//   // FSCANF
//   char palavraLida[50];
//   fscanf(arquivo, "%s", palavraLida);
//   printf("Foi lido: %s", palavraLida);
  // fscanf(arquivo,"%d/%d/%d", &dia, &mes, &ano);
  // printf("Dia: %d\n", dia);
  // printf("Mês: %d\n", mes);
  // printf("Ano: %d", ano);

  // fscanf(arquivo, "%[^/]/%d/%c", nome, &idade, &sexo);

  // printf("Nome: %s\n", nome);
  // printf("Idade: %d\n", idade);
  // printf("Sexo: %c", sexo);

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
  //   char *token = strtok(frase, " \t\n"); // Dividir a linha em palavras
  //   while (token != NULL) {
  //     if (strcmp(token, pesquisa) == 0) {
  //       contador++;
  //     }
  //     token = strtok(NULL, " \t\n");
  //   }
  // }
  // printf("Ocorrências: %d", contador);

  // fclose(arquivo);

























  
}