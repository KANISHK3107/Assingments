/*way to make a simple calculator with the functionalities of the application are mentioned below:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Logarithmic values
6. Square roots*/
#include<stdio.h>
#include<math.h>
void add(void);
void substract(void);
void multiply(void);
void divide(void);
void logr(void);
void Sqr(void);
int main(){
    int num,ans;
    printf("this is a simple calculator");
    start:
    printf("\nenter the corresponding number for the operation to be performed");
    
    printf("\n'1' for Addition");
    printf("\n'2' for Substraction");
    printf("\n'3' for Multiplication");
    printf("\n'4' for Division");
    printf("\n'5' for logarithmic values");
    printf("\n'6' for Sqaure root");
    
    printf("\nenter the operation number:");
    scanf("%d", &num);
    switch(num)
    {
    case 1:
    add();
    printf("\ndo you wish to continue(Y/N):");
    scanf("%s", &ans);
    if(ans=='Y')
    goto start;
    else{
    printf("thanku for using the calculator")
    break;}

    case 2:
    substract();
    printf("\ndo you wish to continue(Y/N):");
    scanf("%s", &ans);
    if(ans=='Y')
    goto start;
    else{
    printf("thanku for using the calculator")
    break;}

    case 3:
    multiply();
    printf("\ndo you wish to continue(Y/N):");
    scanf("%s", &ans);
    if(ans=='Y')
    goto start;
    else{
    printf("thanku for using the calculator")
    break;}

    case 4:
    divide();
    printf("\ndo you wish to continue(Y/N):");
    scanf("%s", &ans);
    if(ans=='Y')
    goto start;
    else{
    printf("thanku for using the calculator")
    break;}

    case 5:
    logr();
    printf("\ndo you wish to continue(Y/N):");
    scanf("%s", &ans);
    if(ans=='Y')
    goto start;
    else{
    printf("thanku for using the calculator")
    break;}

    case 6:
    Sqr();
    printf("\ndo you wish to continue(Y/N):");
    scanf("%s", &ans);
    if(ans=='Y')
    goto start;
    else{
    printf("thanku for using the calculator")
    break;}

    default:
    printf("\nthe number entred is invalid");
    printf("\ndo you wish to continue(Y/N):");
    scanf("%s", &ans);
    if(ans=='Y')
    goto start;
    else{
    printf("thanku for using the calculator")
    break;}
    
    }
    return 0;
}
void add(void){
    int x,y;
    printf("enter first number:");
    scanf("%d",&x);
    printf("enter second number:");
    scanf("%d", &y);
    printf("sum of both numbers:%d", x+y);
    
}
void substract(void)
{
    int x,y;
    printf("enter first number:");
    scanf("%d",&x);
    printf("enter second number:");
    scanf("%d", &y);
    printf("sum of both numbers:%d", x-y);
}
void multiply(void)
{
    int x,y;
    printf("enter first number:");
    scanf("%d",&x);
    printf("enter second number:");
    scanf("%d", &y);
    printf("sum of both numbers:%d", (x*y));
}
void divide(void)
{
    int x,y;
    printf("enter first number:");
    scanf("%d",&x);
    printf("enter second number:");
    scanf("%d", &y);
    printf("sum of both numbers:%f", (x/y));
}
void logr(void)
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    printf("log of number %d:%f",x,log(x));
}
void Sqr(void)
{
    int x;
    printf("enter the number for log with base e:");
    scanf("%d",&x);
    printf("Square root of number %d:%f",x,sqrt(x));
}
