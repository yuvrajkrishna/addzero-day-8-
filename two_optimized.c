#include <stdio.h>

int main() {

    unsigned int n = 120;
    int started = 0;

    for (int i = 31; i >= 0; i--) {

        int bit = (n >> i) & 1;

        if (bit)
            started = 1;

        if (started)
            printf("%d", bit);
    }

    if (!started)
        printf("0");

    return 0;
}