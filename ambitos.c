/*
ambitos
memoria en el stack
memoria en el heap

*/

#include <stdio.h>
#include <stdlib.h>

int main()

{

    printf("valor actual: ");
    for(int i = 0; i < 10; i++)
    {
        printf("%i", i);
        if (i < 10)
        {
            printf(",");
        }
    }

    // int valor;
    // {
    //     valor = 2;       
    //     valor++;
    //     printf("%i", valor);
    // }
  
    
    return EXIT_SUCCESS;
}