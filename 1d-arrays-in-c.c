//https://www.hackerrank.com/challenges/1d-arrays-in-c/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    int sum = 0;
    int *arr;
    scanf("%d", &N);
    arr = malloc(N * sizeof(int));
    while (N--) {
        scanf("%d", &arr[N - 1]);
        sum += arr[N - 1];
    }
    printf("%d", sum);
    return 0;
}

