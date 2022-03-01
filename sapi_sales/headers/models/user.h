//
// Created by Johanna on 3/1/2022.
//

#ifndef SAPISALES_USER_H
#define SAPISALES_USER_H

#include <stdlib.h>
#include "useful.h"
#include "errors.h"
#include "messages.h"

enum UserType {
    STUDENT,
    TEACHER
};

enum Gender {
    FEMALE,
    MALE
};

enum Specialization {
    INFORMATICS,
    COMPUTER_SCIENCE,
    AUTOMATION,
    TELECOMMUNICATION,

    MATHEMATICS_INFORMATICS,
    ENGINEERING
};

typedef struct {
    unsigned int id;
    char name[50];
    enum UserType type;
    enum Gender gender;
    enum Specialization specialization;
    unsigned int birthYear;
}User;
char* getSpecializaion(enum Specialization specialization);
char* getUserType(enum UserType type);
char* getGender(enum Gender type);

User* createUser(
    char* name,
    enum UserType type,
    enum Gender gender,
    enum Specialization specialization,
    unsigned int birthYear);

void printUser(User *user);
#endif //SAPISALES_USER_H
