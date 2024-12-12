/*
punteros 3
*/

#include <stdio.h>
void incrementarNumero(int*);

int main()
{
    int numero = 1;
    int *number;
    number = &numero;

    printf("\n%d", numero);
    incrementarNumero(number);
    printf("\n%d", numero);    
    printf("\n%d", numero);    
   
    return 0;
}

void incrementarNumero(int *numero)
{
    (*numero)++;
}