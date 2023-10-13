#include<stdio.h>


main(){

    int vetor[5], maior, menor, soma = 0, media;

    for(int i = 0; i < 5; i++){
        printf("Inserir os valores");
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    media = soma/5;

    maior = vetor[0];
    menor = vetor[0];

    for(int i = 0; i < 5; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }

    printf("Media: %d. \n Maior: %d. \n Menor: %d", media, maior, menor);


}