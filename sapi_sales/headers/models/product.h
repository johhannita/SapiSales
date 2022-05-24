//
// Created by Johanna on 3/1/2022.
//

#ifndef SAPISALES_PRODUCT_H
#define SAPISALES_PRODUCT_H

#include <stdlib.h>
#include <sys/utime.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include "useful.h"
#include "messages.h"
#include "errors.h"

enum ProductType{
    GROCERY,
    FRUIT,
    SCHOOL,
    VEGETABLE,
    OBJECT
}ProductType;

typedef struct {
    int id;
    char* code;
    char* name;
    enum ProductType type;
    int amount;
    time_t timestamp;
}Product;

char* generateProductCode(Product product);
char* getProductType(enum ProductType type);

void createProduct(Product** product);
void setProduct(Product** product, char* name, enum ProductType productType, int amount);
void deleteProduct(Product** product);
void printProduct(Product* product);

#endif //SAPISALES_PRODUCT_H
