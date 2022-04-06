//
// Created by Johanna on 3/9/2022.
//

#include "lab3.h"
void testUserFunctionalities1(){
    User* user1 = createUser("Pam Beesley", STUDENT, FEMALE, COMPUTER_SCIENCE, 6, 9, 1989);
    UserArray* userArray;
    createUserArray(&userArray, MAX_USERS);
    addNewUser(userArray, user1, 0);
    getUserAtPosition(userArray, 0);
    deleteUserArray(&userArray);

}