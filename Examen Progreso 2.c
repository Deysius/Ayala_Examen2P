#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void asignarValoresinsumos(int insumos[]) {
    printf("Numero de ingresos de insumos : \n");
    for (int i = 1; i < 31; ++i) {
        insumos[i] = rand() % 100+1; 
        printf("Insumo N%d: %d\n ",i, insumos[i]);
    }
    printf("\n");
// con un funcion doy valores aleatorios a mi insumos de ingresos

}
void asignarValoresegresos(int insumos[]) {
    printf("Numero de egresos de insumos : \n");
    for (int i = 1; i < 31; ++i) {
        insumos[i] = rand() % 100+1; 
        printf("Insumo N%d: %d\n ",i, insumos[i]);
    }
    printf("\n");
    // con un funcion doy valores aleatorios a mi insumos de egresos
}



int main (){
