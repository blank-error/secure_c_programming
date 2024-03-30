// Null pointer

#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    if (argc < 2) {                                      // User needs to provide at least 1 argument
        printf("Invalid call. Provide a filename.\n");
        return -1;
    }
    char* filename = argv[1];
    FILE* fp = fopen(filename, "r");
    char buf[100];
    fread(buf, 99, 1, fp);            // Reads first 99 characters from a file
    printf("%s\n", buf);
    return 0;
}