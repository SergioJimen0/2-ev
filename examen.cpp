#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 20

int obtener_longitud_palabra(char *palabra);

int main() {
    char *palabras[4]; // Vector de punteros a caracteres para almacenar las palabras
    
    // Leer las palabras desde el teclado y almacenarlas en el vector
    for(int i = 0; i < 4; i++) {
        palabras[i] = (char*) malloc(MAX_LEN * sizeof(char)); // Asignar memoria para la palabra
        printf("Ingrese la palabra %d: ", i+1);
        scanf("%s", palabras[i]);
    }
    
    // Mostrar las palabras por pantalla y sus longitudes
    for(int i = 0; i < 4; i++) {
        printf("La palabra %d es: %s\n", i+1, palabras[i]);
    }
    
    // Pedir al usuario el número de palabra y número de letra a recuperar
    int num_palabra, num_letra;
    printf("Diga el número de la palabra: ");
    scanf("%d", &num_palabra);
    printf("Diga el número de la letra que desea recuperar: ");
    scanf("%d", &num_letra);
    
    // Recuperar la letra en la posición especificada y mostrarla por pantalla
    char letra = palabras[num_palabra - 1][num_letra - 1];
    printf("Letra: %c\n", letra);
    
    return 0;
}

