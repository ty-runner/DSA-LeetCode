#include <stdio.h>
#include <stdlib.h>

typedef struct node* link;
struct node {
    int item;
    link next;
};

link reverse(link x){
    link t, y = x, r = NULL;
    while (y != NULL){ //while there is more than one node in the list
        t = y->next; //store the next node
        y->next = r; //reverse the link
        r = y; //move r to the current node
        y = t; //move y to the next node
    }
    return r;
}