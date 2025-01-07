#include <stdio.h>

#define MF 50

typedef int t_vector[MF];

// ml == maximologico
void cargar_datos(t_vector v, int *ml) {
    int num, i=0;
    printf("Ingrese numero:");
    scanf("%d",&num);

    while ( (num != 0) && (i<MF) )
    {
        v[i]= num;
        i++;
        if (i<MF){
            printf("Ingrese numero");
            scanf("%d",&num);
        }
    
    }
    *ml = i;
};

void mostrar_datos(t_vector v, int ml){
    int i;
    for (i=0; i<ml ; i++)
    {
        printf("%d ", v[i]);
    }
    
}


int main(){
    t_vector vector;
    int maximologico;

    // se pasa por referencia, debe cambiarse
    cargar_datos(vector,&maximologico);
    // se pasa por valor, el valor ya fue modificado
    mostrar_datos(vector, maximologico);

}