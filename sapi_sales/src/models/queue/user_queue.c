//
// Created by Johanna on 4/6/2022.
//

#include "queue/user_queue.h"

void createUserQueue(UserQueue **userQueue, unsigned int maxSize){
    *userQueue = (UserQueue*)malloc(sizeof(UserQueue));
    if(!(*userQueue)){
        printErrorMessage(MEMORY_ALLOCATION);
    }
    (*userQueue)->size = maxSize;
    for(int i=0; i<(*userQueue)->size; ++i){
        (*userQueue)->user[i] = NULL;
}
    (*userQueue)->front = -1;
    (*userQueue)->rear = -1;

}
bool queueIsEmpty(UserQueue *userQueue){
    return (userQueue->front == -1 && userQueue->rear == -1)
           || (userQueue->front+1 == userQueue->rear);
}

bool queueIsFull(UserQueue *userQueue){
    return (userQueue->front == 0 && userQueue->rear == userQueue->size - 1)
           || (userQueue->front - 1 == userQueue->rear);
}

bool enqueue(UserQueue* userQueue, User *user){
    if(!queueIsFull(userQueue)){
        if (userQueue->front == -1){
            userQueue->front = 0;
        }
        userQueue->rear = (userQueue->rear + 1) % userQueue->size;
        createUser(&userQueue->user[ userQueue->rear ]);
        memcpy(userQueue->user[ userQueue->rear ], user, sizeof(User));
        return true;
    }

    return false;
}

bool dequeue(UserQueue* userQueue){
    if (!queueIsEmpty(userQueue)){
        deleteUser(&userQueue->user[userQueue->front]);

        userQueue->front = (userQueue->front + 1) % userQueue->size;
        if (queueIsEmpty(userQueue)){
            userQueue->front = -1;
            userQueue->rear = -1;
        }

        return true;
    }

    return false;
}

int findElementInQueue(UserQueue* userQueue, int userId){
    for (int i = 0; i < userQueue->size; i++){
        if(userQueue->user[i] != NULL && userQueue->user[i]->id == userId){
            return i;
        }
    }

    return -1;
}

void printQueue(UserQueue* userQueue, char* destination){
    freopen(destination, "w", stdout);

    if(queueIsEmpty(userQueue)){
        printf("Queue empty\n");
    }
    else{
        for (int i = userQueue->front; i < userQueue->size; i++){
            printUser(userQueue->user[i], CON);
        }
        for (int i = 0; i <= userQueue->rear; i++){
            printUser(userQueue->user[i], CON);
        }
        printf("\n");
    }

    freopen(CON, "w", stdout);
}

void deleteQueue(UserQueue** userQueue){
    for (int i = 0; i < (*userQueue)->size; ++i) {
        deleteUser(&(*userQueue)->user[i]);
    }

    free(*userQueue);
    *userQueue = NULL;
}