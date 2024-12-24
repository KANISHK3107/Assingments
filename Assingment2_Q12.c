//WAP to implement delete-Front, any position in between & end in an array. Print the array before delete & after delete.
#include<stdio.h>
int main(){
    int i,n,pos;
    printf("enter the size of array:");
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
    printf("\nenter the position to be deleted:");
    scanf("%d", &pos);

    if(pos>n)
    printf("deletion in the array is not possible");
    else
    {
        for(i=pos;i<n+1;i++)
        {
            nums[i]=nums[i+1];
        }
        printf(" the updated array is:[");
    for(i=1;i<=n-1;i++)
    printf("%d,", nums[i]);
    printf("]");
    }
    return 0;
}