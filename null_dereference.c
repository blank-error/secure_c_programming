// Null pointer
// program returns the null pointer.

#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    char* c;              // c is uninitialized pointer so address will be 0 (null pointer)
    printf("%s\n", c);
    return 0;
}