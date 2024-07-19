// F11X Tutorial 08 - part2_diagram.c
//
// A simple demonstration of a linked list.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main(void) {
    struct node *node1 = malloc(sizeof(struct node));

    node1->data = 3;
    node1->next = NULL;

    struct node *head = node1;

    struct node *node2 = malloc(sizeof(struct node));

    node2->data = 9;
    node2->next = NULL;

    node1->next = node2;

    struct node *node3 = malloc(sizeof(struct node));

    node3->data = 5;
    node3->next = NULL;

    node3->next = head;
    head = node3;

    return 0;
}
