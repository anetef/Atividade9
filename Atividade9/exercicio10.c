#include <stdio.h>

main(){

    int valores[15], soma = 0, somaEspecifica;

    for(int i = 0; i < 5; i++){
        printf("Digite o valor: ");
        scanf("%d", &valores[i]);
    }

    for(int i = 0; i < 15; i++){
        soma += valores[i];
        printf("\n Valor em valores[%d] = %d",i , valores[i]);
        printf("\n Soma :%d", soma);
    }

    somaEspecifica = valores[0] + valores[1] + valores[2] + valores[3] + valores[4];

    printf("Media_geral: %d",somaEspecifica);



}