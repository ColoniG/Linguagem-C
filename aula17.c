// ESCOPO DAS VARIAVEL   -->  Local  --> Parâmetro de Função ou -->  Global
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void escreveValor ();

int numero = 15;

int main() {
    setlocale(LC_ALL,"");

    printf("O numero eh %d!\n", numero);
    escreveValor();
    return 0; 
}

void escreveValor () {
    int dobro = numero * 2;
    printf("E o dobro eh %d!\n", dobro);
    return 0;
}