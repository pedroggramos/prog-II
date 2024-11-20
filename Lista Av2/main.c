#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// 1

// struct Livro{
//     char titulo[30];
//     char autor[30];
//     int numPgs;
// };

// void imprimirLivro(struct Livro livro){
// printf("Titulo: %s\n", livro.titulo);
//     printf("Autor: %s\n", livro.autor);
//     printf("Numero de Páginas: %d\n", livro.numPgs);
// }

// int main(){
//     struct Livro meuLivro;


//     printf("Qual é seu livro?: ");
//     fgets(meuLivro.titulo, sizeof(meuLivro.titulo),stdin);
//     meuLivro.titulo[strcspn(meuLivro.titulo, "\n")] = '\0';



//     printf("Qual é o nome do autor?: ");
//     fgets(meuLivro.autor, sizeof(meuLivro.autor), stdin);
//     meuLivro.autor[strcspn(meuLivro.autor, "\n")] = '\0';

    
//     printf("Qual é a qtd de páginas?: ");
//     scanf("%d", &meuLivro.numPgs);

//     imprimirLivro(meuLivro);

//     return 0;
// }


// 2

// struct Aluno{
//     char nome[50];
//     int matricula;
//     int notas[3];
// };

// void calcularMedia(struct Aluno alunos){
//     float soma = 0;
//     int qtd = 0;

//     for(int i = 0;i < 3;i++){
//         soma = soma + alunos.notas[i];
//         qtd++;
//     }

//     float media = soma / qtd;

//     printf("Média das notas do aluno %s de matricula %d é de %.2f\n", alunos.nome, alunos.matricula, media);
// }

// int main(){

//     struct Aluno alunos;

//     printf("Nome do aluno?: ");
//     fgets(alunos.nome, sizeof(alunos.nome), stdin);
//     alunos.nome[strcspn(alunos.nome, "\n")] = '\0';

//     printf("Matrícula?: ");
//     scanf("%d", &alunos.matricula);

//     for(int i = 0; i < 3;i++){
//         printf("Digite a nota numero %d: ", i + 1);
//         scanf("%d", &alunos.notas[i]);
//     }

//     calcularMedia(alunos);

//     return 0;

// }

// 3

// struct Data{
//     int dia;
//     int mes;
//     int ano;
// };

// struct Aluno{
//     char nome[50];
//     int matricula;
//     struct Data dtNasc;
// };

// void imprimir(struct Aluno alunos){

//     printf("Nome: %s\n", alunos.nome);
//     printf("matricula: %d\n", alunos.matricula);
//     printf("Data de Nascimento: %02d/%02d/%02d\n", alunos.dtNasc.dia, alunos.dtNasc.mes, alunos.dtNasc.ano);

// }

// int main(){
//     struct Aluno alunos;

//     printf("Digite o nome do Aluno: ");
//     fgets(alunos.nome, sizeof(alunos.nome), stdin);
//     alunos.nome[strcspn(alunos.nome, "\n")] = '\0';

//     printf("Digite o número da matrícula: ");
//     scanf("%d", &alunos.matricula);

//     printf("Digite o dia de nascimento (dd): ");
//     scanf("%d", &alunos.dtNasc.dia);

//     printf("Digite o mês de nascimento (mm): ");
//     scanf("%d", &alunos.dtNasc.mes);

//     printf("Digite o ano de nascimento (aaaa): ");
//     scanf("%d", &alunos.dtNasc.ano);

//     imprimir(alunos);

//     return 0;
// }


// 4

// struct Tempo{
//     int hora;
//     int minuto;
//     int seg;
// };

// struct Data{
//     int dia;
//     int mes;
//     int ano;
// };

// struct DataHora{
//     struct Data data;
//     struct Tempo tempo;
// };

// void imprimir(struct DataHora dh){

//     printf("Data: %02d/%02d/%02d", dh.data.dia, dh.data.mes, dh.data.ano);
//     printf("\nHora: %02d:%02d:%02d", dh.tempo.hora, dh.tempo.minuto, dh.tempo.seg);

// }

// int main(){
//     struct DataHora dh;

//     printf("Digite o dia: ");
//     scanf("%d", &dh.data.dia);
//     printf("Digite o mês: ");
//     scanf("%d", &dh.data.mes);
//     printf("Digite o ano: ");
//     scanf("%d", &dh.data.ano);

//     printf("Digite a hora: ");
//     scanf("%d", &dh.tempo.hora);
//     printf("Digite o minuto: ");
//     scanf("%d", &dh.tempo.minuto);
//     printf("Digite o segundo: ");
//     scanf("%d", &dh.tempo.seg);

//     imprimir(dh);

//     return 0;

// }


// 5

struct contaBancaria{
    int numConta;
    char nomeTitular[50];
    float saldo;
};

void depositar(struct contaBancaria* conta, float valor){

    if(valor > 0){
        conta->saldo += valor;
        printf("Depósito de %.2f", valor);
    }
    else{
        printf("Valor Inválido");
    }

}

void sacar(struct contaBancaria* conta, float valor){
    if(valor > 0 && valor <= conta->saldo){
        conta->saldo -= valor;
         printf("Saque de R$ %.2f realizado com sucesso!\n", valor);
    }
    else if (valor > conta->saldo) { 
        printf("Saldo insuficiente para o saque de R$ %.2f.\n", valor); 
    }
    else {  
        printf("Valor de saque inválido.\n");
    }
}

void imprimir(struct contaBancaria conta) {
    printf("Número da conta: %d\n", conta.numConta);
    printf("Titular: %s\n", conta.nomeTitular);
    printf("Saldo atual: R$ %.2f\n", conta.saldo);
}

int main() {
    struct contaBancaria conta1;

    // Solicitando dados ao cliente
    printf("Digite o número da conta: ");
    scanf("%d", &conta1.numConta);

    printf("Digite o nome do titular da conta: ");
    getchar();  // Para limpar o buffer do scanf
    fgets(conta1.nomeTitular, 50, stdin);
    conta1.nomeTitular[strcspn(conta1.nomeTitular, "\n")] = '\0';  // Remove a quebra de linha do nome

    conta1.saldo = 0.00;  // O saldo inicial será zero

    // Exibindo a conta bancária criada
    printf("\nConta criada com sucesso!\n");
    imprimir(conta1);

    // Solicitando um depósito
    float deposito;
    printf("\nDigite o valor para depósito: R$ ");
    scanf("%f", &deposito);
    depositar(&conta1, deposito);
    imprimir(conta1);

    // Solicitando um saque
    float saque;
    printf("\nDigite o valor para saque: R$ ");
    scanf("%f", &saque);
    sacar(&conta1, saque);
    imprimir(conta1);

    return 0;
}