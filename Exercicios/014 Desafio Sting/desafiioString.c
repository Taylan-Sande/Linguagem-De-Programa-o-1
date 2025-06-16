#include <stdio.h>

int main() {
    char str[1000];
    int i, tamanho = 0;

    printf("Digite uma string: ");
    gets(str);

    while (str[tamanho] != '\0') {
        tamanho++;
    }

    printf("\nString completa: %s\n", str);

    printf("Palavras:\n");
    for (i = 0; i <= tamanho; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            printf("\n");
        } else {
            printf("%c", str[i]);
        }
    }

    printf("\nString invertida: ");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n\nCaracteres individuais:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
