//https://www.hackerrank.com/challenges/recursion-in-c/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    //Write your code here.
    if (n > 3) {
        return find_nth_term(n-1 , a, b, c) + find_nth_term(n - 2, a, b, c) + find_nth_term(n - 3, a, b, c);
    } else if (3 == n) {
        return c;
    } else if (2 == n) {
        return b;
    } else if (1 == n) {
        return a;
    } else{
        return -1;
    }

}

int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}