#include <stdio.h>

int main() {

    int binary = 1101;
    int decimal = 0;
    int power = 1;

    while (binary != 0) {

        int bit = binary % 10;
        decimal += bit * power;

        power *= 2;
        binary /= 10;
    }

    printf("Decimal = %d", decimal);

    return 0;
}