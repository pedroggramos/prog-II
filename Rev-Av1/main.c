#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 2

// int inteiro(int num){

//     return num + 5;
// }

// int main(){
//     int num = 0;

//     printf("Digite um numero: ");
//     scanf("%d", &num);


//     int resultado = inteiro(num);

//     printf("Numero incrementado: %d", resultado);

//     return 0;

// }

// 3

// int impar(int array[]){

//     int impar;

//     for(int i = 0; i < 4; i++){
//         if(array[i] % 2 != 0 ){
//             impar++;
//         }
//     }

//     return impar;

// }

// int main(){

//     int array[4];

//     for(int i = 0; i < 4; i++){
//         printf("Digite o numero: ");
//         scanf("%d", &array[i]);
//     }

//     int imp = impar(array);

//     printf("qtd de numeros impares: %d", imp);


//     return 0;
// }

// 4


// void ref(int array[], int valor, int *contagem){
//     for(int i = 0; i < 4; i++){
//         if(array[i] == valor){
//             (*contagem)++;
//         }
//     }


// }

// int main(){
//     int array[4];
//     int cont;
//     int val;

//     printf("Digite o valor especifico: ");
//     scanf("%d", &val);

//     for(int i = 0; i < 4; i ++){
//         printf("Digite um numero: ");
//         scanf("%d", &array[i]);
//     }

//     ref(array, val, &cont);

//     printf("O valor foi digitado %d vezes", cont);

//     return 0;
// }

// 5

// void mediaP(int n1, int n2, float *media){

//     *media = (n1 + n2) / 2;

// }

// int main(){

//     int n1;
//     int n2;
//     int n3;
//     float media;


//     printf("n1: ");
//     scanf("%d", &n1);
//     printf("\nn2: ");
//     scanf("%d", &n2);

//     mediaP(n1,n2,&media);

//     printf("\nMC)dia: %.2f", media);

//     return 0;
// }

// 6

// void valores(int *n1, int *n2){

//     *n1 = *n1 * 2;
//     *n2 = *n2 - 1;
// }

// int main(){

//     int n1;
//     int n2;


//     printf("n1: ");
//     scanf("%d", &n1);
//     printf("\nn2: ");
//     scanf("%d", &n2);

//     valores(&n1, &n2);

//     printf("N1: %d", n1);
//     printf("\nn2: %d", n2);

//     return 0;
// }

// pointeiros


// int main(){

// int d = 8;
// int e = 17;
// int f = 6;

// int *a = &d;
// int *b = &e;
// int *c = &f;






// printf("*a: %d", *a);

// int a = 4;
// int b = 7;
// int aux = 0;

// int *pa = &a;
// int *pb = &b;

// printf("Digite a varavel a: ");
// scanf("%d", &a);
// printf("Digite a varavel b: ");
// scanf("%d", &b);

// aux = *pa;
// *pa = *pb;
// *pb = aux;

//  printf("ApC3s a troca:\n");
//     printf("a = %d\n", a);
//     printf("b = %d\n", b);


// char nome[10];
// char *pNome = nome;

// int idades[10];
// int *pIdades = idades;


// printf("Digite o nome: ");
// scanf(" %s", nome);
// printf("Digite a idade: ");
// scanf("%d", idades);



// int *pIdades2 = idades;

// printf("Nome: %s", pNome);
// printf("Nome: %d", *pIdades2);


// void troca(int *pa, int *pb){
//     int tmp = *pa;
//     *pa = *pb;
//     *pb = tmp;
// }

// int main(void){
//     int a = 4;
//     int b = 3;

//     int *pa = &a;
//     int *pb = &b;

//     troca(pa,pb);

//     printf("Valor de pa: %d", *pa);
//     printf("valor de pb: %d", *pb);

//     return 0;

// }

// int x = 10;

// int *p;

// p = &x;


// printf("%d", *p);


// int x = 5;
// int* ptr = &x;
// int y = *ptr;

// printf("%d", x);




// realloc, calloc, malloc


// int main(void) {
//     int *ptr;
//     ptr = (int *) malloc(5 * sizeof(int)); // mesma coisa que criar um array, int p[5]; malloc (5 * (4)) 4 porque int ocupa 4 bytes de memoria
//     if (ptr == NULL) { // caso nao tenha memoria suficiente para alocar, ele da erro e retorna 1, que C) mesma coisa que erro
//         printf("ERRO! Memoria insuficiente!\n");
//         return 1;
//     }

//     for (int i = 0; i < 5; i++) {
//         ptr[i] = i+1;
//     }
//     for (int i = 0; i < 5; i++) {
//         printf("[%d]", ptr[i]);
//     }
//     printf("\n");

//     ptr = realloc(ptr, 3 * sizeof(int));

