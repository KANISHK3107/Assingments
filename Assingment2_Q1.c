//Way to increase every student mark by 5 & then print the updated array.
#include<stdio.h>
int main(){
    int n;
    printf("enter the no. of students:");
    scanf("%d", &n);
    int marks[n];
    for(int i=0;i<=n-1;i++){
        printf("enter the marks of student %d:",i+1);
        scanf("%d", &marks[i]);
    }
    for(int i=0;i<=n-1;i++){
        printf("marks of %d student=%d\n",i+1,marks[i]+5);
    }
    return 0;
}