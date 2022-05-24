//
// Created by Johanna on 5/12/2022.
//

#include "hash/product_hash.h"
void createProductHashTable(ProductHashTable** pProductHashTable, unsigned int capacity){
    (*pProductHashTable) = (ProductHashTable*)calloc(1, sizeof(ProductHashTable));
    (*pProductHashTable)->table = (Product**)calloc(capacity, sizeof(Product*));
    (*pProductHashTable)->capacity = capacity;
}

unsigned int productHash(unsigned int key){
    key = ((key >> 16) ^ key) * 0x45d9f3b;
    key = ((key >> 16) ^ key) * 0x45d9f3b;
    key = (key >> 16) ^ key;
    return key;
}

void insertIntoProductHashTable(ProductHashTable** pProductHashTable, Product* product, unsigned int key){
    unsigned int index = productHash(key) % (*pProductHashTable)->capacity;

    if ((*pProductHashTable)->table[index] != NULL){
        unsigned int emptySpot = (index + 1) % (*pProductHashTable)->capacity;

        while (emptySpot != index && (*pProductHashTable)->table[emptySpot] != NULL){
            emptySpot = (emptySpot + 1) % (*pProductHashTable)->capacity;
        }

        if (emptySpot == index){
            printErrorMessage(ADD_PRODUCT_ERROR);
            return;
        }
        else {
            index = emptySpot;
        }
    }

    createProduct(&(*pProductHashTable)->table[index]);
    memcpy((*pProductHashTable)->table[index], product, sizeof(Product));
}

Product* getFromProductHashTable(ProductHashTable* productHashTable, unsigned int key){
    unsigned int index = productHash(key) % productHashTable->capacity;

    if (productHashTable->table[index]->id != key){
        unsigned int searchedIndex = (index + 1) % productHashTable->capacity;

        while (searchedIndex != index && productHashTable->table[searchedIndex]->id != key){
            searchedIndex = (searchedIndex + 1) % productHashTable->capacity;
        }

        if (searchedIndex == index){
            return NULL;
        }
        else {
            index = searchedIndex;
        }
    }

    return productHashTable->table[index];
}

void removeFromProductHashTable(ProductHashTable** pProductHashTable, unsigned int key){
    unsigned int index = productHash(key) % (*pProductHashTable)->capacity;

    if ((*pProductHashTable)->table[index]->id != key){
        unsigned int searchedIndex = (index + 1) % (*pProductHashTable)->capacity;

        while (searchedIndex != index && (*pProductHashTable)->table[searchedIndex]->id != key){
            searchedIndex = (searchedIndex + 1) % (*pProductHashTable)->capacity;
        }

        if (searchedIndex == index){
            printErrorMessage(ERR_REMOVIG_PRODUCT);
            return;
        }
        else {
            index = searchedIndex;
        }
    }

    deleteProduct(&(*pProductHashTable)->table[index]);
}

void printProductHashTable(ProductHashTable* productHashTable){
    for (int i = 0; i < productHashTable->capacity; ++i) {
        if (productHashTable->table[i] != NULL){
            printf("%i: %i => %s \n", i, productHashTable->table[i]->id, productHashTable->table[i]->name);
        }
        else{
            printf("%i NULL => NULL\n", i);
        }
    }
}

void deleteProductHashTable(ProductHashTable** pProductHashTable){
    for (int i = 0; i < (*pProductHashTable)->capacity; ++i) {
        deleteProduct(&(*pProductHashTable)->table[i]);
    }
    free((*pProductHashTable)->table);
    (*pProductHashTable)->table = NULL;
    free((*pProductHashTable));
    (*pProductHashTable) = NULL;
}