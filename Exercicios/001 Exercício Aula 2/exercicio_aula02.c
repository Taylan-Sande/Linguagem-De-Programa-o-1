# include <stdio.h>

int main(){
    // Os operadores aritméticos elementares
    // Soma
    printf("Soma: %i\n", 4 + 4);
    // Subtração
    printf("Subtração: %i\n", 3 - 2);
    // Multiplicação
    printf("Multiplicação: %i\n", 3 * 2);
    // Divisão
    printf("Divisão: %i\n", 3 / 2);
    // Módulo
    printf("Módulo: %i\n", 3 % 2);

    // As ordens de precedências dos operadores aritméticos elementares:

    // Sem a ultilização dos parênteses:
    // Multiplicação, módulo e divisão, tem a mesma precedência. São avaliados da esquerda para direita, antes de serem avaliados subtração e adição.
    printf("Módulo sendo avaliado primeiro: %i\n", 20 % 3 * 14 / 2 + 4);
    printf("Multiplicação sendo avaliado primeiro: %i\n",4 + 3 * 14 % 20 / 2);
    printf("Divisão sendo avaliado primeiro: %i\n", 20 / 2 * 14 % 3 + 4);

    // Soma e subtração tem a mesma ordem de precedência. São avaliados da esquerda para direita.
    printf("Adição sendo avaliado primeiro que a subtração: %i\n", 4 - 3 * 4 + 2);
    printf("Subtração sendo avaliado primeiro que a adição: %i\n", 4 + 3 * 4 - 2);


    // Com a utilização de parênteses:
    // O parenteses sempre tem a maior precedencia.
    printf("Multiplicação sendo avaliado primeiro: %i\n", 20 % 3 * (14 / 2) + 4);
    printf("Módulo sendo avaliado primeiro: %i\n",4 + 3 * (14 % 20) / 2);
    printf("Divisão sendo avaliado primeiro: %i\n", (20 / 2) * (14 % 3) + 4);
    printf("Adição sendo avaliado primeiro: %i\n", 20 % 3 * 14 / (2 + 4));
    printf("Subtração sendo avaliado primeiro: %i\n", 20 % 3 * 14 / (2 - 4));

    return 0;
}