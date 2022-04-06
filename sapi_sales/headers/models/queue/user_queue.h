//
// Created by Johanna on 4/6/2022.
//

#ifndef SAPISALES_USER_QUEUE_H
#define SAPISALES_USER_QUEUE_H
#include "user.h"

typedef struct {
    int front;
    int rear;
    unsigned int size;
    User ** user;
}UserQueue;

void createUserQueue(UserQueue **userQueue, unsigned int maxSize);
bool queueIsEmpty(UserQueue **UserQueue);
bool queueIsFull(UserQueue **UserQueue);
void enqueue(UserQueue* userQueue, User *user);
void dequeue(UserQueue* userQueue);
int findElementInQueue(UserQueue* userQueue, int userId);
void printQueue(UserQueue* userQueue, char* destination);
void deleteQueue(UserQueue** pUserQueue);
#endif //SAPISALES_USER_QUEUE_H
