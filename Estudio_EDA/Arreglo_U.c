//Almacenamiento en memoria de arreglo unidimensional osea contiguo 
#include<stdio.h>
int main(){
    short nums[]={1,2,3,8,5,9,8,7,9,10},i;

    for(i=0 ; i<10; i++){
      //  printf("%x\n",&nums[i]); // Es correcto a veces pero no recomemndado
        printf("%p\n",(void*)&nums[i]); //Un void * puede guardar la dirección de cualquier tipo de dato, ya sea un int, char, struct, etc.
    }
    return 0;
}