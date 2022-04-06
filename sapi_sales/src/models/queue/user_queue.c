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
bool queueIsEmpty(UserQueue **userQueue){
    if((*userQueue)->front==-1){
        return true;
    }
    else{return false;}
}
bool queueIsFull(UserQueue **userQueue){
    if((*userQueue)->rear == (*userQueue)->size){
        return true;
    }
    else{return false;}
}
void enqueue(UserQueue* userQueue, User *user){
    userQueue->rear +=1;
    if(!(queueIsFull(&userQueue))){
        user[userQueue->rear] = *user;

    }
    else{ printErrorMessage(QUEUE_IS_FULL);}
}
void dequeue(UserQueue* userQueue){
    if(!(queueIsEmpty(&userQueue))){
        userQueue->front +=1;
    }
}
int findElementInQueue(UserQueue* userQueue, int userId){

}
void printQueue(UserQueue* userQueue, char* destination){

}
void deleteQueue(UserQueue** pUserQueue){

}