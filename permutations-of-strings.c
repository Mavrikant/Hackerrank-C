//https://www.hackerrank.com/challenges/permutations-of-strings/problem


// TODO Bitmedi. Devam ediyor.
/* Sağdan başka. Kendinden sağdakiler arasından en büyüğünü bul
 * Onun bir solundaki artır
 * * Next sayısı bul
 * Sağda kalanları tekrar sırala.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void str_increment(int n, char **s_orj, int i);

int next_permutation(int n, char **s) {
    int i;
    int biggest_on_left = -1;

    for (i = n - 1; i >= 0; i--) {
        for (int j = n - 1; j < n; j++) {
            if (strcmp(s[i], s[j]) > 0) {
                biggest_on_left = i - 1;
                goto label;
            }
        }
    }
    label:
    if (biggest_on_left == -1) {
        biggest_on_left = n - 1;
    }
    printf("**%s\n", s[biggest_on_left]);

    for (int i = 0; i < n; i++) {
        printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
    }
    str_increment(n, s, biggest_on_left);

    for (int i = 0; i < n; i++) {
        printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
    }
    printf("exit\n");

    return 0;

}

void str_increment(int n, char **s_orj, int M) {
    char **s_sorted = calloc(n, sizeof(char *));
    char *temp = NULL;

    for (int i = 0; i < n; i++) {
        s_sorted[i] = calloc(11, sizeof(char));
        s_sorted[i] = s_orj[i];
    }
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n - j; ++i) {
            if (strcmp(s_sorted[j], s_sorted[i]) < 0) {
                temp = s_sorted[j];
                s_sorted[j] = s_sorted[i];
                s_sorted[i] = temp;
            }
        }
    }


    for (int i = 0; i < n; i++) {
        printf("%s ", s_sorted[i]);
        free(s_sorted[i]);
    }
    free(s_sorted);
}


int main() {
    char **s;
    int n;
    scanf("%d", &n);
    s = calloc(n, sizeof(char *));

    for (int i = 0; i < n; i++) {
        s[i] = calloc(11, sizeof(char));
        scanf("%s", s[i]);
    }

    do {
        for (int i = 0; i < n; i++) {
            printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
        }
    } while (next_permutation(n, s));

    for (int i = 0; i < n; i++)
        free(s[i]);
    free(s);
    return 0;
}