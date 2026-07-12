#include <stdio.h>

int main() {
    int binary;
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    int decimal = 0;
    int power = 1;

    while (binary > 0) {
        int bit = binary % 10;

        // Validate binary digit
        if (bit != 0 && bit != 1) {
            printf("Invalid binary number!\n");
            return 0;
        }

        decimal += bit * power;
        power *= 2;
        binary /= 10;
    }

    printf("Decimal = %d\n", decimal);

    return 0;
}