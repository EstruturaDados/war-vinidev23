#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Territorio {
    char nome[50];
    char cor_exercito[20];
    int num_tropas;
};

int main() {
    struct Territorio mapa[5];
    int i;

    printf("--- Desafio WAR: Nivel Novato ---\n\n");

    for (i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);}
