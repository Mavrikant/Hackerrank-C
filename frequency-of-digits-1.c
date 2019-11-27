//https://www.hackerrank.com/challenges/frequency-of-digits-1/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int accurance[10] = {0};
    char line[1000];
    int lenght = 0;
    scanf("%s", line);
    lenght = strlen(line);

    for (int i = 0; i < lenght; ++i) {
        if (isdigit(line[i])) {
            accurance[line[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; ++i) {
        printf("%d ", accurance[i]);
    }


    return 0;
}
