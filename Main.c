#include <stdio.h>
#include <stdlib.h>

// Puntero
// suma, resta
// direccion &, indireccion *
// importancia

int main()

{
    int valor = 2;
    int *ptr_valor = &valor;
    printf("direccion de memoria: %p\n", &valor);
    printf("valor: %i\n", valor);
    printf("ptr: %p", ptr_valor);

  return EXIT_SUCCESS;
}