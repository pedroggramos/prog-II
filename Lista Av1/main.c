#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// int main(void) {

// 1 ----------------------------------

// int matriz[2][4];

// for(int i = 0; i < 2; i++){
//   for(int j = 0; j < 4; j++){
//     printf("Digite um numero: ");
//     scanf("%d", &matriz[i][j]);

//     matriz[i][j] = 2 * matriz[i][j];
//   }
// }

// for(int i = 0; i < 2; i++){
//   for(int j = 0; j < 4; j++){
//     printf("[%d]", matriz[i][j]);
//   }
//    printf("\n");
// }

// 2 ------------------------------------------

// int matrizA[3][3];
// int matrizB[3][3];
// int matrizC[3][3];

// for(int i = 0; i < 3; i++){
//     for(int j = 0; j < 3; j++){
//       printf("Digite um numero A: ");
//       scanf("%d", &matrizA[i][j]);
//     }
//   }

// for(int i = 0; i < 3; i++){
//   for(int j = 0; j < 3; j++){
//     printf("Digite um numero B: ");
//     scanf("%d", &matrizB[i][j]);
//   }
// }

// for(int i = 0; i < 3; i++){
//   for(int j = 0; j < 3;j++){
//     matrizC[i][j] = (3 * matrizA[i][j]) - matrizB[i][j];
//   }
// }

// for(int i = 0; i < 3;i++){
//   for(int j = 0;j < 3;j++){
//     printf("[%d]", matrizC[i][j]);
//   }
//   printf("\n");
// }

// 3 --------------------------------------------------

// int matriz[5][2];
// int transposta[2][5];

// for(int i = 0; i < 5;i++){
//   for(int j = 0;j < 2;j++){
//     printf("Digite um nC:mero: ");
//     scanf("%d", &matriz[i][j]);
//   }
// }

// for(int i = 0;i < 5;i++){
//   for(int j = 0; j < 2; j++){
//     printf("[%d]", matriz[i][j]);
//   }
//   printf("\n");
// }

// for (int i = 0; i < 5; i++) {
//     for (int j = 0; j < 2; j++) {
//         transposta[j][i] = matriz[i][j];
//     }
// }

// printf("\nTransposta:\n");

// for(int i = 0;i < 2;i++){
//   for(int j = 0; j < 5; j++){
//     printf("[%d]", transposta[i][j]);
//   }
//   printf("\n");
// }

//   4---------------------


// int matriz1[4][2];
// int matriz2[2][4];
// int resultado[4][4];



// printf("Digite os valores da primeira matriz 4x2:\n");
// for(int i = 0; i < 4; i++) {
//     for(int j = 0; j < 2; j++) {
//         printf("Elemento [%d][%d]: ", i, j);
//         scanf("%d", &matriz1[i][j]);
//     }
// }


// printf("\nDigite os valores da segunda matriz 2x4:\n");
// for(int i = 0; i < 2; i++) {
//     for(int j = 0; j < 4; j++) {
//         printf("Elemento [%d][%d]: ", i, j);
//         scanf("%d", &matriz2[i][j]);
//     }
// }

// for(int i = 0; i < 4; i++) {
//     for(int j = 0; j < 4; j++) {
//         resultado[i][j] = 0;
//     }
// }

// for(int i = 0; i < 4; i++) {
//     for(int j = 0; j < 4; j++) {
//         for(int k = 0; k < 2; k++) {
//             resultado[i][j] += matriz1[i][k] * matriz2[k][j];
//         }
//     }
// }


// printf("\nPrimeira Matriz (4x2):\n");
// for(int i = 0; i < 4; i++) {
//     for(int j = 0; j < 2; j++) {
//         printf("[%d] ", matriz1[i][j]);
//     }
//     printf("\n");
// }


// printf("\nSegunda Matriz (2x4):\n");
// for(int i = 0; i < 2; i++) {
//     for(int j = 0; j < 4; j++) {
//         printf("[%d] ", matriz2[i][j]);
//     }
//     printf("\n");
// }

// // Exibindo a matriz resultado
// printf("\nMatriz Resultado (4x4):\n");
// for(int i = 0; i < 4; i++) {
//     for(int j = 0; j < 4; j++) {
//         printf("[%d] ", resultado[i][j]);
//     }
//     printf("\n");
// }



