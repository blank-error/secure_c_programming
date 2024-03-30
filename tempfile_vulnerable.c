// Creating a temporary file to write into it and then read the file contents.
// Created temporary file remains even after the end of the program.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* tmp = fopen("tmp.txt", "w+");
    if (!tmp) {
        printf("Failed to create temporary file.\n");
        return -1;
    }

    size_t bufsize = 50;
    char* input = (char*) malloc(bufsize * sizeof(char));
    if (!input)
        return -1;
    size_t len;
    printf("Enter input to be written to file. Enter empty line to quit.\n");
    len = getline(&input, &bufsize, stdin);
    while (len > 1) {
        fputs(input, tmp);
        fputs("\n", tmp);
        len = getline(&input, &bufsize, stdin);
    }
    fseek(tmp, 0, SEEK_SET);
    char buf[256];
    while (fgets(buf, sizeof(buf), tmp) != NULL)
        printf("%s", buf);
    return 0;
}