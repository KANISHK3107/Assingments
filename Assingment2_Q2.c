//WAP to print grade of students as per their marks given in an array. (>=75-- A grade, 74 to 60--B Grade, 59 to 40--C grade below 40--D grade).
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
        if(marks[i]>=75 && marks[i]<=100){
        printf("student %d scored A grade\n",i+1);}
        else if(marks[i]>=60 && marks[i]<75){
        printf("student %d scored B grade\n",i+1);}
        else if(marks[i]>=40 && marks[i]<60){
        printf("student %d scored C grade\n",i+1);}
        else if(marks[i]>=0 && marks[i]<40){
        printf("student %d scored D grade\n",i+1);}
        else{
        printf("student %d has an invalid score\n",i+1);}
    }
    return 0;
}