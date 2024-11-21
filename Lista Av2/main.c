#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


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


// struct Funcionario{
//     char nome[50];
//     float salario;
// };


// int main(){




//     int n;
//     float somaSalarios = 0;


//     printf("Digite o número de funcionários: ");
//     scanf("%d", &n);




//     struct Funcionario* func;


//     func = (struct Funcionario*) malloc(n * sizeof(struct Funcionario));
//      if (func == NULL) {
//         printf("Erro ao alocar memória.\n");
//         return 1;
//     }


//      for (int i = 0; i < n; i++) {
//         printf("Digite o nome do funcionário %d: ", i + 1);
//         getchar();
//         fgets(func[i].nome, sizeof(func[i].nome), stdin);
//         func[i].nome[strcspn(func[i].nome, "\n")] = '\0'; // Remove o '\n' do final


//         printf("Digite o salário do funcionário %d: ", i + 1);
//         scanf("%f", &func[i].salario);




//         somaSalarios += func[i].salario;
//     }


//     float salarioMedio = somaSalarios / n;
//     printf("O salário médio dos funcionários é: %.2f\n", salarioMedio);


   
//     free(func);


//     return 0;


// }


// 8


// struct Cliente {
//     char nome[50];
//     int idade;
// };


// int main() {
//     int numClientes;
//     printf("Digite o número de clientes: ");
//     scanf("%d", &numClientes);


//     struct Cliente *clientes = (struct Cliente *)malloc(numClientes * sizeof(struct Cliente));


//     if (clientes == NULL) {
//         printf("Erro ao alocar memória!\n");
//         return 1;
//     }


//     for (int i = 0; i < numClientes; i++) {
//         printf("Digite o nome do cliente %d: ", i + 1);
//         scanf(" %49[^\n]", clientes[i].nome);
//         printf("Digite a idade do cliente %d: ", i + 1);
//         scanf("%d", &clientes[i].idade);
//     }


//     struct Cliente *maisVelho = &clientes[0];
//     for (int i = 1; i < numClientes; i++) {
//         if (clientes[i].idade > maisVelho->idade) {
//             maisVelho = &clientes[i];
//         }
//     }


//     printf("\nCliente mais velho:\n");
//     printf("Nome: %s\n", maisVelho->nome);
//     printf("Idade: %d\n", maisVelho->idade);


//     free(clientes);


//     return 0;
// }


// 9




// struct Produto {
//     char nome[50];
//     float preco;
//     int quantidade;
// };


// int main() {
//     int numProdutos;
//     printf("Digite o número de produtos: ");
//     scanf("%d", &numProdutos);




//     struct Produto *produtos = (struct Produto *)malloc(numProdutos * sizeof(struct Produto));


//     if (produtos == NULL) {
//         printf("Erro ao alocar memória!\n");
//         return 1;
//     }




//     for (int i = 0; i < numProdutos; i++) {
//         printf("Digite o nome do produto %d: ", i + 1);
//         scanf(" %49[^\n]", produtos[i].nome);
//         printf("Digite o preço do produto %d: ", i + 1);
//         scanf("%f", &produtos[i].preco);
//         printf("Digite a quantidade em estoque do produto %d: ", i + 1);
//         scanf("%d", &produtos[i].quantidade);
//     }


   
//     float valorTotalEstoque = 0.0;
//     for (int i = 0; i < numProdutos; i++) {
//         valorTotalEstoque += produtos[i].preco * produtos[i].quantidade;
//     }




//     printf("\nValor total em estoque: R$ %.2f\n", valorTotalEstoque);


   
//     free(produtos);


//     return 0;
// }


// 10


// struct Produto {
//     int codigo;
//     char descricao[30];
//     float preco;
// };


// int main() {
//     struct Produto produtos[10];
//     float percentualAumento;




//     printf("Cadastro de produtos:\n");
//     for (int i = 0; i < 10; i++) {
//         printf("\nProduto %d\n", i + 1);
//         printf("Código: ");
//         scanf("%d", &produtos[i].codigo);
//         printf("Descrição: ");
//         scanf(" %29[^\n]", produtos[i].descricao);
//         printf("Preço: ");
//         scanf("%f", &produtos[i].preco);
//     }




//     printf("\nLista de produtos cadastrados:\n");
//     for (int i = 0; i < 10; i++) {
//         printf("Código: %d, Descrição: %s, Preço: R$ %.2f\n",
//                produtos[i].codigo, produtos[i].descricao, produtos[i].preco);
//     }


 
//     printf("\nDigite o percentual de aumento de preços: ");
//     scanf("%f", &percentualAumento);




