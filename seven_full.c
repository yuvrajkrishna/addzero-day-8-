#include <stdio.h>

int main() {

    int n = 45963899;

    int max = n % 10;
    int sec = -1;

    n /= 10;

    while (n > 0) {

        int lastdigit = n % 10;

        if (lastdigit > max) {
            sec = max;
            max = lastdigit;
        }
        else if (lastdigit != max && lastdigit > sec) {
            sec = lastdigit;
        }

        n /= 10;
    }

    if (sec == -1)
        printf("No second largest digit");
    else
        printf("%d", sec);

    return 0;
}