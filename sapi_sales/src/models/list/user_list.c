//
// Created by Johanna on 4/13/2022.
//

#include "list/user_list.h"
#include "errors.h"

void createUserNode(UserNode** userNode, User* user){
    *userNode = (UserNode*) calloc(1, sizeof(UserNode));
    createUser(&(*userNode)->user);
    memcpy((*userNode)->user, user, sizeof(User));
    (*userNode)->next = NULL;
}

void deleteUserNode(UserNode** userNode){
    if (*userNode){
        deleteUser(&(*userNode)->user);
        free(*userNode);
        *userNode = NULL;
    }
}

void printUserNode(UserNode* userNode, char* destination){
    freopen(destination, "w", stdout);

    if(userNode == NULL){
        printErrorMessage(NULL_POINTER_EXCEPTION);
    }
    else{
        printf("______________________________");
        printf("\nDetails of UserNode: \n");
        printUser(userNode->user, CON);
        printf("Next ptr:       %p \n", userNode->next);
        printf("______________________________\n");
    }

    freopen(CON, "w", stdout);
}

void printUserList(UserNode* userNode, char* destination){
    UserNode* node = userNode;

    while (node != NULL){
        printUserNode(node, destination);
        node = (*node).next;
    }
}

void insertFirst(UserNode** userNode, User* user){
    UserNode* node;
    createUserNode(&node, user);
    node->next = *userNode;
    (*userNode) = node;
}

void insertLast(UserNode* userNode, User* user){
    UserNode* insertNode;
    createUserNode(&insertNode, user);

    UserNode* node = userNode;
    while(node->next != NULL){
        node = node->next;
    }

    node->next = insertNode;
}

void insertToPos(UserNode* userNode, User* user, int pos){
    UserNode* insertNode;
    createUserNode(&insertNode, user);

    UserNode* node = userNode;
    int i = 0;
    while(i < pos - 1 && node->next != NULL){
        node = node->next;
        i++;
    }
    if (i == pos-1){
        insertNode->next = node->next;
        node->next = insertNode;
    }
    else{
        printf("Error.");
    }
}

int findElementInList(UserNode* userNode, int userId){
    UserNode* node = userNode;
    int index = 0;

    while (node != NULL){
        if (node->user->id == userId){
            return index;
        }
        else{
            index++;
        }
        node = node->next;
    }

    return -1;
}

int removeFirst(UserNode** userNode){
    if (*userNode != NULL){
        UserNode* node = *userNode;
        (*userNode) = (*userNode)->next;
        deleteUserNode(&node);

        return true;
    }

    return false;
}
int removeLast(UserNode* userNode){
    if (userNode != NULL){
        UserNode* node = userNode;

        while(node->next->next != NULL){
            node = node->next;
        }

        deleteUserNode(&node->next);
        node->next = NULL;

        return true;
    }

    return false;
}

void deleteUserList(UserNode** userNode) {
    UserNode *nextNode;

    do {
        nextNode = (*userNode)->next;
        deleteUserNode(userNode);
        *userNode = nextNode;
    } while (*userNode != NULL);
}