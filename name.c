#include <stdio.h>
int main()
{
     char nome[20];
     printf("Digite seu nome: ");
     scanf("%s", &nome,"\n");
     printf("Oi, %s eh um prazer conhecer a sua pessoa!", nome);
     printf("%s", nome);
     return 0;
}