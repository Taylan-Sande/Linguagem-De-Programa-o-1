#include <stdio.h>
#include <string.h>
#define N 6
int main(){
    char numeros[N]="51428";
    char reserva = ' ';

    for(int z = 0; z < 5; z++){
        printf("%c ", numeros[z]);}
    printf("\n");

    for(int j = 0; j < 4; j++)
    {for(int i=0; i < 4 - j; i++){
        if (numeros[i] > numeros[i+1]){
            reserva = numeros[i+1];
            numeros[i+1] = numeros[i];
            numeros[i] = reserva;
            printf("swap\n");
        }
        else
            printf("no swap\n");
        printf("Números:\n");

        for(int z = 0; z < 5; z++){
            printf("%c ", numeros[z]);
        }
        printf("\n");}
    }


    return 0;
}