//
// Created by Johanna on 3/23/2022.
//


#include "array/product_array.h"

void createProductArray(ProductArray** productArray, unsigned int maxProducts){
    *productArray = (productArray*)malloc(1*sizeof(productArray));
    if(!(*productArray)){ printErrorMessage(MEMORY_ALLOCATION);}

    (*productArray)->product = (Product **)malloc(maxProducts*sizeof(Product*));
    if(!(*productArray)->product){ printErrorMessage(MEMORY_ALLOCATION);}

    (*productArray)->capacity = maxProducts;
    for(int i=0; i < (*productArray)->capacity; i++){
        (*productArray)->product[i] = NULL;
    }
}
void deleteProductArray(ProductArray** productArray){
    for (int i = 0; i < (*productArray)->numOfProducts; ++i) {
        free((*productArray)->product[i]);
    }

    free(*productArray);
    *productArray = NULL;
}
bool addNewProduct(ProductArray* productArray, Product* product){
    if (productArray->numOfProducts+1 > productArray->capacity){
        return false;
    }

    productArray->product[productArray->numOfProducts] = (Product*) calloc(1, sizeof(Product));
    if (productArray->product[productArray->numOfProducts] == NULL){
        return false;
    }

    memcpy(productArray->product[productArray->numOfProducts], product, sizeof(Product));
    if (productArray->product[productArray->numOfProducts] == NULL){
        return false;
    }

    productArray->numOfProducts++;
    return true;
}
