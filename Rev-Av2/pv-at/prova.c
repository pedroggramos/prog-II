#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// 1)
// int main(){

// FILE *file;
// char ch;

// file = fopen("example.txt", "r");


// while((ch = fgetc(file)) != EOF){
//     printf("%c", ch);
// }

// fclose(file);

// return 0;
// }

// 2

// struct prefeito{
//     char nome[50];
//     int idade;
//     char sexo;
// };

// typedef struct prefeito prefeito;

// struct cidade{
//     char nome[50];
//     int nHabitantes;
//     prefeito pref;
// };

// int main(){
//     struct cidade cid;

//     printf("Nome cidade: ");
//     fgets(cid.nome, sizeof(cid.nome), stdin);
//     cid.nome[strcspn(cid.nome, "\n")] = '\0';

//     printf("Numero de habitantes: ");
//     scanf("%d", &cid.nHabitantes);

//     printf("Nome: ");
//     scanf("%s", cid.pref.nome);

//     printf("Idade: ");
//     scanf("%d", &cid.pref.idade);

//     printf("Sexo: ");
//     scanf(" %c", &cid.pref.sexo);

//     printf("INFO\n");

//     printf("Cidade: %s\n", cid.nome);
//     printf("Habitantes: %d\n", cid.nHabitantes);
//     printf("Prefeito: %d\n", cid.pref.nome);
//     printf("Idade: %d\n", cid.pref.idade);
//     printf("Sexo: %c\n", cid.pref.sexo);

// return 0;
// }





// 3)
// struct funcionario{
//     char nome[50];
//     int anosEmpresa;
//     float salarios[12];
//     float bonusFinal;
// };

// typedef struct funcionario funcionario;

// void calcular(struct funcionario *func, int tam){

//     int soma = 0;
//     for(int i = 0; i < tam; i++){
//     for(int j = 0; j < 12; j++){
        
//          soma += func[i].salarios[j];
//     }

//     float mediaSalario = soma / 12.0;

//     if(func[i].anosEmpresa >= 10 && soma < 50000){
//         func[i].bonusFinal *= 0.20;
//     }

//     printf("Funcionario: %s\n", func[i].nome);
//     printf("Salario Médio: %.2f\n", mediaSalario);
//     printf("Bônus Final: %.2f\n\n", func[i].bonusFinal);

//     }  

// }



// int main(){
//     funcionario *func;
//     int tam;

//     printf("Digite o tamanho do vetor: ");
//     scanf("%d", &tam);
//     getchar();

//     func = (funcionario*) malloc(tam * sizeof(funcionario));

//     for(int i = 0; i < tam;i++){
//         printf("Digite as informações do funcionario %d\n\n", i + 1);

//         printf("Digite o nome: ");
//         fgets(func[i].nome, sizeof(func[i].nome), stdin);
//         func[i].nome[strcspn(func[i].nome, "\n")] = '\0';


//         printf("Quantos anos de empresa: ");
//         scanf("%d", &func[i].anosEmpresa);
//         getchar();

//      for(int j = 0; j < 12; j++){
//         printf("Salario %d: ", j + 1);
//         scanf("%f", &func[i].salarios[j]);
//     }
    
//     }

//     calcular(func, tam);

//     free(func);


//     return 0;


// }

// PROVA 2

// 1)

// struct diretor {
//     char nome[50];
//     char pais[20];
//     int idade;
// };

// typedef struct diretor diretor;

// struct Filme {
//     char nome[50];
//     int ano;
//     diretor dir;
// };

// typedef struct Filme Filme;

// int main() {
//     Filme filme;

//     printf("Digite o nome do filme: ");
//     fgets(filme.nome, sizeof(filme.nome), stdin);
//     filme.nome[strcspn(filme.nome, "\n")] = '\0';

//     printf("Digite o ano de lançamento do filme: ");
//     scanf("%d", &filme.ano);
//     getchar();

//     printf("Digite o nome do diretor: ");
//     fgets(filme.dir.nome, sizeof(filme.dir.nome), stdin);
//     filme.dir.nome[strcspn(filme.dir.nome, "\n")] = '\0';

//     printf("Digite o país de origem do diretor: ");
//     fgets(filme.dir.pais, sizeof(filme.dir.pais), stdin);
//     filme.dir.pais[strcspn(filme.dir.pais, "\n")] = '\0';

//     printf("Digite a idade do diretor: ");
//     scanf("%d", &filme.dir.idade);
//     getchar();

//     printf("\n--- Informações do Filme ---\n");
//     printf("Nome do filme: %s\n", filme.nome);
//     printf("Ano de lançamento: %d\n", filme.ano);
//     printf("Diretor: %s\n", filme.dir.nome);
//     printf("País do diretor: %s\n", filme.dir.pais);
//     printf("Idade do diretor: %d\n", filme.dir.idade);

//     return 0;
// }



// 3

// struct colaborador{
//     char nome[50];
//     char cargo[50];
//     float salario[6];
//     float bonus;
// };

// typedef struct colaborador colaborador;

// void calcular(struct colaborador *col){
//     int soma = 0;
//     for(int i = 0; i < 30; i++){
//         printf("Colaborador %d: %s\n", i + 1, col[i].nome);
//         printf("Cargo: %s\n",col[i].cargo);

//         for(int j = 0; j < 6; j++){
//             soma = soma + col[i].salario[j];
//         }

//         float media = soma / 6;
        
//     if(strcmp(col[i].cargo,"desenvolvedor") == 0){
//         col[i].bonus = media * 0.15;
//     }

//     else{
//         col[i].bonus = media;
//     }

//     printf("Bonus: %.2f", col[i].bonus);

//     }
// }


// int main(){

//     colaborador *col;

//     col = (colaborador*) malloc(30 * sizeof(colaborador));

//     for(int i = 0; i < 30;i++){
//         printf("nome: ");
//         fgets(col[i].nome, sizeof(col[i].nome), stdin);
//         col[i].nome[strcspn(col[i].nome, "\n")] = '\0';

//         printf("cargo: ");
//         fgets(col[i].cargo, sizeof(col[i].cargo), stdin);
//         col[i].cargo[strcspn(col[i].cargo, "\n")] = '\0';

//         for(int j = 0; j < 6; j++){
//             printf("Salario %d: ", i + 1);
//             scanf("%f",col[i].salario[j]);
//         }

//         getchar();

//     }

//     calcular(col);

//     free(col);

//     return 0;

// }














