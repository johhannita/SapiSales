//
// Created by Johanna on 3/1/2022.
//
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "user.h"

int numberOfUsers = 0;

char* getSpecializaion(enum Specialization specialization){
    switch (specialization) {
        case INFORMATICS:
            return "Informatics";
        case COMPUTER_SCIENCE:
            return "Computer Science";
        case AUTOMATION:
            return "Automation";
        case TELECOMMUNICATION:
            return "Telecommunication";
        case MATHEMATICS_INFORMATICS:
            return "Mathematics and Informatics";
        case ENGINEERING:
            return "Engineering";
        default:
            return "Undefined";
    }
}
char* getUserType(enum UserType type){
    switch (type){
        case STUDENT:
            return "Student";
        case TEACHER:
            return "Teacher";
        default:
            return "Undefined";
    }
}

char* getGender(enum Gender type){
    switch (type){
        case MALE:
            return "Male";
        case FEMALE:
            return "Female";
        default:
            return "Undefined";
    }
}
User* createUser (char* name, enum UserType type, enum Gender gender, enum Specialization specialization, unsigned int birthYear){
    User* newUser = malloc(sizeof(User));
    newUser->id = ++numberOfUsers;
    newUser->specialization = specialization;
    newUser->birthYear = birthYear;
    newUser->gender = gender;
    newUser->type = type;
    strcpy(newUser->name, name);
    return newUser;
}

void printUser(User *user){
    printf("%s details:\n"
           "\t - ID: %i\n"
           "\t - TYPE: %s\n"
           "\t - GENDER: %s\n"
           "\t - SPECIALIZATION: %s\n"
           "\t - BIRTH YEAR: %i\n",
           user->name,
           user->id,
           getUserType(user->type),
           getGender(user->gender),
           getSpecializaion(user->specialization),
           user->birthYear);
}