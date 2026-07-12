#include <stdio.h>

int main (){
    int n = 5; 
    int sum = 1 ; 
    int sign = 0;

    for(int i = 2 ; i <= n ; i++){
        if(sign == 0){
            sum -= i;
            sign = 1;
        }
        else{
            sum += i;
            sign = 0;
        }
    }
    printf("%d",sum);
}