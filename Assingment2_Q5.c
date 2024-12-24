//to find sum of all scores in marks array
#include<stdio.h>
int main(){
    int i,n,c=0; 
    printf("enter no. of students:");
    scanf("%d", &n);
    int marks[n];
    for(i=0;i<n;i++){
       printf("enter marks of %d student:", i+1);
       scanf("%d", &marks[i]);
    }
    for(i=0;i<n;i++){
        c+=marks[i];
        }
     printf("total marks of all students are:%d", c);  
        
    
    return 0;
}