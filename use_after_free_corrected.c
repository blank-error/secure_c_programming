// Correcting the use of dynamic memory after freeing the pointer

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char* p = (char*) malloc(10);
    strcpy(p, "Hello");
    strcpy(p, "Hi");
    printf("%s\n", p);
    free(p);
    return 0;
}