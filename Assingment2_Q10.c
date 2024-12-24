//Way to count prime numbers in an array.
#include<stdio.h>
int main(){
    
    int num[5],flag=0,cnt,i,j;
    for(i=0;i<=4;i++)
    {
        printf("enter the %d number:",i+1);
        scanf("%d", &num[i]);
    }
    for(i=0;i<=4;i++){
        flag=0;
        for(j=2;j<=num[i]/2;j++)
        {
            if(num[i]%j==0)
            flag=1;
            
        }
        if(flag==0)
        cnt++;
    }
    printf("number of prime number:%d", cnt);
    return 0;
}