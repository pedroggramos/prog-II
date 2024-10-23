
#include <stdio.h>

int main()
{
// 	float matriz[4][4];
// 	int n = 4;
// 	float soma = 0;
// 	float media = 0;
// 	float somaTriInferior = 0;

// 	for(int i = 0; i < 4; i++) {
// 		for(int j = 0; j < 4; j++) {
// 			printf("Digite um valor: ");
// 			scanf("%f", &matriz[i][j]);
// 			if(j >= n - i){
// 			    somaTriInferior = somaTriInferior + matriz[i][j];
// 			}
// 		}
// 	}
// 	printf("\nMatriz original\n");
// 	for(int i = 0; i < 4; i++) {
// 		for(int j = 0; j < 4; j++) {
// 			printf("%.1f ", matriz[i][j]);
// 		}
// 		printf("\n");
// 	}

// 	printf("\nDiagonal principal\n");
// 	for(int i = 0; i < 4; i++) {
// 		for(int j = 0; j < 4; j++) {
// 			if(i == j) {
// 				printf("%.1f ", matriz[i][j]);
// 				soma = soma + matriz[i][j];
// 			}
// 			else {
// 				printf("*** ");
// 			}
// 		}
// 		printf("\n");
// 	}

// 	printf("\nDiagonal secundC!ria\n");
// 	for(int i = 0; i < 4; i++) {
// 		for(int j = 0; j < 4; j++) {
// 			if(i + j == n - 1) {
// 				printf("%.1f ", matriz[i][j]);
// 			}
// 			else {
// 				printf("*** ");
// 			}
// 		}
// 		printf("\n");
// 	}

// 	media = soma / n;

// 	printf("\nMC)dia: %.1f\n", media);

// 	printf("\nTriC"ngulo superior da diagonal principal\n");
// 	for(int i = 0; i < 4; i++) {
// 		for(int j = 0; j < 4; j++) {
// 			if(j > i) {
// 				printf("%.1f ", matriz[i][j]);
// 			}
// 			else {
// 				printf("*** ");
// 			}
// 		}
// 		printf("\n");
// 	}
// 	printf("\nSoma: %.1f\n", somaTriInferior);


	//Exercicio transposta

	int matriz[2][4];
	int transposta[4][2];

	for(int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			printf("Digite um valor: ");
			scanf("%d", &matriz[i][j]);
			transposta[j][i] = matriz[i][j];
		}
	}
	
	printf("\nMatriz original\n");
	for(int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatriz tranposta\n");
	for(int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", transposta[i][j]);
		}
		printf("\n");
	}


	return 0;
}