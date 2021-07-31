#include <stdio.h>

#define MAXLINE 1000

void _getline(char s[]);
void reverse(char s[]);

int main() {
    char line[MAXLINE];
    _getline(line);
    reverse(line);
    printf("%s\n", line);
}

void _getline(char line[]) {
    int i = 0;
    char c;

    while ((c = getchar()) != '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
}

void reverse(char s[]) {
    int len;

    for (len = 0; s[len] != '\0'; len++)
        ;

    int i = 0;
    int j = len - 1;
    int tmp;

    for (; i < j; ++i, --j) {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
}

