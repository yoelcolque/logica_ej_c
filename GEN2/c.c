#include <stdio.h>

int main(){
    //variables
    int max_nivel;
    //pedir valor
    printf("Ingresar el nivel maximo: \n");
    scanf("%d",&max_nivel);
    //generar matriz
    for(int i=1; i<=max_nivel; i++){
        for (int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
