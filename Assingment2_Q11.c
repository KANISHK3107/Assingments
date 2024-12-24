//Way to implement Insert -Front, any position in between & end in an array. Print the array before insert & after insert.
#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    int i, x, pos;

    // initial array of size 10
    for (i = 0; i < n; i++)
        arr[i] = i + 1;

    // print the original array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // element to be inserted
    printf("enter the number to be inserted:");
    scanf("%d", &x);

    // position at which element
    // is to be inserted
    printf("\nenter the position at which to be inserted:");
    scanf("%d", &pos);

    // increase the size by 1
    n++;

    // shift elements forward
    for (i = n - 1; i >= pos; i--)
        arr[i] = arr[i - 1];

    // insert x at pos
    arr[pos - 1] = x;

    // print the updated array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}