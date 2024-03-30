// Integer Underflow Vulnerability
// When -4 is passed the transfer function converts the signed integer into an unsigned large integer value

#include <stdio.h>
#include "stdlib.h"

int balance = 10;

void transfer(uint value) { // uint is unsigned integer.
    printf("Transferring %u.\n", value);
    balance -= value;
}

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Invalid call.\n");
        return -1;
    }
    int a = atoi(argv[1]);
    printf("Balance is %i.\n", balance);
    if (a < balance)
        transfer(a);
    return 0;
}