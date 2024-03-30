// Corrected code version of file_vulnerable.c
// Prevents potentially malicious files from the previous higher directory being opened.
// Example: "../file.txt"

#include <stdio.h>
#include <regex.h>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Please provide a filename to print.\n");
        return -1;
    }
    char* filename = argv[1];

    regex_t reg;
    if (regcomp(&reg, ".*[.][.].*", 0) == -1) {      // regcomp = compiled regular expression
        printf("Regex compilation failed.\n");
        return -1;
    }
    if (!regexec(&reg, filename, 0, NULL, 0)) {
        printf("Invalid filename.\n");
        return -1;
    }
    FILE* fp = fopen(filename, "r");
    if (!fp) {
        printf("Invalid filename.\n");
        return -1;
    }
    char buf[50];
    while (fgets(buf, sizeof(buf), fp))
        printf("%s", buf);
    return 0;
}