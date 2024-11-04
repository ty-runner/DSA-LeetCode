#include <stdlib.h>
#include <stdio.h>

int heads(){
    return rand() < RAND_MAX/2;
}

int main(int argc, char * argv[]){
    int flip_count, trial_count, heads_count;
    int flips = atoi(argv[1]), trials = atoi(argv[2]);
    int * account = (int *) malloc((flips + 1) * sizeof(int));
    for(flip_count = 0; flip_count <= flips; flip_count++) account[flip_count] = 0; //init blank array
    for(trial_count = 0; trial_count < trials; trial_count++, account[heads_count]++){
        for(heads_count = 0, flip_count = 0; flip_count <= flips; flip_count++){
            if(heads()) heads_count++;
        }
    }
    for(flip_count = 0; flip_count <= flips; flip_count++){
        printf("%2d ", flip_count);
        for(trial_count = 0; trial_count < account[flip_count]; trial_count+=10) printf("*");
        printf("\n");
    }
    free(account);
    return 0;
}