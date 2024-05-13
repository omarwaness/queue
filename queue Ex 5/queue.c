//
// Created by o9s9w on 4/19/2024.
//

#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void create(struct queue *f) {
    f->head = NULL;
    f->queue = NULL;
}
int empty(struct queue f) {
    return (f.head == NULL && f.queue == NULL);
}

struct city first(struct queue f) {
    return f.head->city;
}
void enqueue(struct queue *f, struct city c) {
    struct element *e;
    e = (struct element *) malloc(sizeof(struct element));
    if (e == NULL) {
        return;
    }
    e->city = c;
    e->next = NULL;

    if (!empty(*f)) {
        printf("bruh\n");
        f->queue->next = e;
        f->queue = e;
    } else {
        f->head = e;
        f->queue = e;
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
void display(struct queue *f) {
    struct element *p;
    p = f->head;
    while (p!= NULL) {
        printf("%s\n", p->city.name);
        p = p->next;
    }
}
void add(struct queue *f) {
    struct city c;
    strcpy(c.name, "Msakin");
    c.area = 1000;
    c.population = 10;
    enqueue(f, c);
}
struct queue third(struct queue *f) {
    int count = 1;
    struct queue g;
    create(&g);
    while (!empty(*f)) {
        if (count != 3) {
            enqueue(&g,first(*f));
        }
        dequeue(f);
        count++;
    }
    return  g;
}
struct queue dequeue_s(struct queue *f) {
    struct queue g;
    create(&g);
    while (!empty(*f)) {
        if (f->queue->city.name[0] != 'S' && f->queue->city.name[0] != 's') {
            enqueue(&g,first(*f));
            dequeue(f);
        }
    }
    return  g;
}