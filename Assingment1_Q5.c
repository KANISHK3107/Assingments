//Way to check whether number is Perfect Number or not.
#include<stdio.h>
int main(){
    int num,sum=0;
    printf("enter the number to be checked:");
    scanf("%d", &num);
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        printf("the given no. is a perfect no.");
    }
    else{
        printf("the given no. is not a perfect no.");
    }
    return 0;
}