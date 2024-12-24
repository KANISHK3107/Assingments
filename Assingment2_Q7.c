//WAP to check whether score is even or odd in an array.
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
        if(marks[i]%2==0)
        printf("student %d has scored even marks\n",i+1);
        else
        printf("student %d has scored odd marks\n",i+1);
        }
    return 0;
}