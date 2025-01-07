#include <studio.h> 

int conversor(int* time, int* dias, int* horas, int* minutos, int* resto){
    *dias = time /(60*60*24);
    *horas = (time % (60*60*24))/60 ;
    *minutos = (time /(60*60*24)) / 360;
    *segundos = (time /(60*60*24)) % 360;
}

int main(){
    int time,dias,horas,minutos,resto;
    
    do{
        printf("Ingrese un el tiempo en segundos:\n")
        scanf("%d",&num)
    } while (num >=0);
    conversor(num,&dias,&horas,&minutos,&resto)

    printf("El converso lanzo:" )

}   