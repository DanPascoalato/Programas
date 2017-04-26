#include <stdio.h>

#include "maior.h"

int main(void) {

    int v1, v2;

    scanf("%d %d", &v1, &v2);

    //processamento
    
    int m = maior( v1, v2);

    printf("O maior valor entre %d e %d é: %d\n", v1, v2, m);


    return 0;
}