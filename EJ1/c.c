#include <stdio.h>

void cumplir_anios(int* num){
    *num = *num * *num * *num;
}

int main(){
    int num;
    printf("Ingrese su numero: ");
    scanf("%d",&num);

    cumplir_anios(&num);
    printf("El numero al cubo es %d!\n",num);
    return 0;
}
