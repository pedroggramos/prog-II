#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// int main(){
//     FILE *arq;

//     char nomearquivo[50];
//     int tamanho = 0;

//     printf("Digite o tamanho da array: ");
//     scanf("%d", &tamanho);

//     int *numeros;

//     numeros = (int*) malloc(tamanho * sizeof(int));

//     for(int i = 0; i < tamanho; i++){
//         printf("Numero %d: ", i + 1);
//         scanf("%d", &numeros[i]);
//     }

//     printf("Digite o nome do arquivo: ");
//     scanf("%s", nomearquivo);

//     arq = fopen(nomearquivo, "a");

//     fclose(arq);

//     arq = fopen(nomearquivo, "a");

//      for (int i = 0; i < tamanho; i++) {
//         fprintf(arq, "%d\n", numeros[i]);
//     }

//        fclose(arq);




//     return 0;
    
// }

// 2

// int main() {

//     FILE *arq;
//     char caractere;
//     int qtd = 0;
//     char nomearquivo[50];

//     printf("Digite o nome do arquivo");
//     scanf("%s", nomearquivo);

//     arq = fopen(nomearquivo, "r");

//     while((caractere = fgetc(arq)) != EOF){
//         if(caractere != ' ' && caractere != '\t' && caractere != '\n'){
//             qtd++;
//         }
//     }

//     fclose(arq);

//     printf("Numero de caracteres: %d", qtd);

//     return 0;
// }

// 3

// int main(){
//     FILE *arq;
//     char caractere;
//     int qtdPalavra = 0;
//     int qtdLinha = 0;

//     arq = fopen("teste", "r");

//     while((caractere = fgetc(arq)) != EOF){
//         if(caractere == '\n'){
//             qtdLinha = 1;
//             qtdLinha++;
//         }
//         else if(caractere != ' ' && caractere != '\n' && caractere != '\t'){
//             qtdPalavra++;
//         }
//     }

//     fclose(arq);

//     // Exibir os resultados
//     printf("Número de linhas: %d\n", qtdLinha);
//     printf("Número de palavras: %d\n", qtdPalavra);





//     return 0;
// }
