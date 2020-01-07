#include <stdlib.h>
#include <stdio.h>

unsigned int nextN(unsigned int number, int offset) {
    unsigned int n = 0;
    while ((1<<n) <= number - offset)
    {
        n++;
    }
    return n;
}

unsigned int binZerl(unsigned int number, int paket , int iteration) {
    unsigned int *nums = malloc(sizeof (unsigned) * iteration);
    return 0;
}

int main() {
    unsigned int number;
    unsigned int modulo;
    printf("Give me da Numba:\n");
    scanf("%ud", &number);
    printf("Give me da modulo:\n");
    scanf("%ud", &modulo);   
    unsigned int numN = nextN(number, 2);
    unsigned int modN = nextN(modulo, 2);
    unsigned int test = nextN(number, 0);
    unsigned int iteration = 1 + ((numN - 1)/modN); //q = 1 + ((x - 1) / y);
    printf("Iteration: %u\n" , iteration);
    printf("Paket: %d\n", modN);
    return main();
}