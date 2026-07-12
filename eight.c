#include<stdio.h>
int main(){

    int n = 1245;

    int missnum = n % 10;

    while(n > 0){
        int lastdigit = n % 10; 

        if(lastdigit == missnum){
            missnum -- ;
        }
        else{
            break;
        }
        n/=10;
    }



    printf("%d",missnum);
    
    return 0; 
}