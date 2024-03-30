// Here the amount of content to copy is specified in the strncpy function.

#include <stdio.h>
#include "string.h"

int main(int argc, char* argv[]) {
    if (argc <= 1)
        return -1;
    char input[5];
    strncpy(input, argv[1], 4);
    printf("You typed %s\n", input);
    return 0;
}