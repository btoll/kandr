#include <stdlib.h>
#include <stdio.h>

void squeeze(char s1[], char s2[]) {
    for (int i = 0; s2[i] != '\0'; i++) {
        int k = 0;
        for (int j = 0; s1[j] != '\0'; j++) {
            if (s2[i] != s1[j]) {
                s1[k++] = s1[j];
            }
        }
        s1[k] = '\0';
    }
}

int main(void) {
    char s1[] = "poobar";
    char s2[] = "paro";
    squeeze(s1, s2);
    printf("%s\n%s\n", s1, s2);
}

