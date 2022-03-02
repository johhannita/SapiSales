//
// Created by Johanna on 3/1/2022.
//
#include <stdlib.h>
#include <stdio.h>
#include <sys/utime.h>
#include <string.h>
#include <time.h>
#ifndef SAPISALES_PRODUCT_H
#define SAPISALES_PRODUCT_H

enum ProductType {
    GROCERY,
    FRUIT,
    SCHOOL,
    OBJECT
};

typedef struct {
    char id[10];
    char name[20];
    enum ProductType type;
    unsigned int amount;
    time_t creationDate;
}Product;

char* getProductType(enum ProductType type);

Product* createProduct(
    char id[10],
    char name[20],
    enum ProductType type,
    unsigned int amount);

void printProduct(Product* product);
Product* getProductData(Product* product, char *id, char *name, enum ProductType type, unsigned int amount);
Product* deleteProduct(Product* product);
Product* createP(Product* product);

#endif //SAPISALES_PRODUCT_H
