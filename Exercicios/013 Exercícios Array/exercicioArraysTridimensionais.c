# include <stdio.h>

int main(){
    int tamanho = 0, linhas = 0, colunas = 0, arrays = 0, numero = 0;

    printf("Quantas arrays?");
    scanf("%d", &arrays);

    printf("Quantas linhas?");
    scanf("%d", &linhas);

    printf("Quantas colunas?");
    scanf("%d", &colunas);

    tamanho = linhas*colunas;
    
    int vetor[tamanho];
    for (int z = 0; z < arrays; z++){
        for (int i = 0; i < tamanho; i++){
            vetor[i] = numero;
            numero++;
            if (i != 0 && i %colunas == 0){
                printf("\n%d ", vetor[i]);
            }
            else{
                printf("%i ", vetor[i]);
            }
        }
        printf("\n\n");
    }


    return 0;
}