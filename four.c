#include<stdio.h>

int factorial (int n ){
    int product = 1;
    for(int i = 1 ; i <= n ; i++){
        product *= i;
    }
    return product;
}

int main () {

    int n = 235 ;
    int temp = n;
    int sum = 0 ;

    while(temp > 0){
        int lastdigit = temp % 10;
        sum += factorial(lastdigit);
        temp/= 10;
    }

    if(sum == n){
    printf("%d is  a Strong Number ",n);
    }
    else{
        printf(" %d is not a Strong Number",n);
    }
    return 0;

}