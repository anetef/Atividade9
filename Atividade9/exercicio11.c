#include<stdio.h>

main(){

    float valores[10], sompositivos = 0, qtdNegativos = 0;

    for(int i = 0; i < 10; i++){
        printf("Informe as notas");
        scanf("%f", &valores[i]);
    }
    for(int i = 0; i < 10; i++){
        if(valores[i] > 0){
            sompositivos += valores[i];
        }else{
            qtdNegativos++;
        }
    }
    printf("Soma dos positivos: %f . \nQuatidade negativos: %f", sompositivos, qtdNegativos);
}