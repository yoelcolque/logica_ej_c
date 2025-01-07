#include <stdio.h>
int vocal=0,constante=0;
char car;

//contador_vocal_constante
int ingresar_text(){
    printf("Ingrese texto con un .");
    scanf("%c",&car);

    while (car != '.')
    {
        if((car=='a' ||car=='e' ||car=='i' ||car=='o' ||car=='u') ||
         (car=='A' ||car=='E' ||car=='I' ||car=='O' ||car=='U')){
            vocal++;
        }
        else if ((car >= 'a' && car <= 'z')||
        (car >= 'A' && car <= 'Z'))
        {
            constante++;
        }
        scanf("%c",&car);
    }    
    return vocal,constante;
}
int main(){
    vocal,constante = ingresar_text();
    printf("Hay %d vocales\nHay %d constantes\n",vocal,constante);
    return 0;
}

