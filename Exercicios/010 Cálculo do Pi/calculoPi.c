/*
pi é 4 * a probabilidade
probalidade é números de pontos no circulo/fora
centro do quadrado e circulo Xc e Yc, ambos iguais a 0
raio = 1000
formula que verifica se o ponto está no circulo (x - Xc)^2 + (y - Yc)^2 <= r^2
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int x = 0, y = 0, pontos_dentro = 0, r = 100;
    double pi = 0;

    srand(time(NULL));

    for (int i = 0; i != 200000; i++){
        x = (rand() % (r - (-r) + 1)) + (-r);
        y = (rand() % (r - (-r) + 1)) + (-r);
        if ((x*x) + (y*y) <= (r * r)){
            pontos_dentro += 1;
        }
    }
    pi = 4 * ((double)pontos_dentro/200000);

    printf("Pi = %lf\n", pi);
    return 0;

}