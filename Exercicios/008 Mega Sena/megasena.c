#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    // criando um vetor de tamanho 3
    int sorteado[6], tentativa[6];
    int r = 0, contagem = 0, contagem_acertos = 0;
    bool parada = true;

    // recebendo números sorteados
    for (int i = 0; i < 6; i++){
        printf("Digite um número sorteado (1 a 60): ");
        scanf("%d", &sorteado[i]);
    }

    printf("Números sorteados: \n");

    // aprensentando sorteados
    for (int i = 0; i < 6; i++){
        printf("%d  ", sorteado[i]);
    }
    while (true){
        // conta cada vez que uma sena é sorteada, ou seja, núemro de tentativas
        contagem++;
        // gera os 6 números sorteados diferentes
        for (int i = 0; i < 6; i++){
            parada = true;
            // vai gerar um número até que não seja repetido
            while (parada){
                // numero aleatório de 1 a 60; 60 + 1 inclui um número em cada parte no intervalo, passa de (0,59), para (1,60)
                r = rand() % 60 + 1;

                parada = false;

                // esse for avalia se o número sorteado já havia sido sorteado antes
                for (int j = 0; j < i; j++){

                    // enquanto itera todos os elementos do vetor, ele compara um a um, com r, caso tenha sido sorteado ele quebra o for, e sorteia outro número
                    if (tentativa[j] == r){

                        // parada continua true, para que o while itere mais uma vez, porque r já foi sorteado
                        parada = true;
                        break;
                    
                    }
                }


            }
            // cada vez que o while encerra o valor de r sorteado vai para o vetor, na posição i, gerando uma lista de valores sorteados
            tentativa[i] = r;
            
        
        }
        contagem_acertos = 0;
        // o i vai ajudar a iterar sobre vetor que recebeu os inputs, NUMEROS A SEREM SORTEADOS
        for (int i = 0; i < 6; i++) {
            // o j vai iterar sobre vetor dos SORTEADOS
            for (int j = 0; j < 6; j++){
                //compara cada numero, a cada núemro sorteado
                if (sorteado[i] == tentativa[j]){
                    // conta os acertos, ou seja, se há algum número nos sorteados, que corressponda ao numero da sena que está sendo analisado
                    contagem_acertos++;
                }
            }
        }
        // quer dizer que todos os 6 foram sorteados, e encerra o while principal
        if (contagem_acertos == 6){
            printf("\nVocê foi sorteado, depois de %d tentativas\n", contagem);
            break;
        }
        
    }
        // apresenta números sorteados
        for (int i = 0; i < 6; i++){
        printf("%d  ", tentativa[i]);}
        return 0;
    }