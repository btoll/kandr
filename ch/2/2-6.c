#include <stdio.h>

/* getbits: get n bits from position p */
unsigned getbits(unsigned x, int p, int n) {
    return (x >> (p + 1 - n)) & ~(~0 << n);
}

int main(void) {
    printf("%u\n", getbits(12345, 1, 2));
    printf("%d\n", ~(~0 << 4));
    return 0;
}

