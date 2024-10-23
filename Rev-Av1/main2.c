#include <stdio.h>



int main() {

	// int matrizUm[3][2] = {{1, 2}, {3, 4}, {5, 6}};
	// int matrizDois[2][3] = {{7, 8, 9}, {10, 11, 12}};
	// int matrizProduto[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

	// for(int i = 0; i < 3;i++){
	//     for(int j = 0; j < 3;j++){
	//         for(int k = 0; k < 2; k++){
	//             matrizProduto[i][j] = matrizProduto[i][j] + matrizUm[i][k] * matrizDois[k][j];
	//         }
	//     }
	// }

	// for(int i = 0; i < 3;i++){
	//     for(int j = 0; j < 3;j++){
	//         printf("[%d]", matrizProduto[i][j]);
	//     }
	//     printf("\n");
	// }

	// --------------


	// int matriz[3][2] = {{1,2}, {3,4}, {5,6}};
	// int escalar = 2;

	// for(int i = 0; i < 3; i++){
	//     for(int j = 0; j < 2; j++){
	//         printf("[%d]", matriz[i][j] * escalar);
	//     }
	//     printf("\n");
	// }


// ---------------------

	// int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

	// for(int i = 0; i < 3; i++){
	//     for(int j = 0; j < 3; j++){
	//         if(i == j){
	//             printf("[%d]", matriz[i][j]);
	//         }

	//         else{
	//             printf("*");
	//         }
	//     }
	//     printf("\n");

	// }

// ---------------------

// Tiangulo Inferior

	// int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

	// for(int i = 0; i < 3; i++){
	//     for(int j = 0; j < 3; j++){
	//         if(i > j){
	//             printf("[%d]", matriz[i][j]);
	//         }

	//         else{
	//             printf("*");
	//         }
	//     }
	//     printf("\n");

	// }

	// printf("\n");

	// // Triangulo Superior


	// for(int i = 0; i < 3; i++){
	//     for(int j = 0; j < 3; j++){
	//         if(i < j){
	//             printf("[%d]", matriz[i][j]);
	//         }

	//         else{
	//             printf("*");
	//         }
	//     }
	//     printf("\n");

	// }


// Diagonal secundaria


// int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             if(i + j == 3 - 1){
//                 printf("[%d]", matriz[i][j]);
//             }

//             else{
//                 printf("*");
//             }
//         }
//         printf("\n");

//     }


// Triangulo Superior secundaria

// int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             if(j < (3 - i - 1)){
//                 printf("[%d]", matriz[i][j]);
//             }

//             else{
//                 printf("*");
//             }
//         }
//         printf("\n");

//     }

// Triangulo Inferior secundaria

// int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             if(j >= n - 1){
//                 printf("[%d]", matriz[i][j]);
//             }

//             else{
//                 printf("*");
//             }
//         }
//         printf("\n");

//     }



// 	int matriz[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
// 	float soma = 0;
// 	int qtd = 0;

	// for(int i = 0; i < 4;i++){
	//     for(int j = 0; j < 4;j++){
	//         if(i == j){
	//             soma = matriz[i][j] + soma;
	//             qtd++;
	//             printf("[%d]", matriz[i][j]);
	//         }

	//         else{
	//             printf("*");
	//         }
	//     }
	//     printf("\n");
	// }

	// float media = soma / qtd;

	// printf("A mC)dia C): %.2f", media);

	// printf("\n\n");
	// printf("secundaria\n");

	//   for(int i = 0; i < 4;i++){
	//     for(int j = 0; j < 4;j++){
	//         if(i + j == 4 - 1){
	//             printf("[%d]", matriz[i][j]);
	//         }

	//         else{
	//             printf("*");
	//         }
	//     }
	//     printf("\n");
	// }


// 	printf("\n\nSuperior Principal\n");

// 	for(int i = 0; i < 4; i++) {
// 		for(int j = 0; j < 4; j++) {
// 			if(i < j) {
// 			    soma = matriz[i][j] + soma;
// 				printf("[%d]", matriz[i][j]);
// 			}

// 			else {
// 				printf("*");
// 			}
// 		}
// 		printf("\n");
// 	}
	
// 	printf("\nA soma é: %.2f", soma);


// Transposta

// int matriz[2][4] = {{1,2,3,4}, {5,6,7,8}};
// int transposta[4][2];

//     for(int i = 0; i < 2;i++){
//         for(int j = 0; j < 4;j++){
//             transposta[j][i] = matriz[i][j];
//             printf("[%d]", matriz[i][j]);
//         }
//         printf("\n");
//     }
    
//     for(int i = 0; i < 4;i++){
//         for(int j = 0; j < 2; j++){
//             printf("[%d]", transposta[i][j]);
//     }
//   printf("\n");
// }
// 	return 0;
// }






























// float valorP(char tam,char sex){
//     float valor;

//     switch(sex){
//         case 'M':
//             if(tam == 'P' || tam == 'p'){
//                 valor = 22.25;
//             }

//             else if(tam == 'G' || tam == 'g'){
//                 valor = 40.00;
//             }

//             else if(tam == 'M' || tam == 'm'){
//                 valor = 27.15;
//             }

//             else{
//                 printf("Tamanho invalido");
//             }
//             break;

//         case 'F':
//             if(tam == 'P' || tam == 'p'){
//                 valor = 28.75;
//             }

//             else if(tam == 'G' || tam == 'g'){
//                 valor = 51.00;
//             }

//             else if(tam == 'M' || tam == 'M'){
//                 valor = 39.99;
//             }

//             else{
//                 printf("Tamanho invalido");
//             }
//             break;

//         default:
//             printf("Genero invalido!");
//             break;

//     }

//     return valor;


// }


// float main(){
//     char sexo;
//     char tamanho;
//     float valor;


//     printf("Digite o seu sexo: ");
//     scanf(" %c", &sexo);
//     printf("Tamanho?: ");
//     scanf(" %c", &tamanho);


//     float valorTotal = valorP(tamanho, sexo);

//     printf("Valor: %.2f", valorTotal);

//     return 0;
// }


























