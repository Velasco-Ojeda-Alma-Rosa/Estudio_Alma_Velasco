//Añmacenamiento de memoria de un arreglo bidimensional
//Renglon vertical, columna horizontal
#include<stdio.h>
int main(){
    short Nums[4][3]={
        {99,88,77},
        {66,55,44},
        {33,22,11},
        {999,555,111}
    };
    short renglon,columna;

    printf("Arreglo bidimensional\n");

    for(renglon=0; renglon<4;renglon++){
        for(columna=0; columna<3; columna++){
            printf("%p\t",(void*)&Nums[renglon][columna]);
        }
        printf("\n");
    }

    return 0;
} 