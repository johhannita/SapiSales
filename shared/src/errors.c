//
// Created by Johanna on 3/1/2022.
//
#include "errors.h"
void printErrorMessage(enum ErrorType errorType){
    switch (errorType) {
        case MEMORY_ALLOCATION:
            printf("Bad memory allocation error\n");
            break;
        case FILE_NOT_FOUND:
            printf("File not found exception\n");
            break;
        case NULL_POINTER_EXCEPTION:
            printf("Nincs inicializalva\n");
            break;
        case ADD_PRODUCT_ERROR:
            printf("Cannot add new product exception\n");
            break;
        case ERR_REMOVIG_PRODUCT:
            printf("Cannot remove element\n");
            break;
        default:
            printf("Error occured\n");
            break;
    }
    exit(-1);
}