/*WAP to print following Pyramid:
0        0
01      01
010    010
0101  0101
0101001010*/
#include<stdio.h> 
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<10;j++){
            if(j==1||i==1 && j==10 || i==2 && j==9 || i==3 && (j==3 || j==8 || j==10) || i==4 && (j==3 || j==7 || j==9) || i==5 && (j==3
            || j==5 || j==6 || j==8 || j==10)){
                printf("0");
            }
            if( i==2 &&( j==2|| j==10) || i==3 && (j==2 || j==9) || i==4 && (j==2 || j==4 || j==8 || j==10)||i==5 && (j==2 || j==4 || j==7 || j==9)){
                printf("1");
            }
            else
            printf("_");
            }
        printf("\n");
        }
    return 0;
    }
