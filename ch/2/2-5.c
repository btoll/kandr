#include <stdlib.h>
#include <stdio.h>

int any(char s1[], char s2[]) {
    for (int i = 0; s2[i] != '\0'; i++) {
        for (int j = 0; s1[j] != '\0'; j++) {
            if (s2[i] == s1[j]) {
                return j;
            }
        }
    }
    return -1;
}

int main(void) {
    printf("%d\n", any("poobar", "zyro"));
}

