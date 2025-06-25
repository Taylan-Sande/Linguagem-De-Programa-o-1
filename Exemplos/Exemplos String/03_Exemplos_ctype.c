#include <stdio.h>
#include <ctype.h>

int main(){

    char c = '0';

    if (isdigit(c)) {
        printf("Retorna verdadeiro (é um dígito)\n");
    } else {
        printf("Retorna falso (não é um dígito)\n");
    }

    c = 'a';
    if (isalpha(c)) {
        printf("Retorna verdadeiro (é uma letra)\n");
    } else {
        printf("Retorna falso (não é uma letra)\n");
    }

    if (isalnum(c)) {
        printf("Retorna verdadeiro (é uma letra, ou número)\n");
    } else {
        printf("Retorna falso (não é uma letra, nem um número)\n");
    }
    
    c = '\t';
    if (isspace(c)) {
        printf("Retorna verdadeiro (é um espaço em branco)\n");
    } else {
        printf("Retorna falso (não é um espaço em branco)\n");
    }

    c = 'i';
    if (islower(c)) {
        printf("Retorna verdadeiro (é uma letra minúscula)\n");
    } else {
        printf("Retorna falso (não é uma letra minúscula)\n");
    }

    c = 'I';
    if (isupper(c)) {
        printf("Retorna verdadeiro (é uma letra maiúscula)\n");
    } else {
        printf("Retorna falso (não é uma letra maiúscula)\n");
    }

    c = 'A';
    printf("Torna Letras Maiúsculas, minúsculas: %c\n", tolower(c));

    c = 'a';
    printf("Torna Letras Minúsculas, maiúsculas: %c\n", toupper(c));

    char str_numero_inteiro[] = "123";
    int numero_inteiro;

    numero_inteiro = atoi(str_numero_inteiro);
    printf("String \"%s\" convertida para inteiro: %d\n", str_numero_inteiro, numero_inteiro);

    char str_numero_decimal[] = "3.14";
    double numero_decimal;

    numero_decimal = atof(str_numero_decimal);
    printf("String \"%s\" convertida para float: %f\n", str_numero_decimal, numero_decimal);

    char str_invalida[] = "abc123";
    printf("String \"%s\" (inválida) convertida para inteiro: %d\n", str_invalida, atoi(str_invalida));
    printf("String \"%s\" (inválida) convertida para double: %f\n", str_invalida, atof(str_invalida));


    return 0;
}
