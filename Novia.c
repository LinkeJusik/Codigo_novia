#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <malloc.h>
#include <string.h>

typedef struct Novia{
    char nombre;
    int amor;
    char amado;
    int vida;
}Novia;

int main(){
Novia bb;
bb.vida=1;
printf("Ingresa tu nombre");
scanf("%s", &bb.amado);
printf("Ingresa el nombre de tu novia");
scanf("%s", &bb.nombre);
do{
    printf("Ingrese el porcentaje de amor de su novia");
    scanf("%d", &bb.amor);
    printf("%s ama a %s, con una intensidad de %d%", bb.nombre, bb.amado, bb.amor);
    sleep(1000);
}while(bb.vida == 1 && bb.amor != 0);
printf("Tu novia te ha dejado");
return 0;
}