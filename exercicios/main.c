
#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    char nome[70];
    float notas[3];
};

typedef struct Aluno aluno;

void imprimirNomeMaiorNota(aluno *alunos, int qtdAlunos);

int main()
{
    int qtd;
    aluno *alunos;
    
    printf("Qual a qtd de alunos?");
    scanf("%d", &qtd);
    
    alunos = (aluno *) malloc(qtd * sizeof(aluno));
    getchar();
    for(int i = 0; i < qtd; i++){
        printf("Qual o nome do aluno? ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        for(int j = 0; j < 3; j++){
            printf("Digite uma nota: ");
            scanf("%f", &alunos[i].notas[j]);
        }
        getchar();
    }
    
    imprimirNomeMaiorNota(alunos, qtd);
   
    free(alunos);
    return 0;
}

void imprimirNomeMaiorNota(aluno *alunos, int qtdAlunos){
    
    float maiorNota = 0;
    int indexAluno = 0;
    
    for(int i = 0; i < qtdAlunos; i++){
        for(int j = 0; j < 3; j++){
            if(alunos[i].notas[j] > maiorNota){
                maiorNota = alunos[i].notas[j];
                indexAluno = i;
            }
        }
    }
    printf("Nome da maior nota: %s", alunos[indexAluno].nome);
    
}


