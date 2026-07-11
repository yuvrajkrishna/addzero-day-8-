#include <stdio.h>

int countDigit(int num, int digit) {
    int count = 0;

    while (num > 0) {
        if (num % 10 == digit)
            count++;
        num /= 10;
    }

    return count;
}

int isProcessed(int original, int current, int digit) {

    // current ke right side wale digits check karo
    while (current > 0) {

        if (current % 10 == digit)
            return 1;

        current /= 10;
    }

    return 0;
}

int main() {

    int n = 882398;
    int temp = n;

    while (temp > 0) {

        int digit = temp % 10;
        temp /= 10;

        if (!isProcessed(n, temp, digit)) {
            printf("%d : %d\n", digit, countDigit(n, digit));
        }
    }

    return 0;
}