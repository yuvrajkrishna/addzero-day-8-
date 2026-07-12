#include<stdio.h>

int main() {

    int n = 235;
    int temp = n;
    int sum = 0;

    int fact[10] = {1,1,2,6,24,120,720,5040,40320,362880};

    while(temp > 0){

        int digit = temp % 10;

        sum += fact[digit];

        temp /= 10;
    }

    if(sum == n)
        printf("%d is a Strong Number", n);
    else
        printf("%d is not a Strong Number", n);

    return 0;
}
