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
    free(productArray);
}
bool addNewProduct(ProductArray* productArray, Product *newProduct, unsigned int position){
    if((productArray)->capacity > position && position >= 0){
        (productArray)->product[position] = newProduct;
        return true;
    }
    else{
        return false;}
}
