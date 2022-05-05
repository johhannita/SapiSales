//
// Created by Johanna on 4/13/2022.
//

#include "list/user_list.h"
#include "errors.h"
void createUserNode(UserNode** userNode, User* userValue){
    (*userNode) = malloc(sizeof(UserNode));
    if(*userNode == NULL){ printErrorMessage(MEMORY_ALLOCATION);}
    (*userNode)->userValue = userValue;
    (*userNode)->next = NULL;
}
void printUserList(UserNode* userNode, char* destination){
    while(userNode != NULL){
        printUser(userNode->userValue, CON);
        userNode = userNode->next;
    }
}
int findElementInList(UserNode* userNode, int userId){

}
void insertFirst(UserNode** userNode, User* userValue){
    UserNode* p;
    createUserNode(&p, userValue);
    p->next = *userNode;
    (*userNode) = p;

}
void insertLast(UserNode* userNode, User* userValue){
    UserNode* p;
    createUserNode(&p, userValue);
    UserNode* node = userNode;
    while(node->next != NULL){
        node = node->next;
    }
    node->next = p;

}
void insertAnywhere(UserNode* userNode, User* userValue, int n){
    UserNode* node1;
    createUserNode(&node1, userValue);

}
User* removeFirst(UserNode** userNode){

}
User* removeLast(UserNode* userNode){

}
void deleteUserList(UserNode** userNode){

}
