
#include <stdio.h>
#include <stdlib.h>

char* preencheAlfabeto(int tamanho);

int main()
{
// 	int *p;

// 	p = (int *) malloc(5 * sizeof(int));

// 	for(int i = 0; i < 5; i++) {
// 		*(p + i) = i + 1;
// 	}

// 	for(int i = 0; i < 5; i++) {
// 		printf("%d\n",*(p + i));
// 	}

// 	printf("\n");

// 	p = realloc(p, 3 * sizeof(int));

// 	for(int i = 0; i < 3; i++) {
// 		printf("%d\n",*(p + i));
// 	}

// 	printf("\n");

// 	p = realloc(p, 10 * sizeof(int));

// 	for(int i = 0; i < 10; i++) {
// 		printf("%d\n",*(p + i));
// 	}


	//1
	// int tam = 0;
	// float *vetor;
	// float soma = 0;
	// float media = 0;

	// printf("Digite a qtd de nC:meros: ");
	// scanf("%d", &tam);

	// vetor = (float *) malloc(tam * sizeof(float));

	// if(vetor == NULL){
	//     printf("Erro");
	//     return 1;
	// }

	// for(int i = 0; i < tam; i++){
	//     printf("Digite um nC:mero: ");
	//     scanf("%f", &*(vetor + i));
	//     soma = soma + *(vetor + i);
	// }
	// media = soma / tam;

	// printf("\nMC)dia: %.2f\n", media);
	// for(int i = 0; i < tam; i++){
	//     printf("%.2f ", *(vetor + i));
	// }

	// free(vetor);

	//2
	// int linhas = 3;
	// int colunas = 2;
	// int **matriz;
	// int maior = 0;
	// int menor = 0;

	// matriz = (int **) malloc(linhas * sizeof(int*));
	// if(matriz == NULL){
	//     printf("Erro");
	//     return 1;
	// }
	// for(int i = 0; i < linhas; i++){
	//     matriz[i] = (int *) malloc (colunas * sizeof(int));
	// }

	// for(int i = 0; i < linhas; i++){
	//     for(int j = 0; j < colunas; j++){
	//         printf("Digite um nC:mero: ");
	//         scanf("%d", &matriz[i][j]);

	//         if(matriz[i][j] > maior){
	//             maior = matriz[i][j];
	//         }

	//         if(matriz[i][j] < menor || (i == 0 && j == 0)){
	//             menor = matriz[i][j];
	//         }
	//     }
	// }

	// printf("\nMaior: %d", maior);
	// printf("\nMenor: %d\n", menor);

	// for(int i = 0; i < linhas; i++){
	//     for(int j = 0; j < colunas; j++){
	//         printf("%d ", matriz[i][j]);
	//     }
	//     printf("\n");
	// }

	// for(int i = 0; i < linhas; i++){
	//     free(matriz[i]);
	// }
	// free(matriz);

	//3

	int i, tam=10;
	char *vetor;
	vetor = preencheAlfabeto(tam);
	for (i=0; i<tam; i++) {
		printf("%c ", vetor[i]);
	}
	
	free(vetor);

	return 0;
}

char* preencheAlfabeto(int tamanho){
    
    char *vet = (char *) malloc(tamanho * sizeof(char));
    if(vet == NULL){
        printf("Erro");
        return NULL;
    }
    
    for(int i = 0; i < tamanho; i++){
        *(vet + i) = 'a' + i;
    }
    
    return vet;
}


