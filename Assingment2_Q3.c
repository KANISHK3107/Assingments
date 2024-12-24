//WAP to find who scored first “99” in an array marks.
#include<stdio.h>
int main(){
    int i,n; 
    printf("enter no. of students:");
    scanf("%d", &n);
    int marks[n];
    for(i=0;i<n;i++){
       printf("enter marks of %d student:", i+1);
       scanf("%d", &marks[i]);
    }
    for(i=0;i<n;i++){
        if(marks[i]==99){
        printf("student %d first scored:%d\n",i+1, marks[i]);
        break;
        }
        else{}
        
    }
    return 0;
}