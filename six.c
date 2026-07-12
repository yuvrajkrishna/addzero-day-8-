#include <stdio.h>
int main (){

    int n = 1101 ;
    int pow = 1;
    int sum = 0 ;
    while(n > 0){
        int lastdigit = n % 10 ;
        sum =  pow * lastdigit + sum;
        pow*=2;
        n /= 10;
    }

    printf("%d",sum);

    return 0 ;

}