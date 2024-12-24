//to find the peak element which is not smaller than its neighbors.
#include<stdio.h>
int main(){
    int i,n,c,flag=0; 
    printf("enter no. elements:");
    scanf("%d", &n);
    int num[n];
    for(i=0;i<n;i++){
       printf("enter  %d elements:", i+1);
       scanf("%d", &num[i]);

    
    }
    for(i=1;i<n-1;i++){
        if((num[i]>num[i-1])&&(num[i]>num[i+1])){
            printf("the peak elemnts is:%d\n",num[i]);
            flag++;
        }
        
    }
    if(flag==0){
       printf("there is no peak element"); 
    }
    else{
        printf("there is %d peak elements", flag);
    }
    return 0;
}