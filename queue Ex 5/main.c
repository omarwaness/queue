#include <stdio.h>
#include "queue.h"

int main() {
    int i, N;
    struct city a;
    struct queue f;

    printf("Enter the number of cities:");
    scanf("%d", &N);
    printf("\n");

    create(&f);
    //add(&f);
    //printf("%s",f.queue->city.name);
    for (i = 0; i < N; i++) {
        printf("Enter the city name:");
        scanf("%s", a.name);
        printf("%s", a.name);
        //printf("Enter the city area:");
        //scanf("%d", &a.area);
        //printf("Enter the city population:");
        //scanf("%d", &a.population);
        //printf("\n");
        enqueue(&f, a);
    }
    printf("%s\n",f.head->city.name);
    printf("%s",f.queue->city.name);

    /*display(&f);
    printf("done\n");
    f = third(&f);
    display(&f);*/


    return 0;
}