//     for (int i = 0; i < 10; i++) {
//         produtos[i].preco += produtos[i].preco * (percentualAumento / 100);
//     }


   
//     printf("\nProdutos após o reajuste de %.2f%%:\n", percentualAumento);
//     for (int i = 0; i < 10; i++) {
//         printf("Código: %d, Descrição: %s, Preço Reajustado: R$ %.2f\n",
//                produtos[i].codigo, produtos[i].descricao, produtos[i].preco);
//     }


//     return 0;
// }


// 11


// struct Habitante {
//     char sexo;
//     char corOlhos[10];
//     char corCabelos[10];
//     int idade;
// };


// int main() {
//     struct Habitante habitante;
//     int numEntrevistados = 0;
//     int somaIdadeMulheres = 0;
//     int numMulheres = 0;
//     int numLoirosOlhosAzuis = 0;
//     int homemMaisNovoIdade = -1;


//     while (1) {
//         printf("\nDigite os dados do habitante (idade 0 para terminar):\n");


//         printf("Idade: ");
//         scanf("%d", &habitante.idade);
//         if (habitante.idade == 0) break;


//         printf("Sexo (M/F): ");
//         scanf(" %c", &habitante.sexo);


//         printf("Cor dos olhos (azul/verde/castanho): ");
//         scanf("%s", habitante.corOlhos);


//         printf("Cor dos cabelos (louro/castanho/preto/ruivo): ");
//         scanf("%s", habitante.corCabelos);


     
//         numEntrevistados++;


       
//         if (habitante.sexo == 'M' || habitante.sexo == 'm') {
//             if (homemMaisNovoIdade == -1 || habitante.idade < homemMaisNovoIdade) {
//                 homemMaisNovoIdade = habitante.idade;
//             }
//         }


//         if (habitante.sexo == 'F' || habitante.sexo == 'f') {
//             somaIdadeMulheres += habitante.idade;
//             numMulheres++;
//         }


       
//         if (strcmp(habitante.corCabelos, "louro") == 0 && strcmp(habitante.corOlhos, "azul") == 0) {
//             numLoirosOlhosAzuis++;
//         }
//     }


   
//     float idadeMediaMulheres;
//     if (numMulheres > 0) {
//         idadeMediaMulheres = (float)somaIdadeMulheres / numMulheres;
//     } else {
//         idadeMediaMulheres = 0.0;
//     }


   
//     float percentagemLoirosOlhosAzuis;
//     if (numEntrevistados > 0) {
//         percentagemLoirosOlhosAzuis = (float)numLoirosOlhosAzuis * 100 / numEntrevistados;
//     } else {
//         percentagemLoirosOlhosAzuis = 0.0;
//     }


 
//     printf("\nResultados da pesquisa:\n");




//     if (homemMaisNovoIdade != -1) {
//         printf("Homem mais novo: %d anos\n", homemMaisNovoIdade);
//     } else {
//         printf("Nenhum homem foi entrevistado.\n");
//     }


   
//     printf("Número de pessoas entrevistadas: %d\n", numEntrevistados);




//     if (numMulheres > 0) {
//         printf("Idade média das mulheres: %.2f anos\n", idadeMediaMulheres);
//     } else {
//         printf("Nenhuma mulher foi entrevistada.\n");
//     }


//     printf("Percentagem de habitantes com cabelos louros e olhos azuis: %.2f%%\n", percentagemLoirosOlhosAzuis);


//     return 0;
// }




// 12


// int main() {
//     FILE *arquivoEntrada, *arquivoSaida;
//     char linha[256];
//     int linhaNumero = 1;


//     arquivoEntrada = fopen("entrada.txt", "r");
//     if (arquivoEntrada == NULL) {
//         printf("Erro ao abrir o arquivo de entrada.\n");
//         return 1;
//     }


//     arquivoSaida = fopen("saida.txt", "w");
//     if (arquivoSaida == NULL) {
//         printf("Erro ao abrir o arquivo de saída.\n");
//         fclose(arquivoEntrada);
//         return 1;
//     }


//     while (fgets(linha, sizeof(linha), arquivoEntrada)) {


//         if (linhaNumero % 2 != 0) {
//             fputs(linha, arquivoSaida);
//         }
//         linhaNumero++;
//     }


//     fclose(arquivoEntrada);
//     fclose(arquivoSaida);


//     printf("Linhas ímpares copiadas com sucesso para o arquivo de saída.\n");


//     return 0;
// }


// 13


// int main() {
//     FILE *arquivoOrigem, *arquivoDestino;
//     char caractere;


//     arquivoOrigem = fopen("origem.txt", "r");
//     if (arquivoOrigem == NULL) {
//         printf("Erro ao abrir o arquivo de origem.\n");
//         return 1;
//     }


   
//     arquivoDestino = fopen("destino.txt", "w");
//     if (arquivoDestino == NULL) {
//         printf("Erro ao abrir o arquivo de destino.\n");
//         fclose(arquivoOrigem);
//         return 1;
//     }


   
//     while ((caractere = fgetc(arquivoOrigem)) != EOF) {
//         fputc(caractere, arquivoDestino);
//     }


   
//     fclose(arquivoOrigem);
//     fclose(arquivoDestino);


