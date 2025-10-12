#include <stdio.h>

int main(){
    int idade;
    int quantidade = 1;
    float altura;
    float peso;
    char letra = 'A';
    char nome[60];

    /*
    %d inteiro (int) scanf("%d", &idade);
    %f float (float) scanf("%f", &altura);
    %c caractere (char)	scanf(" %c", &letra);
    %s string (char[]);
    */

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Sua idade: \n");
    scanf("%d", &idade);
    
    printf("Sua altura: \n");
    scanf("%f", &altura);
    
    printf("Seu peso: \n");
    scanf("%f", &peso);

    printf("Nome do aluno: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Peso: %.2f\n", peso);
    printf("\n");

}