
#include "user.h"
#include "lab_manager.h"

int main() {
    ///Create user
    lab3();
    printf("\n");

    User *user = createUser("Michael Scott", TEACHER, MALE, MATHEMATICS_INFORMATICS, 6, 8, 1966);
    printUser(user);
    printf("\n");

    ///Create product
    Product *product = createProduct("MS3", "Tomato", GROCERY, 20, 26.36);
    printProduct(product);
    return 0;
}
