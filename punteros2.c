/*
punteros
*/

#include <stdio.h>

int main()
{
    int valor = 2;
    int *ptr;
    ptr = &valor;
    printf("%p",ptr);
    printf("\n%i",*ptr);
   
    return 0;
}