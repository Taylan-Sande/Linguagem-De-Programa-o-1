# include <stdio.h>
# include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int tamanho = 0, linhas = 0, colunas = 0, numero, tamNumeroAleatorio = 100, indice = 0;
    clock_t tempoInicial, tempoFinal;
    double tempo;

    tempoInicial = clock();

    linhas = 10;
    colunas = 10;
    
    tamanho = linhas*colunas;
    
    int vetor[tamanho];
    int vetorArrumado[tamanho];
    printf("Vetor Aleatório:\n");
    for (int i = 0; i < tamanho; i++){
        numero = rand() % tamNumeroAleatorio;
        vetor[i] = numero;
        if (i != 0 && i %colunas == 0){
            printf("\n%d ", vetor[i]);
        }
        else{
            printf("%i ", vetor[i]);
        }
    }
    printf("\n\nVetor Arrumado:\n");
    for (int z =0; z < tamanho; z++){    
        numero = tamNumeroAleatorio + 1;
        for (int i = 0; i < tamanho; i++){
            if (numero > vetor[i] && vetor[i] >= 0){
                vetorArrumado[z] = vetor[i];
                numero = vetorArrumado[z];
                
                indice = i;
            }
        }
        vetor[indice] *= -1;
        vetor[indice] -= 1;
        if (z != 0 && z %colunas == 0){
            printf("\n%d ", vetorArrumado[z]);
        }
        else{
            printf("%i ", vetorArrumado[z]);
        }
    }

    tempoFinal = clock();
    tempo = ((double) (tempoFinal - tempoInicial)) / CLOCKS_PER_SEC;
    printf("Tempo de execução foi %lf", tempo);
    return 0;
}