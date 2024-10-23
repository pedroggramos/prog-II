#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// int main()
// {

//  n1

// int matriz[4][4];
// float soma = 0;
// float media = 0;
// int qtd = 0;



// for(int i = 0;i < 4;i++){
//     for(int j = 0; j < 4;j++){
//         printf("n: ");
//         scanf("%d", &matriz[i][j]);
//         if(i == j){
//             qtd++;
//             soma = soma + matriz[i][j];
//         }
//     }
// }

// printf("\n");

// for(int i = 0;i < 4;i++){
//     for(int j = 0; j < 4;j++){
//         if(i == j){
//             printf("[%d]", matriz[i][j]);
//         }
//     }
// }


//     media = soma / qtd;

//     printf("Media: %.2f", media);

//     return 0;
// }

// n2

// int menorP(int n1,int n2, int n3);

// int main(){
//     int n1, n2, n3;

//     printf("Digite n1: ");
//     scanf("%d", &n1);

//     printf("Digite n2: ");
//     scanf("%d", &n2);

//     printf("Digite n3: ");
//     scanf("%d", &n3);

//     int menor = menorP(n1,n2,n3);

//     printf("O menor C): %d ", menor);

//     return 0;
// }

// int menorP(int n1,int n2, int n3){

//     int menor = n1;

//     if(n2 < menor){
//         menor = n2;
//     }

//     if(n2 < menor){
//         menor = n3;
//     }

//     return menor;
// }

// n3

// void contar_vogais(char *str, int *numCaracteres){
//      int vogais = 0;
//      *numCaracteres = 0;

//      while(str[*numCaracteres] != '\0'){
//          char c = str[*numCaracteres];

//          if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
//             vogais++;
//         }

//         (*numCaracteres)++;
//      }

//     printf("Qtd de vogais: %d", vogais);

// }

// int main(){
//     char string[100];
//     int numCaracteres;

//     printf("Digite uma string: ");
//     fgets(string, sizeof(string),stdin);

//     contar_vogais(string, &numCaracteres);

//     printf("numCaracteres: %d", numCaracteres);

// }


// 4

// int main(){
    
//     int **matriz;
//     int rows;
//     int cols;
    
//     printf("Digite a qtd de linhas: ");
//     scanf("%d", &rows);
//     printf("Digite a qtd de colunas: ");
//     scanf("%d", &cols);
    
//     matriz = (int**) malloc(rows * sizeof(int*));
//     if(matriz == NULL){
//         printf("ERROR! Memória insuficiente");
        
//         return 1;
//     }
    
//     for(int i = 0; i < rows; i++){
//         matriz[i] = (int *) malloc(cols * sizeof(int));
//         if(matriz == NULL){
//         printf("ERROR! Memória insuficiente");
        
//         return 1;
//     }
//         for(int j = 0; j < cols; j++){
//             printf("n: ");
//             scanf("%d", &matriz[i][j]);
//         }
//     }
    
//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < cols; j++){
//             if(matriz[i][j] % 2 == 0){
//                 if(matriz[i][j] > 10){
//                     printf("[%d]", matriz[i][j]); 
//                 }
//             }
//         }
//         printf("\n");
//     }
    
//     for(int i = 0; i < rows; i++){
//         free(matriz[i]);
//     }
    
//     free(matriz);
    
    
//     return 0;
// }


// 1


// int main(){
//     int matriz[3][3];
    
//     float media = 0;
//     float soma = 0;
//     int qtd;
    
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             printf("n: ");
//             scanf("%d", &matriz[i][j]);
//         }
//     }
    
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             if(i + j == 3 - 1){
//                 printf("%d", matriz[i][j]);
//                 soma = soma + matriz[i][j]; 
//                 qtd++;
//             }
            
//             else{
//                 printf("*");
//             }
//           }
//           printf("\n");
          
//         }
        
        
//     printf("Media: %.2f", media = soma / qtd);
    
    
// }

// 2

// int maior(int pesos[]){
//     int maior = 0;
    

//     for(int i = 0; i < 4; i++){
//         if(pesos[i] > maior){
//         maior = pesos[i];
//     }
//   }


//     return maior;
    
// }
// int main(){
//     int pesos[4];
    
//     for(int i = 0; i < 4; i++){
//         printf("n: ");
//         scanf("%d", &pesos[i]);
//     }
    
//     int maiorPeso = maior(pesos);
    
//     printf("Maior: %d", maiorPeso);
    
//     return 0;
// }


// 3

// #include <stdio.h>

// void contar_palavras(char *frase, int *numPalavras) {
//     *numPalavras = 0;

//     while (*frase != '\0') {
//         if (*frase != ' ' && *frase != '\n') {
//                 (*numPalavras)++;
//         } 
//         frase++;
//     }
// }

// int main() {
//     char frase[100];
//     int numPalavras;

//     printf("Digite uma frase: ");
//     fgets(frase, sizeof(frase), stdin);

//     contar_palavras(frase, &numPalavras);

  
//     printf("A frase contém %d palavras.\n", numPalavras);

//     return 0;
// }

// 4


// void vogais(char *str, int *numCaracteres){
    
//     while(*str != '\0'){
//         switch(*str){
//             case 'a':
//             case 'e':
//             case 'i':
//             case 'o':
//             case 'u':
            
//             (*numCaracteres)++;
//         }
//         *str++;
//     }
// }

// int main(){
    
//     int qtdVogais = 0;
//     int *numCaracteres = &qtdVogais;
//     char string[100];
//     char *str = string;
    
//     printf("Digite uma frase: ");
//     fgets(string, sizeof(string), stdin);
    
//     vogais(str, numCaracteres);
    
//     printf("Numero de vogais minusculos: %d", qtdVogais);
//
    // return 0;
    
// }








