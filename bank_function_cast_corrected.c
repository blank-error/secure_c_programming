// Integer Underflow Vulnerability

#include <stdio.h>
#include "stdlib.h"

int balance = 10;

void transfer(uint value) {                      // uint is unsigned integer.
    printf("Transferring %u.\n", value);
    balance -= value;
}

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Invalid call.\n");
        return -1;
    }
    int a = atoi(argv[1]);
    if (a >= 0) {
        printf("Balance is %i.\n", balance);
        if (a < balance)
            transfer(a);
    } else {
        printf("Invalid input.\n");
    }
    return 0;
}