// 5------------------------


// 	int matriz[3][3];

// 	for (int i = 0; i < 3; i++) {
// 		for (int j = 0; j < 3; j++) {
// 			printf("Digite um num: ");
// 			scanf("%d", &matriz[i][j]);

// 		}
// 	}


// 	for (int i = 0; i < 3; i++) {
// 		for (int j = 0; j < 3; j++) {
// 			if (j > i) {
// 				printf("[%d] ", matriz[i][j]);
// 			} else {
// 				printf("* ");
// 			}
// 		}
// 		printf("\n");
// 	}

// 6---------------------------

// int matriz[3][3];
// int n = 3;


//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("Digite os elementos da matriz 3x3:\n");
//             scanf("%d", &matriz[i][j]);
//         }
//     }

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//           if(i + j == n - 1){
//                 printf("[%d]", matriz[i][j]);
//           }
//           else{
//               printf("*");
//           }
//         }
//         printf("\n");
//     }


// 7------------------------

// 	int matriz[3][3];
// 	int n = 3;
// 	int maior = 0;

// 	for (int i = 0; i < 3; i++) {
// 		for (int j = 0; j < 3; j++) {
// 			printf("Digite os elementos da matriz 3x3:\n");
// 			scanf("%d", &matriz[i][j]);
// 		}
// 	}

//  for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//           if(i + j == n - 1){
//                 printf("[%d]", matriz[i][j]);
//                 if (matriz[i][j] > maior) {
//                 maior = matriz[i][j];
//             }
//           }
//           else{
//               printf("*");
//           }
//         }
//         printf("\n");
//     }

//     printf("O maior valor acima da diagonal secundaria e: %d\n", maior);

// 8-------------------------------

// 	int matriz[3][3];
// 	int n = 3;
// 	int soma = 0;
// 	int contador = 0;
// 	float media = 0;


// 	for (int i = 0; i < 3; i++) {
// 		for (int j = 0; j < 3; j++) {
// 			printf("Digite os elementos da matriz 3x3:\n");
// 			scanf("%d", &matriz[i][j]);
// 		}
// 	}

// 	for (int i = 0; i < 3; i++) {
// 		for (int j = 0; j < 3; j++) {
// 			if(i + j == n - 1) {
// 				printf("[%d]", matriz[i][j]);
// 				soma += matriz[i][j];
// 				contador++;
// 			}
// 			else {
// 				printf("*");
// 			}
// 		}
// 		printf("\n");
// 	}

// 	media = (float)soma / contador;

// 	printf("A media dos valores abaixo da diagonal secundaria e: %.2f\n", media);




// 9-----------------------------

// float soma(float a, float b) {
//     return a + b;
// }

// float subtracao(float a, float b) {
//     return a - b;
// }

// float multiplicacao(float a, float b) {
//     return a * b;
// }

// float divisao(float a, float b) {
//     if (b != 0) {
//         return a / b;
//     } else {
//         printf("Erro: Divisao por zero!\n");
//         return 0;
//     }
// }

// int main() {
//     float num1, num2, resultado;
//     int operacao;


//     printf("Digite o primeiro numero: ");
//     scanf("%f", &num1);

//     printf("Digite o segundo numero: ");
//     scanf("%f", &num2);

//     printf("Escolha a operacao:\n");
//     printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
//     scanf("%d", &operacao);

//     switch (operacao) {
//         case 1:
//             resultado = soma(num1, num2);
//             printf("Resultado da soma: %.2f\n", resultado);
//             break;
//         case 2:
//             resultado = subtracao(num1, num2);
//             printf("Resultado da subtracao: %.2f\n", resultado);
//             break;
//         case 3:
//             resultado = multiplicacao(num1, num2);
//             printf("Resultado da multiplicacao: %.2f\n", resultado);
//             break;
//         case 4:
//             resultado = divisao(num1, num2);
//             if (num2 != 0) {
//                 printf("Resultado da divisao: %.2f\n", resultado);
//             }
//             break;
//         default:
//             printf("Operacao invalida!\n");
//             break;
//     }

//     return 0;
// }

// 10-------------------------------

// void tabuada(int n) {
// 	int resultado;
// 	int i = 0;

// 	do {
// 		resultado = 7 * i;
// 		if (resultado < n) {
// 			printf("7 x %d = %d\n", i, resultado);
// 		}
// 		i++;
// 	} while(resultado < n);
// }

