#include <stdio.h>

int main(){
    double gasolina = 0, consumoG = 0, etanol = 0, consumoE = 0, gnv = 0, consumoGNV = 0, custoG = 0, custoE = 0, custoGNV = 0;
    int resposta = 0;

    printf("Digite o preço da gasolina:\n");
    scanf("%lf", &gasolina);
    printf("Digite qual consumo da gasolina por km \n");
    scanf("%lf", &consumoG);
    custoG = gasolina/consumoG;

    printf("Digite o preço do etanol: \n");
    scanf("%lf", &etanol);
    printf("Digite qual consumo do etanol por km \n");
    scanf("%lf", &consumoE);
    custoE = etanol/consumoE;

    printf("Digite 0 se seu carro pode abastecer com GNV, ou 1 se não pode\n");
    scanf("%i", &resposta);

    if (resposta == 0){
        printf("Digite o preço do GNV: \n");
        scanf("%lf", &gnv);
        printf("Digite qual consumo do GNV por km \n");
        scanf("%lf", &consumoGNV);
        custoGNV = gnv/consumoGNV;
    }
    else{
        custoGNV = custoG + custoE;
    }
    if (custoG < custoE && custoG < custoGNV){
        printf("Abasteça com gasolina\n");
    }
    else if( custoE < custoG && custoE < custoGNV){
        printf("Abasteça com etanol\n");
    }
    else{
        printf("Abasteça com GNV\n");
    }
    return 0;
}