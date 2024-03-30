// corrected code for freeing allocated memory twice

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char* p = (char*) malloc(5);
    char* q = (char*) malloc(5);
    char* r = (char*) malloc(5);
    free(p);
    free(q);
    free(r);
    return 0;
}