// Null pointer
// This file provides an if statement to check if a file exists or not

#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    if (argc < 2) {                                      // User needs to provide at least 1 argument
        printf("Invalid call. Provide a filename.\n");
        return -1;
    }
    char* filename = argv[1];
    FILE* fp;
    if (fp = fopen(filename, "r")) {
        char buf[100];
        fread(buf, 99, 1, fp);            // Reads first 99 characters from a file
        printf("%s\n", buf);
    } else {
        printf("Failed to open file.\n");
    }
    return 0;
}