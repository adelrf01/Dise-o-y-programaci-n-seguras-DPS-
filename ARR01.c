#include <stdio.h>
#include <string.h>


int main(int argv, char *argc[]){
    char *frase = "Hola me llamo Aitor.";
    printf("Tamaño con sizeof:%lu\n",sizeof(frase));
    printf("Tamaño con strlen:%lu\n",strlen(frase));
    /**
    *Salidas:
    *Tamaño con sizeof:8
    *Tamaño con strlen:20
    */
    return 0;
}