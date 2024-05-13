//
// Created by o9s9w on 4/18/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void create(struct queue *f) {
    f->head = NULL;
    f->queue = NULL;
}
unsigned empty(struct queue f) {
    return ((f.head == NULL) && (f.queue == NULL));
}
int first(struct queue f) {
    if (!empty(f)) {
        return f.head->data;
    }
}
void enqueue(struct queue *f, int info) {
    struct element *e;
    e = (struct element *) malloc(sizeof(struct element));
    e->data = info;
    e->next = NULL;
    if (!empty(*f)) {
        f->queue->next = e;
        f->queue = e;
    } else {
        f->queue = e;
        f->head = e;
    }
}
void dequeue(struct queue *f) {
    struct element *p;
    if (!empty(*f)) {
        p = f->head;
        f->head = p->next;
        free(p);
    }
    if (f->head == NULL) {
        f->queue = NULL;
    }
}
int prime(int value) {
    int i;
    for (i = 2; i <= (value/2); i++) {
        if (value % i == 0) {
            return 0;
        }
    }
    return 1;
}