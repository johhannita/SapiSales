//
// Created by Johanna on 3/1/2022.
//

#ifndef SAPISALES_ERRORS_H
#define SAPISALES_ERRORS_H
#include <stdio.h>
#include <stdlib.h>
#include "useful.h"
enum ErrorType{
    MEMORY_ALLOCATION,
    FILE_NOT_FOUND,
    NULL_POINTER_EXCEPTION,
    ADD_PRODUCT_ERROR,
    QUEUE_IS_FULL,
    QUEUEE_IS_EMPTY,
    ERR_REMOVIG_PRODUCT
};
void printErrorMessage(enum ErrorType errorType);
#endif //SAPISALES_ERRORS_H
