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
void createU(User* user){
    user = malloc(sizeof(User));
}

void deleteUser(User* user){
    free(user);
}


User* getUserData(User* user,
                  char* name,
                  enum UserType type,
                  enum Gender gender,
                  enum Specialization specialization,
                  unsigned int day,
                  unsigned int month,
                  unsigned int year){
    BirthDate* birthDay = malloc(sizeof (BirthDate));
    birthDay->day = day;
    birthDay->month = month;
    birthDay->year = year;
    user->id = ++numberOfUsers;
    user->specialization = specialization;
    user->birthDay = birthDay;
    user->gender = gender;
    user->type = type;
    strcpy(user->name, name);
    return user;
}

User* createUser (char* name,
                  enum UserType type,
                  enum Gender gender,
                  enum Specialization specialization,
                  unsigned int day,
                  unsigned int month,
                  unsigned int year){
    User* newUser = malloc(sizeof(User));
    BirthDate* birthDay = malloc(sizeof (BirthDate));
    birthDay->day = day;
    birthDay->month = month;
    birthDay->year = year;
    newUser->id = ++numberOfUsers;
    newUser->specialization = specialization;
    newUser->birthDay = birthDay;
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
           "\t - BIRTH DAY: %i.%i.%i.",
           user->name,
           user->id,
           getUserType(user->type),
           getGender(user->gender),
           getSpecializaion(user->specialization),
           user->birthDay->day,
           user->birthDay->month,
           user->birthDay->year);

}