/*Given an array, the task is to cyclically rotate the array clockwise by one time.
Examples:
Input: arr[] = {1, 2, 3, 4, 5}
Output: arr[] = {5, 1, 2, 3, 4}
Input: arr[] = {2, 3, 4, 5, 1}
Output: {1, 2, 3, 4, 5}*/
#include<stdio.h>
int main(){
    int n,i,x;
    printf("enter the size of array:");
    scanf("%d",&n);
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

    x=nums[n];
    n++;

    for (i = n - 1; i >= 1; i--)
    nums[i] = nums[i - 1];
    
    nums[1]=x;

    printf(" the updated array is:[");
    for(i=1;i<=n-1;i++)
    printf("%d,", nums[i]);
    printf("]");
    

    return 0;
}