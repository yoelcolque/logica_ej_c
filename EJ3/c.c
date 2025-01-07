#include <stdio.h>
#include <stdbool.h>

// funcion verificar si es numero par
bool es_par(int num){
    return num / 2 == 0;
}
// funcion retornar cubo de numero
int devolver_cubo(int num){
    return num * num * num;
}
// funcion calcular factorial de numero
int devolver_factorial(int num){
    int i,devolver = 1;
    for (i = 1; i <= num ; i++)
    {
        devolver *= i;
    }
    return devolver;
}   
// funcion verificar si un numero es primo
bool es_primo(int num){
    bool devolver;
    if (num <= 1){
        devolver = false;
    }
    
}
// funcion main
int main(){
    int num;

    do {
        printf("Ingrese numero positivo: ");
        scanf("%d", &num);
    } while (num <= 0);
    
    if (es_par(num))
        printf("Es numero par\n");
    else
        printf("El numero ingresado no es par\n");
    int resultado_cubo = devolver_cubo(num);
    printf("El cubo es del %d es:\n",resultado_cubo);
    float resultado_factorial = devolver_factorial(num);
    printf("El factorial del %f es:\n", resultado_factorial);

}


