//
// Created by Johanna on 3/1/2022.
//

#ifndef SAPISALES_ERRORS_H
#define SAPISALES_ERRORS_H
enum ErrorType {
    MEMORY_ALLOCATION,
    FILE_NOT_FOUND,
    NULL_POINTER_EXCEPTION,
};

void printErrorMessage(enum ErrorType errorType);

#endif //SAPISALES_ERRORS_H
