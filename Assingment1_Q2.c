//Way to read two integers and print their HCF (Highest Common Factor).
#include<stdio.h>
int main(){
    int x,y,n=0,fac;
    printf("enter first no.:");
    scanf("%d", &x);
    printf("enter second no.:");
    scanf("%d", &y);
    for(int i=1;i<=x && i<=y;i++){
        
        if(x%i==0 && y%i==0){
            fac=i;
        }

    }
    printf("%d is the HCF of two numbers", fac);


    return 0;
}