//
// Created by Johanna on 4/13/2022.
//

#ifndef SAPISALES_USER_LIST_H
#define SAPISALES_USER_LIST_H
#include "user.h"
#include <stdlib.h>
typedef struct UserNode {
    User* user;
    struct UserNode* next;
}UserNode;

void createUserNode(UserNode** userNode, User* user);

/**
 * Prints the user value of the node
 */
void printUserNode(UserNode* userNode, char* destination);

/**
 * Prints the user list starting from given node
 */
void printUserList(UserNode* userNode, char* destination);

void insertFirst(UserNode** userNode, User* user);

void insertLast(UserNode* userNode, User* user);

/**
 * Insert user to the given position. Indexing from 0
 */
void insertToPos(UserNode* userNode, User* user, int pos);

void deleteUserNode(UserNode** userNode);

void deleteUserList(UserNode** userNode);

/**
 * Returns the index of the given user id. Indexing from 0 and returning -1 if not found
 */
int findElementInList(UserNode* userNode, int userId);

int removeFirst(UserNode** userNode);

int removeLast(UserNode* userNode);

#endif //SAPISALES_USER_LIST_H
