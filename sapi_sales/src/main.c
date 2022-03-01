
#include "user.h"
#include "lab2.h"

int main() {
    ///Create user
    User *user = createUser("Michael Scott", TEACHER, MALE, MATHEMATICS_INFORMATICS, 1962);
    printUser(user);

    ///Create product
    Product *product1 = createProduct("MS1", "Apple", FRUIT, 10);
    Product *product2 = createProduct("MS2", "Book", SCHOOL, 4);
    Product *product3 = createProduct("MS3", "Tomato", GROCERY, 20);

    printProduct(product1);
    printProduct(product2);
    printProduct(product3);
    return 0;
}
