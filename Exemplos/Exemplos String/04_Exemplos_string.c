#include <stdio.h>
#include <string.h>
#define N 25

int main(){
    char s1[N] = "Palavra", s2[N];
    
    strcpy(s2, s1);

    printf("String de origem:  %s\n", s1);
    printf("String de destino: %s\n", s2);

    strcpy(s1, "Palavra");
    strcpy(s2, " Anexo");

    strcat(s1,s2);
    printf("String de origem:  %s\n", s2);
    printf("String de anexada: %s\n", s1);

    strcpy(s1, "A");
    strcpy(s2, "Ba");

    int resultado = strcmp(s1,s2);

    printf("Comparacao 1: %d\n", resultado);

    strcpy(s1, "Ba");
    strcpy(s2, "A");

    resultado = strcmp(s1,s2);

    printf("Comparacao 2: %d\n", resultado);

    strcpy(s1, "Igual");
    strcpy(s2, "Igual");

    resultado = strcmp(s1,s2);

    printf("Comparacao 3: %d\n", resultado);

    strcpy(s1, "123");
    printf("Tamanho: %d", (int)strlen(s1));
    return 0;
}



