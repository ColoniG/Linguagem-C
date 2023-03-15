// Ordenando Arrays com algoritmo Bubblesort - CLASSIFICAÇÃO POR BOLHAS 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

int main() {
    setlocale(LC_ALL,""); 
    
    int numeros[TAM], i, aux, contador;

    printf("Entre com dez numeros para preencher o arrey, e precione enter apos digita-los!\n");
    for (i = 0; i < TAM; i++) {
        scanf("%d", &numeros[i]);
    }
    printf("Ordem atual dos itens no arrey:\n");
    for (i = 0; i < TAM; i++) {
        printf("%4d", numeros[i]);
    }

    // ALGORITIMO DE ORDENAÇÃO BUBBLESORT:
    for (contador = 1; contador < TAM; contador++) {
        for (i = 0; i < TAM; i++) {
            if (numeros[i] > numeros[i + 1]) {
                aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
            }
        }    
    }
    printf("\nElementos do arrey em ordem cescente:\n");
    for (i = 0; i < TAM; i++) {
        printf("%4d", numeros[i]);
    }

    printf("\n");
    return 0; 
}