//     printf("Conteúdo copiado com sucesso para o arquivo de destino.\n");


//     return 0;
// }


// 14


// int main() {
//     FILE *arquivo;
//     int numero, soma = 0, contador = 0;


   
//     arquivo = fopen("numeros.txt", "r");
//     if (arquivo == NULL) {
//         printf("Erro ao abrir o arquivo.\n");
//         return 1;
//     }


 
//     while (fscanf(arquivo, "%d", &numero) == 1) {
//         soma += numero;  // Adiciona o número à soma total
//         contador++;      // Conta o número de inteiros lidos
//     }


   
//     if (contador == 0) {
//         printf("O arquivo não contém números inteiros.\n");
//     } else {
     
//         float media = (float)soma / contador;
//         printf("A média dos números é: %.2f\n", media);
//     }


//     fclose(arquivo);


//     return 0;
// }


//15.


// typedef struct {
//     char nome[50];
//     int matricula;
//     int idade;
//     float media;
// } Aluno;


// void cadastrarAluno(const char *arquivo) {
//     FILE *fp = fopen(arquivo, "a");
//     if (fp == NULL) {
//         printf("Erro ao abrir o arquivo.\n");
//         return;
//     }


//     Aluno aluno;
//     printf("Nome: ");
//     scanf(" %[^\n]", aluno.nome);
//     printf("Matrícula: ");
//     scanf("%d", &aluno.matricula);
//     printf("Idade: ");
//     scanf("%d", &aluno.idade);
//     printf("Média: ");
//     scanf("%f", &aluno.media);


//     fprintf(fp, "%s %d %d %.2f\n", aluno.nome, aluno.matricula, aluno.idade, aluno.media);
//     fclose(fp);
// }


// int main() {
//     cadastrarAluno("alunos.txt");
//     return 0;
// }




//16.
// typedef struct {
//     char nome[50];
//     int matricula;
//     int idade;
//     float media;
// } Aluno;


// void buscarAluno(const char *arquivo) {
//     FILE *fp = fopen(arquivo, "r");
//     if (fp == NULL) {
//         printf("Erro ao abrir o arquivo.\n");
//         return;
//     }


//     char nomeBusca[50];
//     printf("Digite o nome do aluno: ");
//     scanf(" %[^\n]", nomeBusca);


//     Aluno aluno;
//     int encontrado = 0;
//     while (fscanf(fp, " %49s %d %d %f", aluno.nome, &aluno.matricula, &aluno.idade, &aluno.media) != EOF) {
//         if (strcmp(aluno.nome, nomeBusca) == 0) {
//             printf("Matrícula: %d, Idade: %d, Média: %.2f\n", aluno.matricula, aluno.idade, aluno.media);
//             encontrado = 1;
//             break;
//         }
//     }


//     if (!encontrado) {
//         printf("Aluno não encontrado.\n");
//     }
//     fclose(fp);
// }


// int main() {
//     buscarAluno("alunos.txt");
//     return 0;
// }


//17.


// typedef struct {
//     char nome[50];
//     char cidade[50];
//     int anoFundacao;
// } Colegio;


// void cadastrarColegios(const char *arquivo) {
//     FILE *fp = fopen(arquivo, "a");
//     if (fp == NULL) {
//         printf("Erro ao abrir o arquivo.\n");
//         return;
//     }


//     Colegio colegio;
//     char continuar = 's';


//     while (continuar == 's') {
//         printf("Nome: ");
//         scanf(" %[^\n]", colegio.nome);
//         printf("Cidade: ");
//         scanf(" %[^\n]", colegio.cidade);
//         printf("Ano de Fundação: ");
//         scanf("%d", &colegio.anoFundacao);


//         fprintf(fp, "%s %s %d\n", colegio.nome, colegio.cidade, colegio.anoFundacao);
//         printf("Deseja continuar? (s/n): ");
//         scanf(" %c", &continuar);
//     }


//     fclose(fp);
// }


// int main() {
//     cadastrarColegios("ensino.txt");
//     return 0;
// }


//18.


// typedef struct {
//     char nome[50];
//     char sexo[10];
//     int idade;
// } Pessoa;


// void cadastrarPessoas(const char *arquivo) {
//     FILE *fp = fopen(arquivo, "a");
//     if (fp == NULL) {
//         printf("Erro ao abrir o arquivo.\n");
//         return;
//     }


//     Pessoa pessoa;
//     char continuar = 's';
//     int maiorIdade = 0, somaIdades = 0, total = 0;