// int main() {
// 	int numero;
// 	printf("Digite um numero");
// 	scanf("%d", &numero);

// 	tabuada(numero);

// 	return 0;

// }


// 11----------------------------

// int numeros(int a, int b, int c) {

//     int maior = a;


// 	if(b > maior ) {
// 		maior = b;
// 	}

// 	if(c > maior) {
// 		maior = c;
// 	}

// 	return maior;
// }

// int main() {
// 	int num1 = 0;
// 	int num2 = 0;
// 	int num3 = 0;

// 	printf("Digite o numero 1:");
// 	scanf("%d", &num1);
// 	printf("Digite o numero 2:");
// 	scanf("%d", &num2);
// 	printf("Digite o numero 3:");
// 	scanf("%d", &num3);

// 	int maior = numeros(num1,num2,num3);

// 	printf("O maior C): %d\n", maior);

// 	return 0;
// }

// 12----------------

// float calcularAumento(float salario, char nivel) {
//     float aumento;

//     switch (nivel) {
//         case 's':
//         case 'S':
//             aumento = salario * 0.05;
//             break;
//         case 'p':
//         case 'P':
//             aumento = salario * 0.10;
//             break;
//         case 'j':
//         case 'J':
//             aumento = salario * 0.15;
//             break;
//         default:
//             printf("NC-vel de experiC*ncia invC!lido.\n");
//             return 0;
//     }

//     return salario + aumento; // Retorna o novo salC!rio
// }

// int main() {
//     float salario;
//     char nivel;

//     printf("Digite o salario: ");
//     scanf("%f", &salario);

//     printf("Digite o nivel de experiencia (s - SC*nior, p - Pleno, j - JC:nior): ");
//     scanf(" %c", &nivel);

//     float novoSalario = calcularAumento(salario, nivel);

//     if (novoSalario > 0) {
//         printf("O novo salario C): %.2f\n", novoSalario);
//     }

//     return 0;
// }

// 13----------------------------------------

// int somar(int a, int b, int c){
//     return a + b + c;
// }

// float media(int a, int b, int c){
//     int soma = somar(a,b,c);
//      return (float)soma / 3;
// }

// int main(){
//     int num1, num2, num3;

//     printf("Digite o primeiro numero: ");
//     scanf("%d", &num1);
//     printf("Digite o segundo numero: ");
//     scanf("%d", &num2);
//     printf("Digite o terceiro numero: ");
//     scanf("%d", &num3);

//     float somaTotal = somar(num1,num2,num3);
//     float resultadoMedia = media(num1,num2,num3);

//     printf("A soma total C): %.2f", somaTotal);
//     printf("\nA mC)dia C): %.2f", resultadoMedia);

//     return 0;
// }


// 14------------------------

// int pontos(int v, int d, int e) {
// 	int pontosV = 3;
// 	int pontosE = 1;

// 	return(pontosV * v) + (pontosE * e);
// }

// float media(int v, int d, int e) {
// 	int totalJogos = v + e + d;
// 	float pontosTotais = pontos(v,d,e);

// 	return (float)pontosTotais / totalJogos;
// }


// int main() {
// 	int vitorias;
// 	int derrotas;
// 	int empates;

// 	printf("Digite a qtd de Vitorias: ");
// 	scanf("%d", &vitorias);

// 	printf("Digite a qtd de derrotas: ");
// 	scanf("%d", &derrotas);

// 	printf("Digite a qtd de empates: ");
// 	scanf("%d", &empates);


// 	int pontosTotais = pontos(vitorias,derrotas,empates);
// 	float mediaTotal = media(vitorias,derrotas,empates);


// 	printf("O time tem um total de %d pontos.\n", pontosTotais);
// 	printf("A mC)dia de pontos por jogo: %.2f.\n", mediaTotal);


// 	return 0;
// }

// 15---------------------------------


// a) R: 25 6422296 6422296 25 50 6422292


// b) R: a: O valor da variC!vel a, que C) 25.
// pa: O valor de pa, que C) o endereC'o de memC3ria onde a estC! armazenado.
// &a: O endereC'o de memC3ria da variC!vel a, que C) o mesmo valor de pa (o ponteiro aponta para a).
// *pa: O valor armazenado no endereC'o apontado por pa, que C) o valor de a (25).
// b: O valor da variC!vel b, que C) o resultado da soma de *pa e a, ou seja, 50.
// &b: O endereC'o de memC3ria onde a variC!vel b estC! armazenada.

