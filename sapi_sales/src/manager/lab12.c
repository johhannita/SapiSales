//
// Created by Johanna on 5/12/2022.
//


#include "lab12.h"

void testProductFunctionalities(){
    Hash *productHash;
    createHash(&productHash, 7);
    Product *products = calloc(100, sizeof(Product));
    for (int i = 0; i < 100; i++){
        createProduct(&products[i]);
    }
    srand(time(0));
    while(productHash->elements < productHash->capacity){

    }
}