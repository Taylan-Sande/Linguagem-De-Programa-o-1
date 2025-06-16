# include <stdio.h>

int main(){
    int conti = 0, contj = 0, contz = 0;

    for (int i = 1; i <= 10; i++){
        conti += 1;
        for (int y = 1; y <= 10; y++){
            contj += 1;
            for (int z = 1; z <= 10; z++){
                contz += 1;
            }
        }
    
    }
    printf("Contagem laço 1: %i, laço 2: %i, laço 3: %i, total: %i\n",conti,contj,contz,conti+contj+contz);

    return 0;
}