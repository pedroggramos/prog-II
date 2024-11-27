#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 1)

// struct Aluno{
//     char nome[50];
//     float notas[3];
//     float media;
// };

// void media(struct Aluno aluno[], int qtd){

//     for(int i = 0; i < qtd;i++){
//         float soma = 0;
    
//         for(int j = 0; j < 3;j++){
//             soma = soma + aluno[i].notas[j];
//         }
//         aluno[i].media = soma / 3;
//         printf("Média %s: %.2f\n",aluno[i].nome, aluno[i].media);
//     }
// }

// int main(){

//     int qtd;

//     printf("Digite a qtd de Alunos: ");
//     scanf("%d", &qtd);

//     getchar();

//     struct Aluno *aluno = (struct Aluno*) malloc(qtd * sizeof(struct Aluno));

//     for(int i = 0; i < qtd; i++){
//         printf("Digite o %d° nome: ", i + 1);
//         fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
//         aluno[i].nome[strcspn(aluno[i].nome, "\n")] = '\0';
        
//         while (getchar() != '\n');

//         for(int j = 0; j < 3; j++){
//             printf("Digite a %d° nota do aluno %d: ", j + 1, i +  1);
//             scanf("%f", &aluno[i].notas[j]);
//         }
        
//         getchar();
        
//     }

//     media(aluno, qtd);

//     free(aluno);

    

//     return 0;
// }


// 

// 2)

struct Tempo{
    int minutos;
    int horas;
};

void converter(struct Tempo tmp, int totalminutos){
    
    tmp.horas = totalminutos / 60;
    tmp.minutos = totalminutos % 60;

    printf("%d é o mesmo que %d horas e %d minutos", totalminutos, tmp.horas, tmp.minutos);

}

int main(){
    struct Tempo t;
    int minutosT;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutosT);

    converter(t, minutosT);

    return 0;
}
