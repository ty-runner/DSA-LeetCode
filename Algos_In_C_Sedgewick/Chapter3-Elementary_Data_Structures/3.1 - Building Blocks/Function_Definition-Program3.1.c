#include <stdio.h>
//log2 program to illustrate function calls and definitions
int lg(int);

main(){
    int i, N;

    for(i = 1, N = 10; i <= 6; i++, N *= 10){
        printf("%7d %2d %9d\n", N, lg(N), N*lg(N));
    }
}

int lg(int N){
    int i;
    for(i = 0; N > 0; i++, N /= 2);
    return i;
}