#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

struct Strct{
    char ch;
    struct strct *next;
};

typedef struct Strct strct;

int main()
{
    char str[50];
    struct Strct *ptr1 = NULL;
    struct Strct *ptr2 = NULL;
    struct Strct *tmp = NULL;
    struct Strct *k = NULL;
    int i = 0;

    printf("Input text = ");
    gets(str);
    while(str[i] != 0){
        tmp = ptr1;
        ptr1 = malloc( sizeof(strct) );
        ptr1->next = tmp;
        ptr1->ch = str[i];
        i++;
    }

    k = ptr1;
    ptr1 = k;

    while(ptr1 != NULL){
        tmp = ptr2;
        ptr2 = malloc(sizeof(strct));
        ptr2->next = tmp;
        ptr2->ch = ptr1->ch;
        ptr1 = ptr1->next;
    }

    k = ptr2;
    ptr2 = k;

    while(ptr2 != NULL){
        if(ptr2->ch <= 'z' && ptr2->ch >= 'a')
            ptr2->ch -= 32;
        else if(ptr2->ch <= 'Z' && ptr2->ch >= 'A')
            ptr2->ch += 32;
        else{}
        ptr2 = ptr2->next;
    }

    ptr2 = k;
    printf("UPPERCASE lOWERCASE CONV= ");

    while(ptr2 != NULL){
        printf("%c", ptr2->ch);
        ptr2 = ptr2->next;
    }

	getch();
    return 0;
 }
