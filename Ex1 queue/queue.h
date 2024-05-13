//
// Created by o9s9w on 4/18/2024.
//

#ifndef EX1_QUEUE_QUEUE_H
#define EX1_QUEUE_QUEUE_H

#endif //EX1_QUEUE_QUEUE_H


struct element{
    int data;
    struct element *next;
};
struct queue{
    struct element *head;
    struct element *queue;
};

void create(struct queue *);
unsigned empty(struct queue );
int first(struct queue);
void enqueue(struct queue *, int);
void dequeue(struct queue *);
int prime(int);
