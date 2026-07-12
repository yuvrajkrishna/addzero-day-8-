#include<stdio.h>
int main(){

    int n = 12345;

    int val = 1;
    int missnum = (n % 10);

    while(n > 0){
        int lastdigit = n % 10; 

        if(lastdigit == missnum){
            missnum --;
        }
        else{
            val = 0;
            break;
        }
        n/=10;
    }


    if(val == 0){
        printf("%d",missnum);
    }
    else{
        missnum = 0 ;
        printf("%d",missnum);
    }
    
    return 0; 
}