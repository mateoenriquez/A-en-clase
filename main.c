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
    

    return 0;
}