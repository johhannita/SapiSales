//
// Created by Johanna on 3/1/2022.
//
#include "errors.h"
void printErrorMessage(enum ErrorType errorType){
    switch (errorType) {
        case MEMORY_ALLOCATION:
            printf("Error while allocating memory.\n");
            break;
        case FILE_NOT_FOUND:
            printf("Error. File not found.\n");
            break;
        case NULL_POINTER_EXCEPTION:
            printf("Error. NULL value.");
            break;
    }
}