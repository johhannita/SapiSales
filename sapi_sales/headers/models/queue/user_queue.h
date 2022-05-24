//
// Created by Johanna on 4/6/2022.
//

#ifndef SAPISALES_USER_QUEUE_H
#define SAPISALES_USER_QUEUE_H
#include "user.h"

typedef struct {
    int front;
    int rear;
    int size;
    User ** user;
}UserQueue;

void createUserQueue(UserQueue **userQueue, unsigned int maxSize);
bool queueIsEmpty(UserQueue *UserQueue);
bool queueIsFull(UserQueue *UserQueue);
bool enqueue(UserQueue* userQueue, User *user);
bool dequeue(UserQueue* userQueue);
int findElementInQueue(UserQueue* userQueue, int userId);
void printQueue(UserQueue* userQueue, char* destination);
void deleteQueue(UserQueue** pUserQueue);
int findUserInQueue(int userId);
#endif //SAPISALES_USER_QUEUE_H
