#include <stdio.h>

int main (){
    float numero1;
    float numero2;
    float soma,diferenca,produto,resultado;
    float divisao;
    
    printf("Digite o primeiro Número:");
    scanf("%f", &numero1);
    
    printf("Digite o segundo Número:");
    scanf("%f", &numero2);
/*
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    divisao = numero1 / numero2;
    multiplicacao = numero1 * numero2;
*/
    printf("\n");
    soma = numero1 + numero2;
    printf("A soma é: %.2f\n", soma);
    printf("\n");
    diferenca = numero1 - numero2;
    printf("A subtração é: %.2f\n", diferenca);
    printf("\n");
    divisao = numero1 / numero2;
    printf("A divisão é: %.2f\n", divisao);
    printf("\n");
    produto = numero1 * numero2;
    printf("A multiplicação é: %.2f\n", produto);
    printf("\n");
    //resultado = soma += 10;
    //printf("Resultado final: %d\n", resultado);
}