// 16---------------------------


// void contar_vogais(char *str, int *numCaracteres){
//     int vogais = 0;
//     *numCaracteres = 0;

//     while(str[*numCaracteres] != '\0'){
//         char c = str[*numCaracteres];

//         if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
//             vogais++;
//         }

//         (*numCaracteres)++;
//     }

//     printf("qtd de vogais: %d\n", vogais);
// }

// int main(){
//     char string[100];
//     int numCaracteres;


//     printf("Digite uma string: ");
//     fgets(string, sizeof(string), stdin);

//     contar_vogais(string, &numCaracteres);

//     printf("qtd de caracteres: %d\n", numCaracteres);

//     return 0;



// }


// 17-------------------------------

// void calcular_hexagono(float l, float *area, float *perimetro) {
// 	*area = (3 * pow(l, 2)* sqrt(3)) / 2;

// 	*perimetro = 6 * l;
// }

// int main() {
// 	float lado;
// 	float area;
// 	float perimetro;

// 	printf("Digite o valor do lado do hexagono: ");
// 	scanf("%f", &lado);

// 	calcular_hexagono(lado, &area, &perimetro);

// 	printf("C!rea do hexagono: %.2f\n", area);
// 	printf("Perimetro do hexagono: %.2f\n", perimetro);

// 	return 0;
// }


// 18----------------------------

// char validarSituacao(float p1, float p2, float p3, int faltas, int aulas, float *media){
//     *media = (p1 + p2 + p3) / 3;

//     float frequencia = (faltas / aulas) * 100;

//     if(frequencia <= 0.25){
//         if(*media >= 6){
//             return 'A';
//         }

//         else{
//             return 'R';
//         }
//     }

//     if(frequencia > 0.25){
//         return 'F';
//     }

// }

// int main(){
//     int n1;
//     int n2;
//     int n3;
//     int faltas;
//     int aulas;
//     float media;

//     printf("primeira nota: ");
//     scanf("%d", &n1);

//     printf("segunda nota: ");
//     scanf("%d", &n2);

//     printf("terceira nota: ");
//     scanf("%d", &n3);

//     printf("numero de faltas: ");
//     scanf("%d", &faltas);

//     printf("numero de aulas: ");
//     scanf("%d", &aulas);

//     char situacao = validarSituacao(n1,n2,n3,faltas,aulas,&media);


//     printf("MC)dia: %.2f", media);
//     printf("SituaC'C#o: %c", situacao);

//     return 0;
// }

// 19--------------------------------

// int verificar_pares(int *v) {
// 	int pares = 0;

// 	for(int i = 0; i < 6; i++) {
// 		if(v[i] % 2 == 0) {
// 			pares++;
// 		}
// 	}

// 	return pares;
// }

// int main() {
// 	int V1[6];

// 	printf("Insira 6 numero inteiros\n");
// 	for(int i = 0; i < 6; i++) {
// 		printf("Digite o numero: ");
// 		scanf("%d", &V1[i]);
// 	}

// 	int numPares = verificar_pares(V1);

// 	printf("qtd de numeros pares: %d", numPares);

// 	return 0;

// }

// 20------------------------------

// int inverter_vetor(int *v1, int *v2, int n){
//     int maior;
//     n = 5;

//     for(int i = 0; i < n; i++){
//         v2[n - 1 - i] = v1[i];
//         if(v1[i] > maior){
//             maior = v1[i];
//         }
//     }

//     return maior;
// }


// int main(){
//     int V1[5];
//     int V2[5];
//     int n = 5;


//     printf("Digite numeros do Vetor 1\n\n");
//     for(int i = 0; i < 5; i++){
//         printf("n: ");
//         scanf("%d", &V1[i]);
//     }



//     int valInvertdos = inverter_vetor(V1,V2,n);

//     printf("Vetor invertido\n");

//     for(int i = 0; i < n; i++){
//         printf("%d", V2[i]);
//     }

//     printf("\nMaior: %d", valInvertdos);

//     return 0;
// }


// 21--------------------------------------


