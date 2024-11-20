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

// struct contaBancaria{
//     int numConta;
//     char nomeTitular[50];
//     float saldo;
// };

// void depositar(struct contaBancaria* conta, float valor){

//     if(valor > 0){
//         conta->saldo += valor;
//         printf("Depósito de %.2f", valor);
//     }
//     else{
//         printf("Valor Inválido");
//     }

// }

// void sacar(struct contaBancaria* conta, float valor){
//     if(valor > 0 && valor <= conta->saldo){
//         conta->saldo -= valor;
//          printf("Saque de R$ %.2f realizado com sucesso!\n", valor);
//     }
//     else if (valor > conta->saldo) { 
//         printf("Saldo insuficiente para o saque de R$ %.2f.\n", valor); 
//     }
//     else {  
//         printf("Valor de saque inválido.\n");
//     }
// }

// void imprimir(struct contaBancaria conta) {
//     printf("Número da conta: %d\n", conta.numConta);
//     printf("Titular: %s\n", conta.nomeTitular);
//     printf("Saldo atual: R$ %.2f\n", conta.saldo);
// }

// int main() {
//     struct contaBancaria conta1;

//     printf("Digite o número da conta: ");
//     scanf("%d", &conta1.numConta);

//     printf("Digite o nome do titular da conta: ");
//     getchar(); 
//     fgets(conta1.nomeTitular, sizeof(conta1.nomeTitular), stdin);
//     conta1.nomeTitular[strcspn(conta1.nomeTitular, "\n")] = '\0';  
//     conta1.saldo = 0.00; 

//     printf("\nConta criada com sucesso!\n");
//     imprimir(conta1);


//     float deposito;
//     printf("\nDigite o valor para depósito: R$ ");
//     scanf("%f", &deposito);
//     depositar(&conta1, deposito);
//     imprimir(conta1);


//     float saque;
//     printf("\nDigite o valor para saque: R$ ");
//     scanf("%f", &saque);
//     sacar(&conta1, saque);
//     imprimir(conta1);

//     return 0;
// }

// 6

// struct Carro{
//     char marca[30];
//     char modelo[30];
//     int anoFabri;
// };

// int main(){

//     struct Carro carros[3];

//     for(int i = 0; i < 3;i++){
//         printf("Digite a marca do carro %d: ", i + 1);
//         fgets(carros[i].marca, sizeof(carros[i].marca), stdin);
//         carros[i].marca[strcspn(carros[i].marca, "\n")] = '\0';
//         printf("Digite o modelo do carro %d: ", i + 1);
 
//         fgets(carros[i].modelo, sizeof(carros[i].modelo), stdin);
//         carros[i].modelo[strcspn(carros[i].modelo, "\n")] = '\0';

//         printf("Digite o ano de fabricação do carro %d: ", i + 1);
//         scanf("%d", &carros[i].anoFabri);
//         getchar();
        
//     }

//      for (int i = 0; i < 3; i++) {
//         printf("Carro %d:\n", i + 1);
//         printf("Marca: %s\n", carros[i].marca);
//         printf("Modelo: %s\n", carros[i].modelo);
//         printf("Ano: %d\n\n", carros[i].anoFabri);
//     }

//     return 0;

// }

// 7

struct Funcionario{
    char nome[50];
    float salario;
};

int main(){


    int n;
    float somaSalarios = 0;

    printf("Digite o número de funcionários: ");
    scanf("%d", &n);


    struct Funcionario* func;

    func = (struct Funcionario*) malloc(n * sizeof(struct Funcionario));
     if (func == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

     for (int i = 0; i < n; i++) {
        printf("Digite o nome do funcionário %d: ", i + 1);
        getchar(); 
        fgets(func[i].nome, sizeof(func[i].nome), stdin);
        func[i].nome[strcspn(func[i].nome, "\n")] = '\0'; // Remove o '\n' do final

        printf("Digite o salário do funcionário %d: ", i + 1);
        scanf("%f", &func[i].salario);


        somaSalarios += func[i].salario;
    }

    float salarioMedio = somaSalarios / n;
    printf("O salário médio dos funcionários é: %.2f\n", salarioMedio);

   
    free(func);

    return 0;

}