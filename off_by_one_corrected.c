// array starts from 0, so the size will be the length of array minus 1.

#include <stdio.h>
#include "string.h"

int main(int argc, char* argv[]) {
    if (argc <= 1)
        return -1;
    char input[5];
    strncpy(input, argv[1], sizeof(input)-1);
    printf("You typed %s\n", input);
    return 0;
}