//
// Created by Johanna on 4/13/2022.
//

#ifndef SAPISALES_USER_LIST_H
#define SAPISALES_USER_LIST_H
#include "user.h"
#include <stdlib.h>
typedef struct UserNode{
    User* userValue;
    struct UserNode* next;
}UserNode;

void createUserNode(UserNode** userNode, User* userValue);
void printUserList(UserNode* userNode, char* destination);
int findElementInList(UserNode* userNode, int userId);
void insertFirst(UserNode** userNode, User* userValue);
void insertLast(UserNode* userNode, User* userValue);
void insertAnywhere(UserNode* userNode, User* userValue, int n);
User* removeFirst(UserNode** userNode);
User* removeLast(UserNode* userNode);
void deleteUserList(UserNode** userNode);

#endif //SAPISALES_USER_LIST_H
