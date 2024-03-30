// Corrected code version of tempfile_vulnerable.c
// Automatically deletes the temporary file after program execution.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* tmp = tmpfile();
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

    rewind(tmp);     // similar to fseek by returning to the beginning of the file.
    char buf[256];
    while (fgets(buf, sizeof(buf), tmp) != NULL)
        printf("%s", buf);
    return 0;
}