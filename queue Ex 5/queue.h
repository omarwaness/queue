//
// Created by o9s9w on 4/19/2024.
//

#ifndef QUEUE_EX_5_QUEUE_H
#define QUEUE_EX_5_QUEUE_H

#endif //QUEUE_EX_5_QUEUE_H

struct city{
    char *name;
    int area;
    int population;
};
struct element{
    struct city city;
    struct element *next;
};
struct queue{
    struct element *head;
    struct element *queue;
};


void create(struct queue *);
int empty(struct queue);
struct city first(struct queue);
void enqueue(struct queue *, struct city );
void dequeue(struct queue *);
void display(struct queue *);
void add(struct queue *);
struct queue third(struct queue *);
struct queue dequeue_s(struct queue *);