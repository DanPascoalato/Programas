#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

int X;

int A;

int c100, c50, c20, c10, c5, c2, c1;

scanf("%d", &X);

A = X;

c100 = X / 100;

X = X % 100;

c50 = X / 50;

X = X % 50;

c20 = X / 20;

X = X % 20;

c10 = X / 10;

X = X % 10;

c5 = X / 5;

X = X % 5;

c2 = X / 2;

X = X % 2;

c1 = X / 1;

printf ("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", A, c100, c50, c20, c10, c5, c2, c1);

 return (0);
}