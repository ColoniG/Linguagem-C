#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int x, z, w, k, m, n, X, Y, Z, W;
    float f;
    x = -2 * 3;
    z = 4 % 2;
    w = 8 / 4;
    k = 7 / 2;
    f = 7.0 / 2.0;
    m = w + x;
    n = m - k;

    printf("x: %d \n", x);
    printf("z: %d \n", z);
    printf("w: %d \n", w);
    printf("k: %d \n", k);
    printf("f: %.2f \n", f);
    printf("m: %d \n", m);
    printf("n: %d \n", n);

    ////////////////////////////////////

    printf("\n\nSEGUNDO EXEMPLO!!!\nDigite um numero inteiro: ");
    scanf("%d", &X);
    printf("Digite o valor a somar: ");
    scanf("%d", &Y);

    Z = X + Y;
    W = pow(X,3);
    printf("\nA soma de %d com %d equivale a %d\n", X, Y, Z);
    printf("\n%d elevado ao cubo: %d\n", X, W);

    return 0; 
}