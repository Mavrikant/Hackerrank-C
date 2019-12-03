//https://www.hackerrank.com/challenges/dynamic-array-in-c/problem

#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int *total_number_of_books; //pointer to int array

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int **total_number_of_pages; // pointer to pointer array which stores int array

int main() {
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);

    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);

    total_number_of_books = (int *) calloc(total_number_of_shelves, sizeof(int)); //integer array
    total_number_of_pages = (int **) calloc(total_number_of_shelves, sizeof(int *)); //pointer array which stores int arrays

    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);

        if (type_of_query == 1) { //Query type 1   -   Insert a book with  pages at the end of the  shelf.
            int x, y;
            scanf("%d %d", &x, &y); //shelve, page
            (total_number_of_books[x])++; //shelve te bulunan kitap sayısını artır

            (total_number_of_pages[x]) = (int *) realloc((total_number_of_pages[x]), total_number_of_books[x] * sizeof(int)); //old pointer ,new size
            total_number_of_pages[x][total_number_of_books[x] - 1] = y;

        } else if (type_of_query == 2) { //Query type 2     -    Print the number of pages in the  book on the  shelf.
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } else { //Query type 3    -    Print the number of books on the  shelf.
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) {
        free(total_number_of_books);
    }

    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }

    if (total_number_of_pages) {
        free(total_number_of_pages);
    }

    return 0;
}