//     for (int i = 0; i < 3; i++) {
//         printf("[%d]", ptr[i]);
//     }

//     printf("\n");

//     ptr = realloc(ptr, 10 * sizeof(int));

//     for (int i = 0; i < 10; i++) {
//         printf("[%d]", ptr[i]);
//     }
//     free(ptr);
//     printf("\n");
//     return 0;
// }



//     return 0;

// }





// int main(){
//     int *ptr;
//     int tam;

//     printf("Digite o tamanho de ptr: ");
//     scanf("%d", &tam);

//     ptr = (int *) calloc(tam, sizeof(int));
//     if(ptr == NULL){
//         printf("Memoria insuficiente!");

//         return 1;
//     }

//     for(int i = 0; i < tam;i++){
//         ptr[i] = i + 1;
//         printf("[%d]", ptr[i]);
//     }

//     printf("\nDigite o novo tamanho de ptr: ");
//     scanf("%d", &tam);

//     ptr = realloc(ptr, tam * sizeof(int));

//     for(int i = 0; i < tam;i++){
//         ptr[i] = i + 1;
//         printf("[%d]", ptr[i]);
//     }

//     free(ptr);
//     printf("\nptr liberado!");

//     printf("\nDigite o tamanho de ptr: ");
//     scanf("%d", &tam);

//     ptr = (int *) malloc(tam * sizeof(int));

//     for(int i = 0; i < tam;i++){
//         ptr[i] = i + 1;
//         printf("[%d]", ptr[i]);
//     }


//     return 0;
// }

// int main(){
//     int rows;
//     int cols;

//     printf("Digite a quantidade de linhas: ");
//     scanf("%d", &rows);

//     printf("Digite a quantidade de colunas: ");
//     scanf("%d", &cols);

//     int **matriz = (int **) malloc(rows * sizeof(int *));

//     for(int i = 0; i < rows; i++){
//         matriz[i] = (int *) malloc(cols * sizeof(int));
//     }


//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < cols;j++){
//             matriz[i][j] = i * cols + j;
//             printf("[%d]", matriz[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// int main(){
//     int *p;
//     int i, n = 101;

//     p = (int *) malloc(n * sizeof(int));

//     for(i = 0; i < n; i++){
//         printf("%d", *p);
//     }

//     free(p);

//     return 0;
// }

// int main(){

//     int rows = 4;
//     int cols = 5;
//     int **p;


//     p = (int **) malloc(rows * sizeof(int *));

//     for(int i = 0; i < rows; i++){
//         p[i] = (int *) malloc(cols * sizeof(int));
//     }

//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             p[i][j] = i * rows + j;
//             printf("%d ", p[i][j]);
//         }
//         printf("\n");
//     }

// }

// 1


// int main(){
//     int tam;
//     int *array;

//     printf("Digite o tamanho da array: ");
//     scanf("%d", &tam);

//     array = (int *) malloc(tam * sizeof(int));
//     if(array == NULL){
//         printf("Memoria insuficiente!");

//         return 1;
//     }

//     for(int i = 0; i < tam; i++){
//         printf("n: ");
//         scanf("%d", &array[i]);
//     }

//     for(int i = 0; i < tam; i++){
//         printf("[%d]", array[i]);
//     }

//     free(array);

//     return 0;
// }

// 2

// int main() {
// 	int **matriz;
// 	int rows = 3;
// 	int cols = 2;

// 	matriz = (int **) malloc(rows * sizeof(int *));
// 	if(matriz == NULL) {
// 		printf("Memoria insuficiente!");
// 	}

// 	for(int i = 0; i < rows; i++) {
// 		matriz[i] = (int *) malloc(cols * sizeof(int));
// 		if(matriz[i] == NULL) {
// 			printf("Memoria insuficiente!");
// 		}
// 	}

// 	for(int i = 0; i < rows; i++) {
// 		for(int j = 0; j < cols; j++) {
// 			matriz[i][j] = i * rows + j;
// 			printf("[%d]", matriz[i][j]);
// 		}
// 		printf("\n");
// 	}

// 	for(int i = 0; i < rows; i++) {
// 		free(matriz[i]);
// 	}
// 	free(matriz);

// 	return 0;
// }

// 3

// char *preencheAlfabeto(int tamanho){
//     char *vetor;
    
//     vetor = (char *) malloc(tamanho * sizeof(char));
    
//     for(int i = 0; i < tamanho && i < 26; i++){
//         vetor[i] = 'a' + i;
//     }
    
    
//     return vetor;
// }

// char main(){
//     int i, tam = 10;
//     char *vetor;
    
//     vetor = preencheAlfabeto(tam);
    
//     for(int i = 0;i < tam; i++){
//         printf(" %c ", vetor[i]);
//     }
    
//     free(vetor);
    
//     return 0;
// }



















