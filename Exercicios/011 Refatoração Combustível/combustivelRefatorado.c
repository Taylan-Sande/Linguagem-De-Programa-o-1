#include <stdio.h>

int Preco(){

    double gasolina = 0, etanol = 0, razao = 0;

    printf("Digite o preço da gasolina:\n");
    scanf("%lf", &gasolina);

    printf("Digite o preço do etanol: \n");
    scanf("%lf", &etanol);

    razao = etanol/gasolina;

    if(razao <= 0.7){
        return 2;
    }
    else{
        return 1;
    }

    return 0;
}

int combustivelConsumo(){
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
        return 1;
    }
    else if( custoE < custoG && custoE < custoGNV){
        return 2;
    }
    else{
        return 3;
    }
}

int main(){
    int resposta = 0, combustivel = 0;
    
    printf("Digite 1 para calcular em função do PREÇO, ou 2 para calcular em função do CONSUMO\n");
    scanf("%i", &resposta);
    if (resposta == 1){
        combustivel = Preco();
        if (combustivel == 1){
            printf("Abasteça com gasolina\n");
        }
        else{
            printf("Abasteça com etanol\n");
        }
    }
    if (resposta == 2){
        combustivel = combustivelConsumo();
        if (combustivel == 1){
            printf("Abasteça com gasolina\n");
        }
        else if(combustivel == 2){
            printf("Abasteça com etanol\n");
        }
        else{
            printf("Abasteça com GNV\n");
        }
    }
    return 0;
}