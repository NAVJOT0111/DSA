#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int data;
    struct Node *next;
}Node;

int main(){
    Node *head = (Node*)malloc(sizeof(Node));
    head-> data = 0;
    head-> next = NULL;
}
