// array starts from 0 and copies and additional value

#include <stdio.h>
#include "string.h"

int main(int argc, char* argv[]) {
    if (argc <= 1)
        return -1;
    char input[5];
    strncpy(input, argv[1], sizeof(input));
    printf("You typed %s\n", input);
    return 0;
}