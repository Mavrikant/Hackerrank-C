//https://www.hackerrank.com/challenges/small-triangles-large-triangles/problem

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle {
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;

void swap(triangle *tr1, triangle *tr2);

void sort_by_area(triangle *tr, int n) {
    for (int j = 0; j < n - 1; j++) {
        for (int i = 0; i < n - 1; i++) {

            float p1 = (tr[i].a + tr[i].b + tr[i].c) / 2.0;
            float S1 = sqrt(p1 * (p1 - tr[i].a) * (p1 - tr[i].b) * (p1 - tr[i].c));
            float p2 = (tr[i + 1].a + tr[i + 1].b + tr[i + 1].c) / 2.0;
            float S2 = sqrt(p2 * (p2 - tr[i + 1].a) * (p2 - tr[i + 1].b) * (p2 - tr[i + 1].c));

            if (S2 < S1) {
                swap(&tr[i], &tr[i + 1]);
            }
        }
    }
}

void swap(triangle *tr1, triangle *tr2) {
    triangle *temp = malloc(sizeof(triangle));
    temp->a = tr1->a;
    temp->b = tr1->b;
    temp->c = tr1->c;

    tr1->a = tr2->a;
    tr1->b = tr2->b;
    tr1->c = tr2->c;

    tr2->a = temp->a;
    tr2->b = temp->b;
    tr2->c = temp->c;
    free(temp);
}

int main() {
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++) {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    return 0;
}