#include <stdio.h>

#define MAX_LEN 300
#define MIN_LEN 30

char *expand(char *s1, char *s2) {
    int i, j, k;
    char reg[MIN_LEN];
    char ch;

    for (i = 0, j = 0; s1[i] != '\0'; i++) {
        if (s1[i] != '-')
            reg[j++] = s1[i];
    }

    for (i = 0, j = 1, k = 0; reg[i] != '\0'; i += 2, j += 2) {
        ch = reg[i];
        while (ch <= reg[j])
            s2[k++] = ch++;
    }

    return s2;
}

int main(int argc, char **argv) {
    char s1[] = "0-9a-zA-Z";
    char s2[MAX_LEN];
    printf("%s\n", expand(s1, s2));
    return 0;
}

