//
// Created by Johanna on 5/5/2022.
//

#ifndef SAPISALES_USERS_BST_H
#define SAPISALES_USERS_BST_H
#include "user.h"

typedef struct UserTreeNode {
    User* info;
    struct UserTreeNode *left, *right;
} UserTreeNode;

void create (UserTreeNode** userTreeNode, User* info);
void insert (UserTreeNode** userTreeNode, User* user);
bool search (UserTreeNode* userTreeNode, char* id);
void inorderPrint(UserTreeNode* userTreeNode);
void preorderPrint ();
void postorderPrint();

User* minimum(UserTreeNode* userTreeNode);
User* maximum(UserTreeNode* userTreeNode);

UserTreeNode* delete(UserTreeNode** userTreeNode, int position);

void destroy(UserTreeNode** userTreeNode);
#endif //SAPISALES_USERS_BST_H
