/* Given an array of n integers. The task is to print the duplicates in the given array.
If there are no duplicates then print -1.
Examples:
Input: {2, 10,10, 100, 2, 10, 11,2,11,2}
Output: 2 10 11
Input: {5, 40, 1, 40, 100000, 1, 5, 1}
Output: 5 40 1 */
#include<stdio.h>
int main(){
    int n,k[100]={0},i,j,x;
    printf("enter the size of the array:");
    scanf("%d", &n);
    int nums[n];

     for(i=1;i<=n;i++)
    {
        printf("enter %d number:", i);
        scanf("%d", &nums[i]);
    }
    printf("array:[");
    for(i=1;i<=n;i++)
    printf("%d,", nums[i]);
    printf("]");

    for(i=1;i<=n;i++)
    {
        x=nums[i];
        for(j=i+1;j<=n;j++)
        {
            if(nums[j]==x){
                k[j]=x;
                break;
            }
        }
    }
    for(j=0;j<=n;j++)
    printf("%d ",k[j]);
    return 0;
}