# include <stdio.h>
# define N 10

int main(){
    char cor1[N];
    int i = 0;

    printf("Digite uma cor: ");
    scanf("%s", cor1);
    printf("\nCor: %s\n", cor1);

    while(cor1[i] != '\0')
        printf("%c\n", cor1[i++]);
    return 0;
}