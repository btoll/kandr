#include <stdlib.h>
#include <stdio.h>

#define HEX_UPPER(N) (N >= 'A' && N <= 'F')
#define HEX_LOWER(N) (N >= 'a' && N <= 'f')
#define HEX_DIGIT(N) (N >= '0' && N <= '9')

int get_hex(char hex) {
    unsigned i;

    if (HEX_UPPER(hex)) {
        return 10 + hex - 'A';
    }

    if (HEX_LOWER(hex)) {
        return 10 + hex - 'a';
    }

    if (HEX_DIGIT(hex)) {
        return hex - '0';
    }

    printf("[ERROR] Non-hexadecimal character %c\n", hex);
    exit(1);
}

unsigned long htoi(char *hex) {
    int i = 0;

    if (hex[1] == 'x' || hex[1] == 'X')
        i = 2;

    unsigned long n = 0;

    while (hex[i] != '\0') {
        n = n * 16 + get_hex(hex[i]);
        ++i;
    }

    return n;
}

int main(int argc, char **argv) {
    printf("%lu\n", htoi("0xdeadbeef"));
    return 0;
}

