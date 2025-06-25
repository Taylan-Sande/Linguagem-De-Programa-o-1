#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void apresentando(char *python0,char *html0,char *llm0,char *machine0,char *css0,char *js0){
    printf(" %d\n", 1);
    printf(" %c\n", python0[0]);
    printf(" %c\n", python0[1]);
    printf(" %c  %d\n", python0[2],3);
    printf("2%s\n", html0);
    printf(" %c  %c %d\n", python0[4], llm0[1],5);
    printf(" %c 4%s\n", python0[5], machine0);
    printf("      %c\n", css0[1]);
    printf("    6%s\n", js0);
}

int main(){
    char str[7];
    char python[7] = "PYTHON", html[5] = "HTML", llm[4] = "LLM", machine[8]= "MACHINE", css[4] = "CSS", js[3] = "JS";
    char python0[7] = "******", html0[5] = "****", llm0[4] = "***", machine0[8]= "*******", css0[4] = "***", js0[3] = "**";

    ///apresentando
    apresentando(python0, html0, llm0, machine0, css0,js0);

    while(true){
        printf("Digite a palvara 1: ");
        gets(str);
        if (strcmp(str,python) == 0){
            strcpy(python0, str);
            html0[0] = 'H';
            apresentando(python0, html0, llm0, machine0, css0,js0);
            break;
        }
        else
        printf("Tente Novamente\n");
    }

    while(true){
        printf("Digite a palvara 2: ");
        gets(str);
        if (strcmp(str,html) == 0){
            strcpy(html0, str);
            apresentando(python0, html0, llm0, machine0, css0,js0);
            break;
        }
        else
        printf("Tente Novamente\n");
    }
    while(true){
        printf("Digite a palvara 3: ");
        gets(str);
        if (strcmp(str,llm) == 0){
            strcpy(llm0, str);
            machine0[0] = 'M';
            apresentando(python0, html0, llm0, machine0, css0,js0);
            break;
        }
        else
        printf("Tente Novamente\n");
    }
    while(true){
        printf("Digite a palvara 4: ");
        gets(str);
        if (strcmp(str,machine) == 0){
            strcpy(machine0, str);
            apresentando(python0, html0, llm0, machine0, css0,js0);
            break;
        }
        else
        printf("Tente Novamente\n");
    }
    while(true){
        printf("Digite a palvara 5: ");
        gets(str);
        if (strcmp(str,css) == 0){
            strcpy(css0, str);
            js0[1] = 'S';
            apresentando(python0, html0, llm0, machine0, css0,js0);
            break;
        }
        else
        printf("Tente Novamente\n");
    }
    while(true){
        printf("Digite a palvara 6: ");
        gets(str);
        if (strcmp(str,js) == 0){
            strcpy(js0, str);
            apresentando(python0, html0, llm0, machine0, css0,js0);
            break;
        }
        else
        printf("Tente Novamente\n");
    }
    return 0;
}