#include<stdio.h>
#include<stdlib.h>

int main() {
    int **x;

    printf("sizeof(x) = %lu\n", sizeof(x));
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    printf("sizeof(**x) = %lu\n", sizeof(**x));
}