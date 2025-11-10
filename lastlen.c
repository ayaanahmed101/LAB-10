#include <stdio.h>
#include <string.h>

int main() {
    char pass[] = " i am fastian ";
    int len = strlen(pass) - 1;

    while (len >= 0 && pass[len] == ' ') {
        len--;
    }

    int i = len;
    while (i >= 0 && pass[i] != ' ') {
        i--;
    }

    int lastlen = len - i ;

    printf("%d\n", lastlen);

    return 0;
}

