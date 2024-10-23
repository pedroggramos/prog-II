#include <stdio.h>

// struct aluno{
//     char nome[50];
//     float media;
//     float notas[3];
// };

// struct tempo{
//     int horas;
//     int minutos;
// };
// typedef struct tempo tempo;

// tempo converterTempo(int totalMinutos);

struct Endereco {
	char rua[50];
	char cidade[50];
	char estado[50];
};
typedef struct Endereco endereco;

struct Pessoa {
	char nome[50];
	endereco end;
};
typedef struct Pessoa pessoa;

void imprimirPessoa(pessoa p);

int main()
{
	//1

	// struct aluno alu;
	// float soma = 0;

	// printf("Digite o nome: ");
	// fgets(alu.nome, 50, stdin);

	// for(int i =0; i < 3; i++){
	//     printf("Digite uma nota: ");
	//     scanf("%f", &alu.notas[i]);
	//     soma = soma + alu.notas[i];
	// }

	// alu.media = soma / 3;

	// printf("\nNome: %s", alu.nome);
	// printf("MC)dia: %.2f", alu.media);
	// for(int i =0; i < 3; i++){
	//     printf("\nNota %d: %.2f", i+1, alu.notas[i]);
	// }


	//2
	// int total = 0;
	// tempo tempoFinal;

	// printf("Digite o total de minutos: ");
	// scanf("%d", &total);

	// tempoFinal = converterTempo(total);

	//printf("\n%d:%d", tempoFinal.horas, tempoFinal.minutos);

	//3
	pessoa p;

	printf("Digite o nome: ");
	fgets(p.nome, 50, stdin);
	printf("Digite a rua: ");
	fgets(p.end.rua, 50, stdin);
	printf("Digite a cidade: ");
	fgets(p.end.cidade, 50, stdin);
	printf("Digite o estado: ");
	fgets(p.end.estado, 50, stdin);

	imprimirPessoa(p);

	return 0;
}

// tempo converterTempo(int totalMinutos){
//     tempo tmp;

//     tmp.horas = totalMinutos / 60;
//     tmp.minutos = totalMinutos % 60;

//     return tmp;
// }

void imprimirPessoa(pessoa p) {
	printf("Nome: %s", p.nome);
	printf("Rua: %s", p.end.rua);
	printf("Cidade: %s", p.end.cidade);
	printf("Estado: %s", p.end.estado);
}