#include <stdio.h>

int main(){
    int bloco1 = 1, bloco2 = 1, bloco3 = 1;

    for (int i = 1; i < 8; i++) {

        if (i % 2 == 1){   

            if (bloco1 + 1 == 2){
                printf("Bloco 1 na coluna 2\n");
                bloco1 = 2;
            }

            else if (bloco1 + 1 == 3){
                printf("Bloco 1 na coluna 3\n");
                bloco1 = 3;
            }

            else{
                printf("Bloco 1 na coluna 1\n");
                bloco1 = 1;
            }
        }

        else if (( i - 2 ) % 4 == 0){

            if ((bloco2 - 1) == 0){
                printf("Bloco 2 na coluna 3\n");
                bloco2 = 3;
            }

            else if (bloco2 - 1 == 2){
                printf("Bloco 2 na coluna 2\n");
                bloco2 = 2;}

            else{
                printf("Bloco 2 na coluna 1\n");
                bloco2 = 1;}
        }          

        else if ((i + 4) % 8 == 0){
            if (bloco3 + 1 == 2){
                printf("Bloco 3 na coluna 2\n");
                bloco3 = 2;
            }

            else if (bloco3 + 1 == 3){
                printf("Bloco 3 na coluna 3\n");
                bloco3 = 3;
            }

            else{
                printf("Bloco 3 na coluna 1\n");
                bloco3 = 1;
            }
        }
            
        }
    return 0;
}