//     while (continuar == 's') {
//         printf("Nome: ");
//         scanf(" %[^\n]", pessoa.nome);
//         printf("Sexo: ");
//         scanf(" %[^\n]", pessoa.sexo);
//         printf("Idade: ");
//         scanf("%d", &pessoa.idade);


//         if (pessoa.idade > maiorIdade)
//             maiorIdade = pessoa.idade;


//         somaIdades += pessoa.idade;
//         total++;


//         fprintf(fp, "%s %s %d\n", pessoa.nome, pessoa.sexo, pessoa.idade);
//         printf("Deseja continuar? (s/n): ");
//         scanf(" %c", &continuar);
//     }


//     fclose(fp);


//     printf("Idade da pessoa mais velha: %d\n", maiorIdade);
//     printf("Média de idades: %.2f\n", total ? (float)somaIdades / total : 0);
// }


// int main() {
//     cadastrarPessoas("pesoas.txt");
//     return 0;
// }


//19.


// void contarLetraA(const char *arquivo) {
//     FILE *fp = fopen(arquivo, "r");
//     if (fp == NULL) {
//         printf("Erro ao abrir o arquivo.\n");
//         return;
//     }


//     char c;
//     int contador = 0;
//     while ((c = fgetc(fp)) != EOF) {
//         if (c == 'a' || c == 'A')
//             contador++;
//     }
//     fclose(fp);


//     printf("Número de ocorrências da letra 'a': %d\n", contador);
// }


// int main() {
//     contarLetraA("texto.txt");
//     return 0;
// }


//20.


// void contarPalavraDe(const char *arquivo) {
//     FILE *fp = fopen(arquivo, "r");
//     if (fp == NULL) {
//         printf("Erro ao abrir o arquivo.\n");
//         return;
//     }


//     char palavra[50];
//     int contador = 0;
//     while (fscanf(fp, "%49s", palavra) != EOF) {
//         if (strcmp(palavra, "de") == 0)
//             contador++;
//     }
//     fclose(fp);


//     printf("Número de ocorrências da palavra 'de': %d\n", contador);
// }


// int main() {
//     contarPalavraDe("texto.txt");
//     return 0;
// }


//21.


// void buscarPalavra(const char *arquivo) {
//     FILE *fp = fopen(arquivo, "r");
//     if (fp == NULL) {
//         printf("Erro ao abrir o arquivo.\n");
//         return;
//     }


//     char palavra[50], busca[50];
//     int contador = 0;
//     printf("Digite a palavra para buscar: ");
//     scanf(" %49s", busca);


//     while (fscanf(fp, "%49s", palavra) != EOF) {
//         if (strcmp(palavra, busca) == 0)
//             contador++;
//     }
//     fclose(fp);


//     if (contador > 0)
//         printf("A palavra '%s' foi encontrada %d vezes.\n", busca, contador);
//     else
//         printf("A palavra '%s' não foi encontrada.\n", busca);
// }


// int main() {
//     buscarPalavra("texto.txt");
//     return 0;
// }


//22.


// void collatz(int n) {
//     printf("%d ", n);
//     if (n == 1)
//         return;
//     if (n % 2 == 0)
//         collatz(n / 2);
//     else
//         collatz(3 * n + 1);
// }


// int main() {
//     int n;
//     printf("Digite um número positivo: ");
//     scanf("%d", &n);
//     if (n > 0)
//         collatz(n);
//     else
//         printf("Número inválido.\n");
//     return 0;
// }


//23.


// void inverterPalavra(char *str, int inicio, int fim) {
//     if (inicio >= fim)
//         return;
//     char temp = str[inicio];
//     str[inicio] = str[fim];
//     str[fim] = temp;
//     inverterPalavra(str, inicio + 1, fim - 1);
// }


// int main() {
//     char palavra[50];
//     printf("Digite uma palavra: ");
//     scanf(" %49s", palavra);
//     inverterPalavra(palavra, 0, strlen(palavra) - 1);
//     printf("Palavra invertida: %s\n", palavra);
//     return 0;
// }


//24.




// int contarVogais(const char *str, int pos) {
//     if (str[pos] == '\0')
//         return 0;


//     char c = tolower(str[pos]);
//     if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
//         return 1 + contarVogais(str, pos + 1);
//     return contarVogais(str, pos + 1);
// }


// int main() {
//     char string[100];
//     printf("Digite uma string: ");
//     scanf(" %[^\n]", string);
//     int total = contarVogais(string, 0);
//     printf("Número de vogais: %d\n", total);
//     return 0;
// }


//25.


int somaPares(int n) {
    if (n <= 0)
        return 0;
    if (n % 2 == 0)
        return n + somaPares(n - 2);
    return somaPares(n - 1);
}


int main() {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    printf("Soma dos números pares de 1 a %d: %d\n", n, somaPares(n));
    return 0;
}

