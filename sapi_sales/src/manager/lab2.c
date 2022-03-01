//
// Created by Johanna on 3/1/2022.
//
#include "lab2.h"
void testUserFunctionalities(){
    ///After lab2 this need to be commnted because the birth year of the user is changed to BirthDate struct
    //Declaring user pointers
   /* User *user1, *user2, *user3;

    ///Creating users
    createUser(&user1);
    createUser(&user2);
    createUser(&user3);

    ///Fill with data
    setUserData(user1, "Michael Scott", TEACHER, MALE, MATHEMATICS_INFORMATICS, 1962);
    setUserData(user2, "Jim Halpert", STUDENT, MALE, INFORMATICS, 1979);
    setUserData(user3, "Pam Beesly", STUDENT, FEMALE, TELECOMMUNICATION, 1974);


    ///Print user
    printUser(user1, CON);
    printUser(user2, CON);
    printUser(user3, CON);

    ///Delete users
    deleteUser(&user1);
    deleteUser(&user2);
    deleteUser(&user3);*/

    ///Create products
    Product *product1 = createProduct("MS1", "Apple", FRUIT, 10);
    Product *product2 = createProduct("MS2", "Book", SCHOOL, 4);
    Product *product3 = createProduct("MS3", "Tomato", GROCERY, 20);

    printProduct(product1);
    printProduct(product2);
    printProduct(product3);

}