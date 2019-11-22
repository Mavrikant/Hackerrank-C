//https://www.hackerrank.com/challenges/for-loop-in-c/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_number(int number) {
    switch (number) {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
    }
    printf("\n");

}

void fonk(int number) {
    if (10 > number) {
        print_number(number);
    } else if (0 == number % 2) //even
    {
        printf("even\n");
    } else if (1 == number % 2) //odd
    {
        printf("odd\n");
    }
}

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);
    // Complete the code.

    for (int i = a; i < b + 1; ++i) {
        fonk(i);
    }
    return 0;
}



