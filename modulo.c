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

void binZerl(int *nums, unsigned int number, unsigned int paket , unsigned int iteration) {
    printf("succes");
    int bit = 0;
    int pointer = 0;
    while (pointer < ((iteration * paket)  - nextN(number, 0)))
    {
        nums[pointer] = 0;
        pointer++;
    }
    printf("succes");
    for (size_t y = nextN(number,2); y >= 0; y--)
    {
        bit = number >> y;

        if (bit & 1)
        {
            nums[pointer] = 1;
            pointer++;
        } else
        {
            nums[pointer] = 0;
            pointer++;
        }
        
    }
    printf("succes");
    
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
    unsigned int iteration = 1 + ((numN - 1)/modN); //q = 1 + ((x - 1) / y);
    printf("Iteration: %u\n" , iteration);
    printf("Paket: %d\n", modN);
    int bin[iteration * modN];
    printf("succes");
    binZerl(bin, number ,modN, iteration);
    printf("succes");
    for (size_t i = 0; i < iteration * modN; i++)
    {
        printf("%d", bin[i]);
    }
    printf("succes");
    
    return main();
}