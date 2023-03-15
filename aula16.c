// FUNCOES
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void saldacao();

int main() {
    setlocale(LC_ALL,"");

    saldacao();

    return 0; 
}

void saldacao() {
    printf("Bem vindo ao Curso de C!\n");
    return 0;
}