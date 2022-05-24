//
// Created by Johanna on 3/23/2022.
//

#ifndef SAPISALES_PRODUCT_ARRAY_H
#define SAPISALES_PRODUCT_ARRAY_H
#include "product.h"
#include "errors.h"
#include <stdbool.h>

typedef struct {
    Product** product;
    unsigned int capacity;
    unsigned int numOfProducts;
}ProductArray;

void createProductArray(ProductArray** productArray, unsigned int maxProducts);
void deleteProductArray(ProductArray** productArray);
bool addNewProduct(ProductArray* productArray, Product* product);

#endif //SAPISALES_PRODUCT_ARRAY_H
