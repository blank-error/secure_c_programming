// Accepts a filename from user in the command line and prints the content of the file.

#include <stdio.h>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Please provide a filename to print.\n");
        return -1;
    }
    char* filename = argv[1];
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