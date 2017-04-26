#include <stdlib.h>

int maior( int n1, int n2) {

    return ( n1 + n2 + abs( n1 - n2) ) / 2;
}