#include <stdio.h>

int main()
{
// Tipos de dados primitivos
/*
int: Guarda um número inteiro
float: Guarda um número real com certa precisão
double: Guarda um número real com precisão maior que float
char: Guarda um caractere
*/
    int Int = 10;
    long int LongInt = 10;
    long long int LongLongInt = 10;
    short int ShortInt = 10;

    float Float = 10.4;

    double Double = 10.4354;
    long double LongDouble = 10.4354;

    char Char = 'a';
   
   
    printf("Quantidade de bytes int: %i\n", sizeof(Int));
    printf("Quantidade de bytes long int: %i\n", sizeof(LongInt));
    printf("Quantidade de bytes long long int: %i\n", sizeof(LongLongInt));
    printf("Quantidade de bytes short int: %i\n\n", sizeof(ShortInt));

    printf("Quantidade de bytes float: %i\n\n", sizeof(Float));

    printf("Quantidade de bytes double: %i\n", sizeof(Double));
    printf("Quantidade de bytes long double: %i\n\n", sizeof(LongDouble));

    printf("Quantidade de bytes char: %i\n", sizeof(Char));
   
    return 0;
}