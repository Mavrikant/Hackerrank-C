//https://www.hackerrank.com/challenges/conditional-statements-in-c/problem


#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *readline();


int main() {
    char *n_endptr;
    char *n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    // Write Your Code Here

    if (strcmp("1", n_str) == 0) {
        printf("one");
    } else if (strcmp("2", n_str) == 0) {
        printf("two");
    } else if (strcmp("3", n_str) == 0) {
        printf("three");
    } else if (strcmp("4", n_str) == 0) {
        printf("four");
    } else if (strcmp("5", n_str) == 0) {
        printf("five");
    } else if (strcmp("6", n_str) == 0) {
        printf("six");
    } else if (strcmp("7", n_str) == 0) {
        printf("seven");
    } else if (strcmp("8", n_str) == 0) {
        printf("eight");
    } else if (strcmp("9", n_str) == 0) {
        printf("nine");
    } else {
        printf("Greater than 9");
    }


    return 0;
}

char *readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char *data = malloc(alloc_length);

    while (true) {
        char *cursor = data + data_length;
        char *line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
