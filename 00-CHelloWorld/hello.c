#include <stdio.h>

int main(){
    FILE *archivo = fopen("Hola mundo.txt","w");
    fprintf(archivo,"hola, mundo\n");
    fclose(archivo);
    return 0;
}