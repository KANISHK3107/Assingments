// Way to accept two integer numbers and swap them using 4 different methods in C language.
#include<stdio.h>
int main(){
    int a,b,x,y,c;
    printf("enter number x:");
    scanf("%d", &x);
    printf("enter number y:");
    scanf("%d", &y);
    a=x;
    b=y;
    //first method
    c=x;
    x=y;
    y=c;
    printf("\nx:%d, y:%d", x,y);

    //second methond
    x=a;
    y=b;
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\nx:%d y:%d", x,y);

    //third method
    x=a;
    y=b;
    x=x^y;
    y=x^y;
    x=x^y;
    printf("\nx:%d y:%d", x,y);

    //forth method
    x=a;
    y=b;
    x=x+y-(y=x);
    printf("\nx:%d y:%d", x,y);

    return 0;
}
