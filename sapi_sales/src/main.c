
#include "user.h"


int main() {
    ///Create user
    User *user = createUser("Michael Scott", TEACHER, MALE, MATHEMATICS_INFORMATICS, 1962);
    printUser(user);

    return 0;
}
