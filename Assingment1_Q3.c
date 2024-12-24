//Way to subtract two integers without using Minus (-) operator. (Hint Bitwise operator).
#include<stdio.h>
int main(){
    int x,y;
    printf("enter frist no. x:");
    scanf("%d", &x);
    printf("enter second no. y:");
    scanf("%d", &y); 
    while (y != 0)
        {
            int borrow = (~x) & y;
            x = x ^ y;
            y = borrow << 1;
        }
        printf("x-y is equal to:%d", x);
    
    return 0;
}