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

void create (UserTreeNode** root);
void insert (UserTreeNode** userTreeNode, User* user);
bool search (UserTreeNode* userTreeNode, unsigned int userId);
void delete(UserTreeNode** root, unsigned int userId);
void inorderPrint(UserTreeNode*, char*);
void preorderPrint(UserTreeNode*, char*);
void postorderPrint(UserTreeNode*, char*);

UserTreeNode* minimum(UserTreeNode* userTreeNode);
UserTreeNode* maximum(UserTreeNode* userTreeNode);

void destroy(UserTreeNode** userTreeNode);
#endif //SAPISALES_USERS_BST_H
