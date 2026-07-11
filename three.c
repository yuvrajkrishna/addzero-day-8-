#include <stdio.h>

int main () {

    int n = 882398;


    while(n > 0){
        int lastdigit = n%10;
        int count = 0 ;
        int num = n;
        
        while(num >0){
            int s = num % 10;
            if(s==lastdigit){
                count++;
                num /= 10;
            }
            else{
                num/=10;
            }
        }
        

        n/=10;

        printf("%d is %d times \n",lastdigit,count);
    }
    

    return 0 ;

}