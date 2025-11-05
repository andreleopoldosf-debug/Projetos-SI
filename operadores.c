#include <stdio.h>

int main(){

    int a = 10;
    int b = 20;
    float n1 = 10.5;
    int n2 = 10;
    char c = 'a';
    int n3 = 1;

    printf("10 > 20: %d\n", a > b); //maior que
    printf("10 < 20: %d\n", a < b); //menor que
    printf("10 >= 20: %d\n", a >= b); //maior ou igual
    printf("10 <= 20: %d\n", a <= b); //menor ou igual
    printf("10 == 20: %d\n", a == b); //igual
    printf("10 != 20: %d\n", a != b); //diferente
    printf("\n");
    printf("10.5 > 10: %d\n", n1 > n2);
    printf("10.5 == 10: %d\n", n1 == n2);
    printf("\n");
    printf("10.5 > 10: %d\n", (int)n1 > n2);
    printf("10.5 == 10: %d\n", (int)n1 == n2);
    printf("\n");
    printf("O valor ASCII de %c é: %d\n", c, c); //valor da letra a na tabela ASCII
    printf("n3 = %d\n", n3);
    printf("n3 >= a: %d\n", n3 >= c);
    printf("\n");

}