#include <stdio.h>
#include <stdlib.h>

typedef struct node* link;
struct node {
    int item;
    link next;
};

//Represents the Josephus problem: N people, numbered 1 to N, are sitting in a circle. Starting at person 1, a hot potato is passed. After M passes, the person holding the hot potato is removed, the circle closes ranks, and the game continues with the person who was sitting after the one who was removed. N people, numbered 1 to N, are sitting in a circle. Starting at person 1, a hot potato is passed. After M passes, the person holding the hot potato is removed, the circle closes ranks, and the game continues with the person who was sitting after the one who was removed. N people, numbered 1 to N, are sitting in a circle. Starting at person 1, a hot potato is passed. After M passes, the person holding the hot potato is removed, the circle closes ranks, and the game continues with the person who was sitting after the one who was removed.
int main(int argc, char * argv[]){
    int i, N = atoi(argv[1]), M = atoi(argv[2]);
    link t = malloc(sizeof *t), x = t;
    t->item = 1;
    t->next = t; //why next = t? because it is a circular list
    for (i = 2; i <= N; i++){
        x = (x->next = malloc(sizeof *x)); //what does this do? x->next = malloc(sizeof *x) creates a new node and x = (x->next) makes x point to the new node
        x->item = i;
        x->next = t; //last node always points to the first node
    }
    while (x != x->next){ //while there is more than one node in the list
        for (i = 1; i < M; i++)
            x = x->next;
        printf("Executor: %d\n", x->item);
        printf("Executed: %d\n", x->next->item);
        x->next = x->next->next; //remove the node
        N--;
    }
    printf("%d\n", x->item);
    return 0;
}