#include<stdio.h>

int main ( ) {

    int n = 99;

    int max = n%10; 

    int sec = -1;

    n /= 10;

    while(n > 0 ){

        int lastdigit = n % 10;

        if(max < lastdigit){
            sec = max;
            max = lastdigit;

        }
        else{
            if(sec < lastdigit && lastdigit != max){
                sec = lastdigit;
            }
            
        }

        n /= 10;
    }

    printf("%d",sec);

    return 0 ;

} 