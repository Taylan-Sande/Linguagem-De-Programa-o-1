#include <stdio.h>

int main(){
    char numeros[] = {'5', '1', '4', '2', '8'};
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