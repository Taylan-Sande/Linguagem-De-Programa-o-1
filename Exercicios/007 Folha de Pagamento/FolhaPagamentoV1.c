/*
Receber salário base
INSS --- Calcular
IRPF --- Calcular
Vale Alimentação --- Receber
Vale Transporte --- Calcular, se tiver
*/
#include <stdio.h>

int main(){
    double salariobase = 0, salarioliquido = 0, inss = 0, irpf = 0, va = 0, vt= 0, salarioanualirpf= 0, contribuicao_sindical = 0;
    int resposta = 0;

    printf("Digite seu salário: \n");
    scanf("%lf", &salariobase);

    contribuicao_sindical = salariobase /30;

    printf("Valor do seu Vale Alimentação:\n");
    scanf("%lf", &va);

    printf("Digite 0 se tiver Vale Transporte, ou 1 se não tiver\n");
    scanf("%i", &resposta);
    if (resposta == 0){
        vt = salariobase * 0.06;
    }
    else{
        vt = 0;
    }

    salarioliquido = salariobase;

    if(salarioliquido <= 1412){
        inss = salarioliquido * 0.075;
    }
    else if(salarioliquido <= 2666.68){
        inss = (1412 * 0.075) + ((salarioliquido - 1412)*0.09);
    }
    else if(salarioliquido <= 4000.03){
        inss = (1412 * 0.075) + ((2666.68 - 1412)*0.09) + ((salarioliquido - 2666.68)*0.12);
    }
    else if(salarioliquido <= 7786.82){
        inss = (1412 * 0.075) + ((2666.68 - 1412)*0.09) + ((4000.03 - 2666.68)*0.12) + ((salarioliquido - 4000.03)*0.14);
    }
    else{
        inss = 908.85;
    }

    salarioliquido -= inss;
    salarioanualirpf = salarioliquido * 12;

    if(salarioanualirpf <= 24511.92){
        irpf = 0;
    }
    else if(salarioanualirpf <= 33919.80){
        irpf = salarioanualirpf * 0.075 - 1838.39;
    }
    else if(salarioanualirpf <= 45012.60){
        irpf = salarioanualirpf * 0.15 - 4382.38;
    }
    else if(salarioanualirpf <= 55976.16){
        irpf = salarioanualirpf * 0.225 - 7758.32;
    }
    else{
        irpf = salarioanualirpf * 0.275 - 10557.13;
    }
    salarioliquido = salarioliquido - (irpf/12 + contribuicao_sindical + vt + va);

    printf("Salário Bruto: %.2lf\nSalário liquido: %.2lf\nINSS: %.2lf\nIRPF: %.2lf\nContribuição Sindical: %.2lf\nVale Alimentação: %.2lf\nVale Transporte: %.2f", salariobase, salarioliquido, inss, irpf, contribuicao_sindical, va, vt);
    return 0;
}