#include <stdio.h>
#include<stdlib.h>

typedef struct ListNode {
    int data;
    struct ListNode *link;
} ListNode;

int main() {
    ListNode *head = NULL;
    ListNode *a;
    ListNode *b;
    ListNode *c;
    ListNode *d;

    a = (ListNode *)malloc(sizeof(ListNode));
    a -> data = 10;
    a -> link = NULL;

    b = (ListNode *)malloc(sizeof(ListNode));
    b -> data = 20;
    b -> link = NULL;

    c = (ListNode *)malloc(sizeof(ListNode));
    c -> data = 30;
    c -> link = NULL;

    d = (ListNode *)malloc(sizeof(ListNode));
    d -> data = 40;
    d -> link = NULL;

    head = a;
    a -> link = b;
    b -> link = c;
    c -> link = d;


    for(ListNode *pt=head; pt != NULL; pt=pt -> link) {
        printf("%d->", pt->data);
    }
    printf("NULL \n");
}
