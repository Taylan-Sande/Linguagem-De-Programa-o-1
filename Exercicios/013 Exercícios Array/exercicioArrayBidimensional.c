# include <stdio.h>

int main(){
    int tamanho = 0, linhas = 0, colunas = 0;

    printf("Quantas linhas?");
    scanf("%d", &linhas);

    printf("Quantas colunas?");
    scanf("%d", &colunas);

    tamanho = linhas*colunas;
    
    int vetor[tamanho];
    
    for (int i = 0; i < tamanho; i++){
        vetor[i] = i;
        if (i != 0 && i %colunas == 0){
            printf("\n%d ", vetor[i]);
        }
        else{
            printf("%i ", vetor[i]);
        }
    }


    return 0;
}