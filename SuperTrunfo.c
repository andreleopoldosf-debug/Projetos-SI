#include <stdio.h>
//Teste commit github
int main(){
    //Carta 1
    char Estado[4];
    char Codigo[5];
    char Cidade[20];
    unsigned long int Populacao;
    float Area;
    float PIB;
    int PTuristicos;
    float Densidade;
    double PIBper;
    double SuperPoder;
    
    //Carta 2
    char Estado2[4];
    char Codigo2[5];
    char Cidade2[20];
    unsigned long int Populacao2;
    float Area2;
    float PIB2;
    int PTuristicos2;
    float Densidade2;
    double PIBper2;
    double SuperPoder2;

    //Dados Carta 1
    printf("Digite as informações da primeira carta\n");

    printf("Digite o Estado:");
    scanf("%s", Estado);

    printf("Digite o Código:");
    scanf("%s", Codigo);

    printf("Digite a Cidade:");
    scanf("%s", Cidade);

    printf("Digite a população da cidade:");
    scanf("%lu", &Populacao);

    printf("Digite a Área:");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade (em bilhões de R$):");
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
    scanf("%lu", &Populacao2);

    printf("Digite a Área:");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade (em bilhões de R$):");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de Pontos Turísticos:");
    scanf("%i", &PTuristicos2);

    printf("\n");

    //Trazendo as Informações 1
    printf("Dados da Carta 1:\n");

    printf("Estado: %s\n", Estado);

    printf("Código: %s\n", Codigo);

    printf("Nome da Cidade: %s\n", Cidade);

    printf("População: %lu hab\n", Populacao);

    printf("Área: %.2f km²\n", Area);

    printf("PIB: R$%.2f bilhões\n", PIB);

    printf("Número de Pontos Turísticos: %i\n", PTuristicos);

    Densidade = Populacao / Area;
    printf("Densidade populacional: %.2f hab/km²\n", Densidade);

    PIBper = (PIB * 1000000000) / Populacao;
    printf("PIB per Capta: R$%.2lf\n", PIBper);

    SuperPoder =  + Area + PIB + PTuristicos + PIBper + (1/Densidade);
    printf("Super Poder:%.2lf\n", SuperPoder);
    
    printf("\n");

    //Trazendo as Informações 2
    printf("Dados da Carta 2\n");

    printf("Estado: %s\n", Estado2);

    printf("Código: %s\n", Codigo2);

    printf("Nome da Cidade: %s\n", Cidade2);

    printf("População: %lu hab\n", Populacao2);

    printf("Área: %.2f km²\n", Area2);

    printf("PIB: R$%.2f bilhões\n", PIB2);

    printf("Número de Pontos Turísticos: %i\n", PTuristicos2);

    Densidade2 = Populacao2 / Area2;
    printf("Densidade populacional: %.2f hab/km²\n", Densidade2);

    PIBper2 = (PIB2 * 1000000000) / Populacao2;
    printf("PIB per Capta: R$%.2lf\n", PIBper2);

    SuperPoder2 =  + Area2 + PIB2 + PTuristicos2 + PIBper2 + (1/Densidade2);
    printf("Super Poder:%.2lf\n", SuperPoder2);
    printf("\n");

    printf(">>> Comparações entre as cartas\n");
    printf(">>>> Se 1, significa que a carta 1 venceu, se 0 significa que a carta 2 venceu");
    printf("População: %d\n", Populacao > Populacao2);
    printf("Área: %d\n", Area > Area2);
    printf("PIB: %d\n", PIB > PIB2);
    printf("Pontos Turísticos: %d\n", PTuristicos > PTuristicos2);
    printf("Densidade: %d\n", Densidade < Densidade2); // menor vence
    printf("PIB per Capita: %d\n", PIBper > PIBper2);
    printf("Super Poder: %d\n", SuperPoder > SuperPoder2);

    printf("\n");


}
