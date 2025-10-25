#include <stdio.h>

int main(){

    int idade;
    float renda;

    printf("Digite sua idade:");
    scanf("%i", &idade);
    printf("Digite sua renda mensal:");
    scanf("%f", &renda);
// Desconto será concedido caso a idade seja menor que 18 ou maior que 60 e a renda mensal seja inferios a 2000,00
/*
    if(idade < 18 || idade > 60){
        if(renda < 2000){
            printf("Você atende aos critérios!\n");
        } else{
                printf("Você não atende aos critérios devido à renda!\n");
            }
    } else {printf("Você não atende com relação à idade\n");
           }
*/           
// Desconto será concedido caso a idade seja menor que 18 ou maior que 60 e a renda mensal seja inferios a 2000,00
    if((idade < 18 || idade > 60) && renda < 2000){
        printf("Você atende aos critérios!\n");
    } else if((idade < 18 || idade > 60) && renda > 2000){
        printf("Você não atende aos critérios devido à sua renda!\n");
    } else if((idade >= 18 || idade <= 60) && renda < 2000){
        printf("Você não atende aos critérios devido à idade!\n");
    } else{
        printf("Você não atende à nenhum dos critérios!\n");
    }

} //RETOMAR PELA AULA USO DO SWITCH