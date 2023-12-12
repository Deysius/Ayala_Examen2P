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
    //doy valores de aleatorios a mis insumos
    
}
void asignarValoresegresos(int insumos[]) {
    printf("Numero de egresos de insumos : \n");
    for (int i = 1; i < 31; ++i) {
        insumos[i] = rand() % 100+1; 
        printf("Insumo N%d: %d\n ",i, insumos[i]);
    }
    printf("\n");
}

int main (){
srand (time(NULL));
printf ("Ingresos y egresos mes de Enero\n");
int insumos[30];
asignarValoresinsumos(insumos);
asignarValoresegresos(insumos);
//llamo a mi funcion para que me entregue los valores de ingresos y egresos 

printf ("Ingresos y egresos mes de Febrero\n");
int febrero[30];
asignarValoresinsumos(febrero);
asignarValoresegresos(febrero);
// repito los mismo para mis meses del año
printf ("Ingresos y egresos mes de Marzo\n");
int marzo[30];
asignarValoresinsumos(marzo);
asignarValoresegresos(marzo);

printf ("Ingresos y egresos mes de Abri\n");
int abril[30];
asignarValoresinsumos(abril);
asignarValoresegresos(abril);

printf ("Ingresos y egresos mes de Mayo\n");
int mayo[30];
asignarValoresinsumos(mayo);
asignarValoresegresos(mayo);

printf ("Ingresos y egresos mes de Junio\n");
int junio[30];
asignarValoresinsumos(junio);
asignarValoresegresos(junio);

printf ("Ingresos y egresos mes de Julio\n");
int Julio[30];
asignarValoresinsumos(Julio);
asignarValoresegresos(Julio);

printf ("Ingresos y egresos mes de Agosto\n");
int agos[30];
asignarValoresinsumos(agos);
asignarValoresegresos(agos);

printf ("Ingresos y egresos mes de Septiembre\n");
int sep[30];
asignarValoresinsumos(sep);
asignarValoresegresos(sep);

printf ("Ingresos y egresos mes de Octubre\n");
int oc[30];
asignarValoresinsumos(oc);
asignarValoresegresos(oc);

printf ("Ingresos y egresos mes de Noviembre\n");
int nov[30];
asignarValoresinsumos(nov);
asignarValoresegresos(nov);

printf ("Ingresos y egresos mes de Diciembre\n");
int dis[30];
asignarValoresinsumos(dis);
asignarValoresegresos(dis);
return 0;
}