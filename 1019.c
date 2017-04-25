#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

int N;

int H, M, S;

scanf("%d", &N);

H = (N / 60) / 60;

M = N / 60;

S = N;

printf ("%d:%d:%d\n", H, M, S);

 return (0);
}