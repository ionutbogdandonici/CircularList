//
// Created by Bogdan Donici on 01/07/2022.
//

#ifndef DES_CIRCULARLIST_H
#define DES_CIRCULARLIST_H

// Define the structure of a node
struct Node {
    char value;
    struct Node *next;
    _Bool started;
};
// Checks if the list is empty
_Bool isEmpty(struct Node *headNode);
// Adds a new node to the list in the beginning
void insertHead(char value);
// Adds a new node to the list in the end
void insertTail(char value);
// Gets the value of the node at the given index
char getValue(int index);
// Shifts the list to the n value. n value could be positive or negative.
// n can't be greater than the length of the list.
void shift(int n);
// Returns the size of the list
int getSize();
// Clears the list
void clear();
// TODO -> Prints the list :: Do be deleted maybe
void printList();

#endif
