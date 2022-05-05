//
// Created by Johanna on 5/5/2022.
//

#include "binary_search_tree/users_bst.h"
void create (UserTreeNode** userTreeNode, User* info){
    (*userTreeNode) = malloc(sizeof(UserTreeNode));
    if(*userTreeNode == NULL){ printErrorMessage(MEMORY_ALLOCATION);}
    (*userTreeNode)->info = info;
    (*userTreeNode)->left = NULL;
    (*userTreeNode)->right = NULL;

}
void insert (UserTreeNode** userTreeNode, User* user){
    if(userTreeNode == NULL){
        create(*userTreeNode, user);
    }
    else if(user->id<(*userTreeNode)->info->id){
        insert((*userTreeNode)->left, user);
    }
    else if(user->id>(*userTreeNode)->info->id){
        insert((*userTreeNode)->right, user);
    }
}
bool search (UserTreeNode* userTreeNode, char* id){
    if(userTreeNode == NULL){return false;}
    if(userTreeNode->info<id){
        search(userTreeNode->right, id);
    }
    else {
        search(userTreeNode->left, id);
    }
}
void inorderPrint(UserTreeNode* userTreeNode){
    if(userTreeNode != NULL){
        inorderPrint((userTreeNode->left));
        printf("%d ", userTreeNode->info);
        inorderPrint(userTreeNode->right);
    }
}
void preorderPrint ();
void postorderPrint();

User* minimum(UserTreeNode* userTreeNode);
User* maximum(UserTreeNode* userTreeNode);

UserTreeNode* delete(UserTreeNode** userTreeNode, int position);

void destroy(UserTreeNode** root) {
    while (root != 0) {
        if ((*root)->left == NULL && root != NULL) {
            destroy((*root)->left);
        } else if (root != NULL && (*root)->right != NULL) {
            destroy((*root)->right);
        } else {
            free(root);
            free((*root)->info);
            return;
        }
    }
}