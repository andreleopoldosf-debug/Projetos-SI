#include <stdio.h>

int main(){

    int idade;

    printf("Digite sua idade:");
    scanf("%i", &idade);

    //Abaixo, duas formas de validar a classificação etária, de acordo com a idade informada
/*    //Validando por faixas (da maenor para a maior)
    if(idade < 12){
        printf("Você é uma criança\n");
    } else if(idade >= 12 && idade < 18){
        printf("Você é um adolescente\n");
    } else if(idade >= 18 && idade < 60){
        printf("Você é um adulto\n");
    } else {
        printf("Você é um idoso\n");
    }
*/
    //Validando por eliminatória (tem que ser da mais alta para a mais baixa)
    if(idade >= 60){
        printf("Você é um idoso\n");
    } else if(idade >= 18){
        printf("Você é um adulto\n");
    } else if(idade >= 12){
        printf("Você é um adolescente\n");
    } else {
        printf("Você é uma criança\n");
    }





}