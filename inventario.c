#include <stdio.h>

int main(){
    
    char produtoA[30] = "Caneca";
    char produtoB[30] = "Camiseta";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 30.5;
    float valorB = 10.99;

    unsigned int estminA = 500;
    unsigned int estminB = 2500;

    double vlrtotA = estoqueA * valorA;
    double vlrtotB = estoqueB * valorB;

    int resultadoA, resultadoB;

    //Trazendo as informações
    printf("%s tem estoque de %u unidades e valor unitário de R$%.2f\n", produtoA, estoqueA, valorA);
    printf("%s tem estoque de %u unidades e valor unitário de R$%.2f\n", produtoB, estoqueB, valorB);

    //Comparação com minimo de estoque
    resultadoA = estoqueA >= estminA;
    resultadoB = estoqueB >= estminB;
    printf("O produto %s tem estoque mínimo %d:\n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo %d:\n", produtoB, resultadoB);

    //Comparação de valores totais entre produtos em estoque
    printf("O valor total de %s (R$%.2lf) é maior que o valor total de %s (R$%.2lf)?: %d\n", produtoA, vlrtotA, produtoB, vlrtotB,
                                                                                             vlrtotA > vlrtotB
          );

    printf("\n");

}