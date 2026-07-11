#include <stdio.h>

int main(){

    int n = 9875;

    if(n == 0)
        printf("0");
    else
        printf("%d", 1 + (n - 1) % 9);

    return 0;
}