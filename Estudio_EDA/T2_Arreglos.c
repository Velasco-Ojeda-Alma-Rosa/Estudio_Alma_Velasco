/*Crear un programa que genere una matriz tridimensional de MxNxL y que
permita acceder a un elemento a través de sus coordenadas [renglón,
columna, plano]. Las dimensiones y las coordenadas las ingresa el usuario.
Dibujar la matriz resultante y el elemento seleccionado.*/

#include<stdio.h>
int main(){
    int matriz[10][10][10]; // la pila del programa no está hecha para guardar tanto (100). Su límite depende del sistema operativo, pero muchas veces es como 1 MB o 2 MB máximo.
    int bloque,renglon,columna;
    int B,R,C;
    short contador=1;
    int i,j,k;

    printf("Ingrese no. bloques:\n");
    scanf("%d",&bloque);
    printf("Ingrese no. renglones:\n");
    scanf("%d",&renglon);
    printf("Ingrese no. columna:\n");
    scanf("%d",&columna);

    
    for(i=0;i<bloque;i++){   //para llenar la matriz
        for(j=0;j<renglon;j++){
            for(k=0;k<columna;k++){
                matriz[i][j][k]=contador++;
            }
        }
    }

    for(i=0;i<bloque;i++){
        printf("Bloque %d\n",i);
        for(j=0;j<renglon;j++){
            for(k=0;k<columna;k++){
                printf("%d\t",matriz[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

printf("De que posicion desea obtener el dato?");
scanf("%d %d %d",&B,&R,&C);

//printf("%d",matriz[B][R][C]); 
printf("El valor de las coordenadas [%d][%d][%d] es: %d",B,R,C,matriz[B][R][C]); 


return 0;

}