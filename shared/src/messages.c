//
// Created by Johanna on 3/1/2022.
//

#include "messages.h"
#include <stdio.h>
void printDescriptionMessage(enum LabType messageType){
    switch(messageType){
        case LAB2:
            printf("\n****************************************************************\n");
            printf("Testing basic User and Product functionalities");
            printf("\n****************************************************************\n");
            break;
        case LAB3:
            printf("\n****************************************************************\n");
            printf("Testing User with modified BirthDate and UserArray functionalities");
            printf("\n****************************************************************\n");
            break;
        default:
            printf("Undefined description\n");
            break;
    }
}