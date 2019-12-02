//https://www.hackerrank.com/challenges/querying-the-document/problem

/*
Sample Input 0
2                                                                  // Two paragraph
Learning C is fun.
Learning pointers is more fun.It is good to have pointers.
3                                                                  // Query number
1 2                                                                // Type 1
2
5
6
2 1 1                                                              // Type 2
4
3 1 1 1                                                            // Type 3

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

char *kth_word_in_mth_sentence_of_nth_paragraph(char ****document, int k, int m, int n) {

}

char **kth_sentence_in_mth_paragraph(char ****document, int k, int m) {

}

char ***kth_paragraph(char ****document, int k) {

}

int find_number_of_parag(char *text) {
    int counter = 0;
    int i = 0;
    while (i < strlen(text)) {
        if (text[i] == '\n') {
            counter++;
        }
        i++;
    }
    return counter + 1;
}


char ****get_document(char *text) {
    //char**** document = {{{"Learning", "C", "is", "fun"}}, {{"Learning", "pointers", "is", "more", "fun"}, {"It", "is", "good", "to", "have", "pointers"}}};
    char ****document = 1;
    int number_of_parag = find_number_of_parag(text);
    printf("\nnumber_of_parag=%d", number_of_parag);
    ****document = malloc(number_of_parag * sizeof(char *));
    printf("ok");

//    char *temp_text = malloc(sizeof(text));
//    while (paragraph != NULL) {
//        strcpy(temp_text, text);
//        paragraph = strtok(temp_text, "\n");
//        printf("%s", paragraph);
//        int N =
//    }


}


char *get_input_text() {
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char *returnDoc = (char *) malloc((strlen(doc) + 1) * (sizeof(char)));
    strcpy(returnDoc, doc);
    return returnDoc;
}

void print_word(char *word) {
    printf("%s", word);
}

void print_sentence(char **sentence) {
    int word_count;
    scanf("%d", &word_count);
    for (int i = 0; i < word_count; i++) {
        printf("%s", sentence[i]);
        if (i != word_count - 1)
            printf(" ");
    }
}

void print_paragraph(char ***paragraph) {
    int sentence_count;
    scanf("%d", &sentence_count);
    for (int i = 0; i < sentence_count; i++) {
        print_sentence(*(paragraph + i));
        printf(".");
    }
}

int main() {
    char *text = get_input_text();
    char ****document = get_document(text);

    int q;
    scanf("%d", &q); //Query number

    while (q--) {
        int type;
        scanf("%d", &type);  //Query type

        if (type == 3) {
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            char *word = kth_word_in_mth_sentence_of_nth_paragraph(document, k, m, n);
            print_word(word);
        } else if (type == 2) {
            int k, m;
            scanf("%d %d", &k, &m);
            char **sentence = kth_sentence_in_mth_paragraph(document, k, m);
            print_sentence(sentence);
        } else {
            int k;
            scanf("%d", &k);
            char ***paragraph = kth_paragraph(document, k);
            print_paragraph(paragraph);
        }
        printf("\n");
    }
}