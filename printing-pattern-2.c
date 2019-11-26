//https://www.hackerrank.com/challenges/printing-pattern-2/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define new_max(x, y) ((x) >= (y)) ? (x) : (y)

int main() {

    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.

    for (int i = +n - 1; i > -n; --i) {
        for (int j = -n + 1; j < +n; ++j) {
            printf("%d ", (new_max(abs(i), abs(j))) + 1);
        }
        printf("\n");
    }

    return 0;
}


