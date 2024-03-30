// Implicit Typecast
// Signed values are 0 or less
// Unsigned values are 0 or more so -4 changes into a high value in the if statement
// therefore a greater than b
// -4 has 1 in the most significant bit(MSB)

int main() {
    unsigned int b = 5;
    int a = -4;
    if (a > b)                       // Integer underflow vulnerability
        printf("A is greater\n");
    return 0;
}