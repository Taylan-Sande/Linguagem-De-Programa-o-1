#include <stdio.h>
#include <time.h>

int main() {
    clock_t t_inicio, t_fim;
    double tempo_a, tempo_b;

    int lin = 1000, col = 700, total1 = 0, total2 = 0;
    
    // Matriz 1: 1000x700
    t_inicio = clock();
    
    int vetor1[1000][700];

    for (int l = 0; l < lin; l++) {
        for (int c = 0; c < col; c++) {
            vetor1[l][c] = c * l;
        }
    }

    for (int l = 0; l < lin; l++) {
        for (int c = 0; c < col; c++) {
            printf("%d ", vetor1[l][c]);
        }
    }

    t_fim = clock();
    tempo_a = (double)(t_fim - t_inicio) / CLOCKS_PER_SEC;

    for (int l = 0; l < lin; l++) {
        for (int c = 0; c < col; c++) {
            total1 += vetor1[l][c];
        }}
        

    // Matriz 2: 700x1000
    lin = 700;
    col = 1000;

    t_inicio = clock();

    int vetor2[700][1000];

    for (int l = 0; l < lin; l++) {
        for (int c = 0; c < col; c++) {
            vetor2[l][c] = l * c;
        }
    }

    for (int l = 0; l < lin; l++) {
        for (int c = 0; c < col; c++) {
            printf("%d ", vetor2[l][c]);
        }
    }

    t_fim = clock();
    tempo_b = (double)(t_fim - t_inicio) / CLOCKS_PER_SEC;

    for (int l = 0; l < lin; l++) {
        for (int c = 0; c < col; c++) {
            total2 += vetor2[l][c];
        }}

    printf("\nTotal somado da matriz 1: %d\n", total1);
    printf("\nTotal somado da matriz 2: %d\n", total2);
    printf("Tempo de preenchimento 1: %.6f segundos\n", tempo_a);
    printf("Tempo de preenchimento 2: %.6f segundos\n", tempo_b);
    printf("Diferença de tempo: %.6f segundos\n", tempo_a - tempo_b);

    return 0;
}