// void multiplicar(int *v1, int *v2, int x, int n){

//     for(int i = 0; i < n; i++){
//         v2[i] = v1[i] * x;
//     }

// }

// int main(){
//     int v1[5];
//     int v2[5];
//     int x;
//     int n;

//     printf("Digite o valor de n: ");
//     scanf("%d", &n);
//     printf("Digite o valor de x: ");
//     scanf("%d", &x);

//     for(int i = 0;i < n; i++){
//      printf("V1: ");
//      scanf("%d", &v1[i]);
//     }

//     multiplicar(v1,v2,x,n);

//     for(int i = 0; i < n;i++){
//         printf("%d\n", v2[i]);
//     }


// }

// 22---------------------------------


// int main(){
//     int *array;
//     int n = 5;
//     int soma;

//

//     array = (int*) malloc(n * sizeof(int));

//     if(array == NULL){
//         printf("Error");

//         return 1;
//     }

//     for(int i = 0; i < n;i++){
//         printf("Digite o valor: ");
//         scanf("%d", &array[i]);

//         soma = soma + array[i];
//     }

//     printf("\n");

//     printf("Valores armazenados no array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
//     printf("Soma: %d", soma);


//     free(array);

//     return 0;
// }

// 23------------------------------

// int main(){

//     int *arrayOriginal;
//     int *arrayCopia;

//     int n;

//     printf("Digite o numero de elementos: ");
//     scanf("%d", &n);

//     arrayOriginal = (int*) malloc(n * sizeof(int));

//     for(int i = 0; i < n; i++){
//         printf("Digite um valor: ");
//         scanf("%d", &arrayOriginal[i]);

//     }

//     arrayCopia = (int*) malloc(n * sizeof(int));

//     for(int i = 0;i < n;i++){
//         arrayCopia[i] = arrayOriginal[i];
//     }


//     printf("CC3pia do array:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arrayCopia[i]);
//     }
//     printf("\n");


//     free(arrayOriginal);
//     free(arrayCopia);

//     return 0;
// }

// 24----------------------------------------

// int main(){
//     int *array;
//     int n;
//     int posicao;

//     printf("Digite o numero de elementos: ");
//     scanf("%d", &n);

//     array = (int*) malloc(n * sizeof(int));

//      for(int i = 0; i < n; i++){
//         printf("Digite um valor: ");
//         scanf("%d", &array[i]);

//     }

//     printf("Array atual:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");

//     printf("Digite a posiC'C#o que deseja remover (1 a %d): ", n);
//     scanf("%d", &posicao);

//     posicao--;

//     for (int i = posicao; i < n - 1; i++) {
//         array[i] = array[i + 1];
//     }

//     array = (int*) realloc(array, (n - 1) * sizeof(int));

//     printf("novo array:\n");
//     for (int i = 0; i < n - 1; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");

//     free(array);

//     return 0;
// }


// 25--------------------------


// int main() {

// 	int **matriz;
// 	int linhas, colunas, escalar;

// 	printf("Digite o numero de linhas: ");
// 	scanf("%d", &linhas);
// 	printf("Digite o numero de colunas: ");
// 	scanf("%d", &colunas);


// 	matriz = (int**) malloc(linhas * sizeof(int*));
// 	for (int i = 0; i < linhas; i++) {
// 		matriz[i] = (int*) malloc(colunas * sizeof(int));
// 	}


// 	for (int i = 0; i < linhas; i++) {
// 		for (int j = 0; j < colunas; j++) {
// 			printf("Elemento [%d][%d]: ",i,j);
// 			scanf("%d", &matriz[i][j]);
// 		}
// 	}
	
// 	printf("Digite o valor do escalar: ");
//     scanf("%d", &escalar);

// 	for (int i = 0; i < linhas; i++) {
// 		for (int j = 0; j < colunas; j++) {
// 			matriz[i][j] *= escalar;
// 		}
// 	}

// 	for (int i = 0; i < linhas; i++) {
// 		for (int j = 0; j < colunas; j++) {
// 			printf("%d ", matriz[i][j]);
// 		}
// 		printf("\n");
// 	}

// 	for (int i = 0; i < linhas; i++) {
// 		free(matriz[i]);
// 	}


// 	free(matriz);


// 	return 0;

// }








// 		return 0;
// 	}