#include <stdio.h>
#include "queue.h"

int main() {
    int i,value,count=0,N;
    struct queue F;
    create(&F);
    printf("how many nubs do you want to enters: ");
    scanf("%d",&N);
    for (int i=0; i <N ; i++) {
        scanf("%d",&value);
        if(prime(value))
            count++;
        enqueue(&F, value);
    }
    printf("\nThere are %d prime numbers.", count);
    
    return 0;
}