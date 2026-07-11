#include<stdio.h>
int main(){
    int n = 13;
    int place = 1;
    int bin = 0;

    while(n >  0){
        int rem = n % 2 ;

        bin += rem * place;

        place *= 10;

        n/=2;
    }

    printf("%d",bin);

    return 0 ;


}