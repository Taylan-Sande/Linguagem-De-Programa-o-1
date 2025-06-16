#include <stdio.h>

int main(){
    double gasolina =0, etanol = 0, razao = 0;

    printf("Digite o preço da gasolina:\n");
    scanf("%lf", &gasolina);

    printf("Digite o preço do etanol: \n");
    scanf("%lf", &etanol);

    razao = etanol/gasolina;

    if(razao <= 0.7){
        printf("Abasteça com etanol\n");
    }
    else{
        printf("Abasteça com gasolina\n");
    }

    return 0;
}