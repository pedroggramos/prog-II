
#include <stdio.h>

void obterMaiorMenor(float numeros[], float *maior, float *menor);
void obterMedia(float numeros[], float *media);

int main()
{
    float numeros[4];
    float maior = 0;
    float menor = 0;
    float media = 0;
    
    for(int i = 0; i < 4; i++){
        printf("Digite um número: ");
        scanf("%f", &numeros[i]);
    }
    
    obterMaiorMenor(numeros, &maior, &menor);
    obterMedia(numeros, &media);

    printf("\nMaior: %.2f", maior);
    printf("\nMenor: %.2f", menor);
    printf("\nMédia: %.2f", media);
    
    return 0;
}

void obterMaiorMenor(float numeros[], float *maior, float *menor){
    
    for(int i = 0; i < 4; i++){
        if(*(numeros + i) > *maior){
            *maior = *(numeros + i);
        }
        
        if(*(numeros + i) < *menor || i == 0){
            *menor = *(numeros + i);
        }
    }
}

void obterMedia(float numeros[], float *media){
    float soma = 0;
    
    for(int i = 0; i < 4; i++){
        soma = soma + *(numeros + i);
    }
    *media = soma / 4;
}


