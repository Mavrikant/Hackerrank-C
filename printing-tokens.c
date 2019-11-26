//https://www.hackerrank.com/challenges/printing-tokens-/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int len = 0;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    len = (int) strlen(s);
    s = realloc(s, len + 1);

    //Write your logic to print the tokens of the sentence here.
    for (int i = 0; i < len; i++) {
        if (s[i] != ' ') {
            printf("%c", s[i]);
        } else {
            printf("\n");
        }
    }
    return 0;
}

