// User input is decided to be a string

#include <stdio.h>

int main(int argc, char* argv[]) {
    if (argc < 2)
        return -1;
    printf("%s\n", argv[1]);
}