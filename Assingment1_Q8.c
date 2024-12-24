//WAP to print below mentioned pattern:
/*1
  01
  101
  0101
  10101*/
#include<stdio.h>
int main(){
    for(int i=0;i<=4;i++){
        for(int j=0;j<=i;j++){
            if(i%2==0 && j%2!=0 || i%2!=0 && j%2==0){
              printf("0");
            }
            else{
              printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}