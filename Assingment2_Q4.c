//to write a program to find who and how many student have scored 99 in an array marks
#include<stdio.h>
int main(){
    int i,n,flag=0; 
    printf("enter no. of students:");
    scanf("%d", &n);
    int marks[n];
    for(i=0;i<n;i++){
       printf("enter marks of %d student:", i+1);
       scanf("%d", &marks[i]);
    }
    for(i=0;i<n;i++){
        if(marks[i]==99){
        printf("student %d has scored:%d\n",i+1, marks[i]);
        flag++;
         }
        }
    if(flag==0){
    printf("no one scored 99");
    }
    else {
        printf("the no. of student who scored 99 are:%d",flag);
    }
    return 0;
}