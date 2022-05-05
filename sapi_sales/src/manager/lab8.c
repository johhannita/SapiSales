//
// Created by Johanna on 4/13/2022.
//

#include "lab8.h"
void testPorductListFunctionalities(){
    UserNode *front = NULL, *p;
    User* user1, *user2, *user3;
    createUser(&user1);
    setUserData(user1, "Michael Scott", TEACHER, MALE, MATHEMATICS_INFORMATICS, 1962, 6, 7);
    setUserData(user2, "Jim Halpert", STUDENT, MALE, INFORMATICS, 1979, 4, 28);
    setUserData(user3, "Pam Beesly", STUDENT, FEMALE, TELECOMMUNICATION, 1974, 9, 11);
    createUserNode(&front, user1);
    createUserNode(&front, user2);
    createUserNode(&front, user3);

}