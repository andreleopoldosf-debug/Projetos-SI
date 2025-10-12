#include <stdio.h>
//Teste commit github
int main(){
    //Carta 1
    char Estado[4];
    char Codigo[5];
    char Cidade[20];
    int Populacao;
    float Area;
    float PIB;
    int PTuristicos;
    
    //Carta 2
    char Estado2[4];
    char Codigo2[5];
    char Cidade2[20];
    int Populacao2;
    float Area2;
    float PIB2;
    int PTuristicos2;

    //Dados Carta 1
    printf("Digite as informações da primeira carta\n");

    printf("Digite o Estado:");
    scanf("%s", Estado);

    printf("Digite o Código:");
    scanf("%s", Codigo);

    printf("Digite a Cidade:");
    scanf("%s", Cidade);

    printf("Digite a população da cidade:");
    scanf("%i", &Populacao);

    printf("Digite a Área:");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade:");
    scanf("%f", &PIB);

    printf("Digite a quantidade de Pontos Turísticos:");
    scanf("%i", &PTuristicos);

    printf("\n");

    //Dados Carta 2
    printf("Digite as informações da segunda carta\n");

    printf("Digite o Estado:");
    scanf("%s", Estado2);

    printf("Digite o Código:");
    scanf("%s", Codigo2);

    printf("Digite a Cidade:");
    scanf("%s", Cidade2);

    printf("Digite a população da cidade:");
    scanf("%i", &Populacao2);

    printf("Digite a Área:");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade:");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de Pontos Turísticos:");
    scanf("%i", &PTuristicos2);

    printf("\n");

    //Trazendo as Informações 1
    printf("Dados da Carta 1:\n");

    printf("Estado: %s\n", Estado);

    printf("Código: %s\n", Codigo);

    printf("Nome da Cidade: %s\n", Cidade);

    printf("População: %i\n", Populacao);

    printf("Área: %.2f km²\n", Area);

    printf("PIB: %.2f bilhões R$\n", PIB);

    printf("Número de Pontos Turísticos: %i\n", PTuristicos);
    
    printf("\n");

    //Trazendo as Informações 2
    printf("Dados da Carta 2\n");

    printf("Estado: %s\n", Estado2);

    printf("Código: %s\n", Codigo2);

    printf("Nome da Cidade: %s\n", Cidade2);

    printf("População: %i\n", Populacao2);

    printf("Área: %.2f km²\n", Area2);

    printf("PIB: %.2f bilhões R$\n", PIB2);

    printf("Número de Pontos Turísticos: %i\n", PTuristicos2);

    printf("\n");


}
