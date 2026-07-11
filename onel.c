#include <stdio.h>
int sumofdigit(int n){
    int sum = 0;
    while(n > 0){
        int ls = n % 10 ;
        sum += ls;
        n /= 10;
    }
    return sum;
}
int main () {

    int n = 9875;
    int result = sumofdigit(n);
    while(result >= 10){
        int val = sumofdigit(result);
        result = val;
    }
    printf("%d",result);
    return 0 ; 
}