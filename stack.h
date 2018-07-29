//
// Created by arjun on 3/6/18.
//

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef STACKLINKEDLIST_STACK_H
#define STACKLINKEDLIST_STACK_H

#endif //STACKLINKEDLIST_STACK_H

typedef struct Node{

    int data;
    struct Node* link;

} Node;

Node* top = NULL;

void push(int x){

    Node* temp = (Node*) malloc(sizeof(struct Node));

    temp->data = x;
    temp->link = top;
    top = temp;
}

void pop(){

    Node* temp = top;
    top = temp->link;
    free(temp);
}

int Top(){

    return top->data;
}

int isEmpty(){

    if (top == NULL)
        return 0;

    else return 1;
}

void print(){

    Node* temp = top;

    while (temp != NULL){

        printf("%d ", temp->data);
        temp = temp->link;
    }

    printf("\n");
}