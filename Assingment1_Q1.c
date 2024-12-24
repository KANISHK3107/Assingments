#include<math.h>//Way to check whether a given number is Armstrong or not.
#include<stdio.h>
int main(){
    int n,x,result=0,rem,orgN;
    printf("enter the no. to be checked:");
    scanf("%d", &x);
    printf("enter the total dogits in the number:");
    scanf("%d", &n);
    orgN=x;
    while(x!=0){
        rem=x%10;
        result+=pow(rem,n);
        x=x/10;

    }
    printf("%d", result);
    if(result==orgN)
    printf(" is an armstrong number");
    else
    printf(" is not an armstrong number");

    return 0;
}