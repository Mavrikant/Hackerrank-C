//https://www.hackerrank.com/challenges/playing-with-characters/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define max_len 100
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    char st[max_len] ;
    char line[max_len];
    int temp;


    scanf("%c",&ch);
    scanf("%s",&st);
    while ((temp = getchar()) != '\n' && ch != EOF) ; //Clean buffer
    scanf("%[^\n]%*c",&line);


    printf("%c\n",ch);
    printf("%s\n",st);
    printf("%s",line);

    return 0;
}


