// Null pointer
// Here the null pointer returns nothing since it doesnt satisfy the if statement.

#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    char* c;               // c is uninitialized pointer so address will be 0 (null pointer)
    if (c)                 // c is 0 and 0 is false
        printf("%s\n", c);
    return 0;
}