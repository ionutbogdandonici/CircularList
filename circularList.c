#include <stdio.h>
#include <malloc.h>

#include "circularList.h"

struct Node *head = NULL;
struct Node *last = NULL;

_Bool isEmpty(struct Node *headNode) {
    return head == NULL;
}

void insertHead(char value) {
    // Create a new node and assign the value
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->value = value;
    // If the list is empty, the new node wille be the head node and the last node
    if (isEmpty(head)) {
        newNode->next = newNode;
        newNode->started = 1;
        head = newNode;
        last = newNode;
    } else {
        head->started = 0;
        newNode->next = head;
        newNode->started = 1;
        head = newNode;
        last->next = head;
    }
}

int getSize() {
    int size = 0;
    struct Node *current = head;
    if (head == last) {
        return 1;
    } else {
        while (current != last) {
            size++;
            current = current->next;
        }
        return size + 1;
    }
}

void printList() {
    struct Node *current = head;
    int size = 0;
    do {
        printf("%c \n", current->value);
        current = current->next;
    } while (getSize() < size);
    printf("\n");
}