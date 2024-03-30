// Integer Overflow Vulnerability Corrected

#include <stdio.h>
#include "string.h"
#include "stdlib.h"

int balance = 5000;

void transfer(int number, int amount) {
    printf("Transferring %i to recipient %i.\n", amount, number+1);
}

int performTransfers(int number, int amount) {
    for (int i = 0; i < number; i++) {
        if (amount <= balance) {
            transfer(i, amount);
            balance -= amount;
        } else {
            printf("Transfer to recipient %i failed. Insufficient balance.", i+1);
            return 0;
        }
    }
    return 1;
}

int main (int argc, char** argv) {
    printf("Total balance: %i\n", balance);
    if (argc > 2) {
        int numRecipients = atoi(argv[1]);         // atoi converts string to integers
        int amount = atoi(argv[2]);
        performTransfers(numRecipients, amount);
    } else {
        printf("Invalid call\n");
    }
}