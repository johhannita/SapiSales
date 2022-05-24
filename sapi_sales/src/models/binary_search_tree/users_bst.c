//
// Created by Johanna on 5/5/2022.
//

#include "binary_search_tree/users_bst.h"
void create (UserTreeNode** root){
    (*root) = (UserTreeNode*) calloc(1, sizeof(UserTreeNode));
    if (*root != NULL){
        (*root)->info = NULL;
        (*root)->left = NULL;
        (*root)->right = NULL;
    }
}

void insert (UserTreeNode** root, User* user){
    if ((*root) == NULL){
        create(root);
        createUser(&(*root)->info);
        memcpy((*root)->info, user, sizeof(User));
    }
    else if (user->id < (*root)->info->id){
        insert(&(*root)->left, user);
    }
    else if (user->id > (*root)->info->id){
        insert(&(*root)->right, user);
    }
}
bool search (UserTreeNode* userTreeNode, unsigned int userId){
    if (userTreeNode == NULL){
        return false;
    }
    else if (userId < userTreeNode->info->id){
        return search (userTreeNode->left, userId);
    }
    else if (userId > userTreeNode->info->id){
        return search(userTreeNode->right, userId);
    }
    else{
        return true;
    }
}


void inorderPrint(UserTreeNode* root, char* destination){
    if (root->left != NULL){
        inorderPrint(root->left, destination);
    }

    freopen(destination, "w", stdout);
    printUser(root->info, CON);
    freopen(CON, "w", stdout);

    if (root->right != NULL){
        inorderPrint(root->right, destination);
    }
}
void preorderPrint(UserTreeNode* root, char* destination){
    freopen(destination, "w", stdout);
    printUser(root->info, CON);
    freopen(CON, "w", stdout);

    if (root->left != NULL){
        inorderPrint(root->left, destination);
    }

    if (root->right != NULL){
        inorderPrint(root->right, destination);
    }
}
void postorderPrintUserTreeNode(UserTreeNode* root, char* destination){

    if (root->left != NULL){
        inorderPrint(root->left, destination);
    }

    if (root->right != NULL){
        inorderPrint(root->right, destination);
    }

    freopen(destination, "w", stdout);
    printUser(root->info, CON);
    freopen(CON, "w", stdout);
}
UserTreeNode* minimum(UserTreeNode* userTreeNode){
    UserTreeNode* temp = userTreeNode;

    while (temp->left != NULL){
        temp = temp->left;
    }

    return temp;
}
UserTreeNode* maximum(UserTreeNode* userTreeNode){
    UserTreeNode* temp = userTreeNode;

    while (temp->right != NULL){
        temp = temp->right;
    }

    return temp;
}

void delete(UserTreeNode** root, unsigned int userId){
    if (userId < (*root)->info->id){
        delete(&(*root)->left, userId);
    }
    else if (userId > (*root)->info->id){
        delete(&(*root)->right, userId);
    }
    else{
        // node found

        // 1. node has no children
        if ((*root)->left == NULL && (*root)->right == NULL){
            deleteUser(&(*root)->info);
            free((*root));
            (*root) = NULL;
        }

            // 2. node has 1 children
        else if ((*root)->left != NULL && (*root)->right == NULL){
            UserTreeNode* leftNode = (*root)->left;
            deleteUser(&(*root)->info);
            free((*root));
            (*root) = leftNode;
        }
        else if ((*root)->right != NULL && (*root)->left == NULL){
            UserTreeNode* rightNode = (*root)->right;
            deleteUser(&(*root)->info);
            free((*root));
            (*root) = rightNode;
        }

            // 3. node has 2 children
        else{
            // smallest node that's bigger than the deletable node
            UserTreeNode* newNode = minimum((*root)->right);
            deleteUser(&(*root)->info);

            memcpy((*root)->info, newNode->info, sizeof(User));
            delete(&newNode, newNode->info->id);
        }
    }
}

void destroy(UserTreeNode** root) {
    if ((*root) != NULL && (*root)->left != NULL){
        destroy(&(*root)->left);
    }

    delete(root, (*root)->info->id);

    if ((*root) != NULL && (*root)->right != NULL){
        destroy(&(*root)->right);
    }
}