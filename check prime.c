#include <stdio.h>

int main()
{
    //Program to test if the given number is Prime or not//
    int num,a;
    scanf("%d",&num);
    if(num>1){
        for(int i=2;i<num;i=i+1){
            if((num%i)==0){
                printf("%d is not a prime number",num);
                break;
            }
        else{
            a=5;
        }    
        }
        if(a==5){
            printf("%d is a prime number",num);
        }
        if(num==2){
            printf("%d is a prime number",num);
            
        }
    }
    else{
        printf("Please put number greater than 1 ");
        
    }
    return 0;
}
