#include <stdio.h>


int main(){
    int num,menor,mayor, sumatoria = 0, cantidad = 0;
    float promedio;

    do {
        printf("Ingrese numero entero (cero para finalizar: )");
        scanf("%d",&num);

        if (num != 0){
            if (cantidad==0){
                menor = num;
                mayor = num;
            }
            cantidad++;
            sumatoria += num;
            if (num > mayor)
                mayor = num;
            else if (num < menor)
                menor = num;
        }
    } while (num != 0);

    if (cantidad > 0) {
        printf("El menor es: %d\n", menor);
        printf("El mayor es: %d\n", mayor);
        printf("La cantidad de numeros ingresados es %d\n", cantidad);
        printf("La sumatatoria de los numeros ingresados es %d\n", sumatoria);
        
        promedio = (float)sumatoria/cantidad;
        printf("El promedio general es %.2f\n", promedio);
    } else {
        printf("No se ingresaron datos\n\n");
    }
    return 0;
}