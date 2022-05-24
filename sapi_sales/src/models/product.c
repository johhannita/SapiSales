//
// Created by Johanna on 3/1/2022.
//
#include "product.h"

char* getProductType(enum ProductType type){
    switch (type) {
        case GROCERY:
            return "Grocery";
        case VEGETABLE:
            return "Vegetable";
        case FRUIT:
            return "Fruit";
        case SCHOOL:
            return "School";
        case OBJECT:
            return "Object";
        default:
            return "Undefined";
    }
}
void createProduct(Product** product){
    (*product)= malloc(sizeof(Product));
    if(!(*product)){
        printErrorMessage(MEMORY_ALLOCATION);
    }
    (*product)->id = (int)++numberOfProducts;
}

void setProduct(Product** product, char* name, enum ProductType productType, int amount) {
    if(*product == NULL){
        createProduct(product);
    }

    (*product)->id = numberOfProducts += strlen(name);
    (*product)->name = name;
    (*product)->type = productType;
    (*product)->amount = amount;
    (*product)->timestamp = time(NULL);
    (*product)->code = generateProductCode(**product);
}

char* generateProductCode(Product product){
    char* code = (char*)malloc((10+1) * sizeof(char));
    long long int ts = (long long int)product.timestamp;
    int index = 0;

    while (ts){
        code[index++] = 'A' + (ts % 10) + product.id;   // shift code by id to make it unique;
        ts /= 10;
    }
    code[index] = '\0';

    return code;
}

void printProduct(Product* product){
    if(!product){
        printErrorMessage(NULL_POINTER_EXCEPTION);
    }
    else{
        printf("\nDetails of product #%i: \n", product->id);
        printf("Code:           %s \n", product->code);
        printf("Name:           %s \n", product->name);
        printf("Type:           %s \n", getProductType(product->type));
        printf("Amount:         %i \n", product->amount);
        printf("Timestamp:      %li \n\n", product->timestamp);
    }
}

void deleteProduct(Product **product) {
    if(*product != NULL){
        free(*product);
        *product = NULL;
        printDeleteMessage(PRODUCT);
    }
}