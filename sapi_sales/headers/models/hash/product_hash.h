//
// Created by Johanna on 5/12/2022.
//

#ifndef SAPISALES_PRODUCT_HASH_H
#define SAPISALES_PRODUCT_HASH_H
#include "product.h"
#include "errors.h"
typedef struct ProductHashTable{
    Product** table;
    unsigned int capacity;
}ProductHashTable;
unsigned int productHash(unsigned int key);

void createProductHashTable(ProductHashTable** pProductHashTable, unsigned int capacity);

void insertIntoProductHashTable(ProductHashTable** pProductHashTable, Product* product, unsigned int key);

Product* getFromProductHashTable(ProductHashTable* productHashTable, unsigned int key);

void removeFromProductHashTable(ProductHashTable** pProductHashTable, unsigned int key);

void printProductHashTable(ProductHashTable* productHashTable);

void deleteProductHashTable(ProductHashTable** pProductHashTable);
#endif //SAPISALES_PRODUCT_HASH_H
