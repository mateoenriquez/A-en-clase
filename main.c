#include <stdio.h>

int main(void){
    
    int i, entero, aux;
    aux=0;

    printf("Ingrese un numero entero\n");
    scanf("%d", &entero);

    for (i = 1; i < entero; i++)
    {
        if (entero%i==0)
        {
            aux+=aux;
        }   
    }
    if(aux>2){
        printf("El numero entero ingresado no es primo\n");
    }else{
        printf("El numero entero ingresado es primo\n");
    }
    

    return 0;
}