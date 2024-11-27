#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){


    // FILE *fptr;
    // char ch[50];

    // fptr = fopen("saida.txt", "a");
    // if(fptr == NULL){
    //     printf("ERRO ao abrir o arquivo.");
    //     return 1;
    // }

    // printf("Digite os caracteres. Pressione enter para encerrar! \n");
    // fgets(ch, sizeof(ch), stdin);
    
    // fputs(ch, fptr);

    // printf("Fim!");
    // fclose(fptr);

// PUTC e GETCHAR

    // FILE *ptr;
    // char ch;

    // ptr = fopen("studies.txt", "a");
    
    // if(ptr == NULL){
    //     printf("Arquivo não aberto!");
    // }

    // printf("Digite o nome");

    // while(ch != '\n'){
    //     ch = getchar();
    //     putc(ch, ptr);
    // }

    // fclose(ptr);


// GETC e PUTCHAR

// FILE *arquivo;
// char c;

// arquivo = fopen("studies.txt", "r");

// if(arquivo == NULL){
//     printf("Erro ao abrir arquivo!");

//     return 1;
// }

// while(c != EOF){
//     c = getc(arquivo);
//     if(c >= 0 && c <= 127){
//         putchar(c);
//     }
// }

// fclose(arquivo);


// FPRINTF

// FILE *arq;

// char nome[5][40];

// arq = fopen("studies.txt", "a");

// fprintf(arq, "\n%d/%d/%d\n", 2, 5, 2006);
// fclose(arq);

// for(int i = 0;i < 5; i++){
//     printf("Digite um nome: ");
//     fgets(nome[i], sizeof(nome[i]), stdin);
// }

// for(int i = 0; i < 5; i++){
//     fprintf(arq, "Nome %d: %s",i + 1, nome[i]);
// }

// fclose(arq);

//     FILE *arq;

//     char nomes[5][40];

// // Grava os nomes no arquivo
//     arq = fopen("studies.txt", "a");  // Abre para adicionar (append)
//     if (arq == NULL) {
//         printf("Erro ao abrir o arquivo para escrita.\n");
//         return 1;
//     }

//     for (int i = 0; i < 5; i++) {
//         printf("Digite um nome: ");
//         fgets(nomes[i], sizeof(nomes[i]), stdin);
//         // Remover o '\n' se presente após fgets
//         nomes[i][strcspn(nomes[i], "\n")] = '\0';
//     }

//     // Escreve os nomes no arquivo
//     for (int i = 0; i < 5; i++) {
//         fprintf(arq, "Nome %d: %s\n", i + 1, nomes[i]);
//     }

//     fclose(arq);  // Fecha o arquivo após escrever

//     // Agora, vamos ler os nomes do arquivo
//     arq = fopen("studies.txt", "r");  // Abre para leitura
//     if (arq == NULL) {
//         printf("Erro ao abrir o arquivo para leitura.\n");
//         return 1;
//     }

//     // Lê e imprime os nomes do arquivo
//     printf("\nNomes lidos do arquivo:\n");
//     for (int i = 0; i < 5; i++) {
//         // Lê os nomes do arquivo, usando %[^\n] para capturar toda a linha
//         fscanf(arq, "Nome %d: %[^\n]", &i, nomes[i]);
//         printf("Nome %d: %s\n", i + 1, nomes[i]);
//     }

//     fclose(arq);  // Fecha o arquivo após ler


// FSCANF e FGETS

// FILE *arq;

// arq = fopen("studies.txt", "a");

// if(arq == NULL){
//     printf("Erro ao abrir arquivo pra edição");

//     return 1;
// }

// char nomes[5][50];

// for(int i = 0; i < 5; i++){
//     printf("Digite um nome: ");
//     fgets(nomes[i], sizeof(nomes[i]), stdin);
//     nomes[i][strcspn(nomes[i], "\n")] = '\0';
// }

// fprintf(arq, "--- Nomes ---\n");

// for(int i = 0; i < 5; i++){
//     fprintf(arq, "%s\n", nomes[i]);
// }

// fclose(arq);

// arq = fopen("studies.txt", "r");

// if(arq == NULL){
//     printf("Erro ao abrir arquivo pra leitura");

//     return 1;
// }


// char linha[50];

// while(fgets(linha, sizeof(linha), arq)){
//     linha[strcspn(linha, "\n")] = '\0';

//     if(strcmp(linha, "--- Nomes ---") != 0){
//         printf("%s\n", linha);
//     }
// }

// fclose(arq);



// FEOF

// char str[255];
// FILE *arq;

// arq = fopen("studies.txt", "r");
// while(!feof(arq)){
//     fgets(str, 255, arq);
//     printf("%s", str);
// }

// fclose(arq);

// STRTOK


    // FILE *arquivo;
    // char frase[1024];  // Buffer para armazenar cada linha do arquivo
    // char palavra_pesquisada[] = "arquivo";  // A palavra a ser pesquisada
    // int contador = 0;  // Contador para as ocorrências

    // // Abrir o arquivo para leitura
    // arquivo = fopen("studies.txt", "r");
    // if (arquivo == NULL) {
    //     printf("Erro ao abrir o arquivo!\n");
    //     return 1;  // Retorna erro se não conseguir abrir o arquivo
    // }

    // // Ler o arquivo linha por linha
    // while (fgets(frase, sizeof(frase), arquivo) != NULL) {
    //     char *token = strtok(frase, " \t\n");  // Dividir a linha em palavras
    //     while (token != NULL) {
    //         if (strcmp(token, palavra_pesquisada) == 0) {
    //             contador++;  // Incrementa o contador se a palavra for encontrada
    //         }
    //         token = strtok(NULL, " \t\n");  // Vai para a próxima palavra
    //     }
    // }

    // // Fechar o arquivo
    // fclose(arquivo);

    // // Exibir o número de ocorrências encontradas
    // printf("A palavra '%s' apareceu %d vezes.\n", palavra_pesquisada, contador);







    return 0;
}

