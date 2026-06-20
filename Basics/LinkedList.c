#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void traverse(struct node *ptr){
    // struct node *ptr = head;
    while (ptr != NULL){
        printf("%d -> ", ptr->data);
        ptr = ptr -> next;
    }
    printf("NULL\n");
}

int main(){
    struct node *head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> next = NULL;

    struct node *current = malloc(sizeof(struct node));
    current -> data = 89;
    current -> next = NULL;
    head -> next = current;
    traverse(head);
    return 0;
}