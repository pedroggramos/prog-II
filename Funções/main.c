#include <stdio.h>

// void verificarVoto(int idade);

// int main()
// {
// 	int idade = 0;
// 	printf("Digite a idade: ");
// 	scanf("%d", &idade);
// 	verificarVoto(idade);

// 	return 0;
// }

// void verificarVoto(int i){
//     if(i >= 18 && i <= 70){
//         printf("\nObrigado a votar");
//     }
//     else{
//         printf("\nNC#o obrigado a votar");
//     }
// }


//3

// int calcularDias(int anos, int meses, int dias);

// int main() {

// 	int anos = 0;
// 	int meses = 0;
// 	int dias = 0;
// 	int totalDias = 0;

// 	printf("Digite a qtd de anos: ");
// 	scanf("%d", &anos);
// 	printf("Digite a qtd de meses: ");
// 	scanf("%d", &meses);
// 	printf("Digite a qtd de dias: ");
// 	scanf("%d", &dias);
	
// 	totalDias = calcularDias(anos, meses, dias);
	
// 	printf("\nTotal de dias: %d", totalDias);

// 	return 0;
// }

// int calcularDias(int anos, int meses, int dias){
//     int total = 0;
//     total = (anos * 365) + (meses * 30) + dias;
//     return total;
// } 

float calcularPreco(char sexo, char tamanho);

int main() {
	char sexo;
	char tamanho;
	float valorFinal = 0;

	printf("Digite o sexo: ");
	scanf(" %c", &sexo);
	printf("Digite o tamanho: ");
	scanf(" %c", &tamanho);

	valorFinal = calcularPreco(sexo, tamanho);

	printf("Valor final: %.2f", valorFinal);

	return 0;
}

float calcularPreco(char sexo, char tamanho) {
	float total = 0;

	if(sexo == 'm' || sexo == 'M') {
		switch(tamanho) {
		case 'p':
			total = 22.25;
			break;
		case 'm':
			total = 27.15;
			break;
		case 'g':
			total = 40;
		}
	}
	else {
		switch(tamanho) {
		case 'p':
			total = 28.75;
			break;
		case 'm':
			total = 39.99;
			break;
		case 'g':
			total = 51;
		}
	}

	return total;
}






















