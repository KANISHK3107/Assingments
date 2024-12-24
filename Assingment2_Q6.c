//WAP to find average score of the Marks array.
#include<stdio.h>
int main(){
    int i,n,c=0; 
    printf("enter no. of subjects:");
    scanf("%d", &n);
    int marks[n];
    for(i=0;i<n;i++){
       printf("enter marks of %d subject:", i+1);
       scanf("%d", &marks[i]);
    }
    for(i=0;i<n;i++){
        c+=marks[i];
        }
     printf("the average score of marks in all subjects:%d", c/n);  
        
    
    return 0;
}