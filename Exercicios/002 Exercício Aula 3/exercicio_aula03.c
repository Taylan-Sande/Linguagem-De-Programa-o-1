#include <stdio.h>

int main()
{
// Tipos de dados primitivos
/*
int: Guarda um número inteiro
float: Guarda um número real com certa precisão
double: Guarda um número real com precisão maior que float
void: Tipo vazio
char: Guarda um caractere
*/
    int var5 = 10;
    float var6 = 10.4;
    double var7 = 10.4354;
    char var8 = 'a';
   
   
    printf("Quantidade de bytes inteiro: %li\n", sizeof(var5));
    printf("Quantidade de bytes float: %li\n", sizeof(var6));
    printf("Quantidade de bytes double: %li\n", sizeof(var7));
    printf("Quantidade de bytes char: %li\n", sizeof(var8));
   
    int var1 = 4, var2 = 5, var3 = 18, var4 = 12;
    float resp = 0;

    resp = var1 + var2;
    printf("Resultado soma: %f\n", resp);

    resp = var3 - var4;
    printf("Resultado subtração: %f\n", resp);

    resp = var3 / var4;
    printf("Resultado divisão: %f\n", resp);

    resp = var1 * var4;
    printf("Resultado multiplicação: %f\n", resp);

    resp = var1 % var4;
    printf("Resultado módulo: %f\n", resp);

    return 0;
}