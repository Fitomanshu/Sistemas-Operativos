#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define CADLEN 1024

int main()
{
    char cadena[1024];
    char cadena2[1024];
    char delimitador[] = "|><";
    char delimitador2[] = " ";
    char tokens[1024];
    int contadortuberias = 0;
    int i = 0;
    while (1){
        i = 0;
        contadortuberias=0;

        printf("C:> ");
        fgets(cadena, CADLEN, stdin);
        strcpy(cadena2,cadena);
        char tokens[6][50]; //un arreglo de n elementos con elementos de m caracteres   
        //printf("La cadena copia es: ");
        /*
        for(i=0; i<strlen(cadena2); i++){
            printf("%c",cadena2[i]);
        }*/
        char *token = strtok(cadena, delimitador);
        int i=0;
        int j=0;
        if (token != NULL){
            while (token != NULL ){
                // Sólo en la primera pasamos la cadena; en las siguientes pasamos NULL
                printf("Token: %s\n", token);
                
                token = strtok(NULL, delimitador);
                i++;
            }
        }
    }
}
