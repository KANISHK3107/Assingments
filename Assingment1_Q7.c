//Way for Binary to Decimal conversion & Decimal to Binary for a given number as per user’s choice.
#include<stdio.h>
#include<math.h>
long long convertBD(long long);
long long convertDB(int);
int main(){
    int choice;
    printf("enter '1' to convert number from binary to decimal and '2' to convert number from decimal to binary");
    printf("\nenter your choice:");
    scanf("%d", &choice);

    if(choice==1){
        long long n;
        printf("Enter a binary number: ");
    scanf("%lld", &n);

    printf("%lld in binary = %lld in decimal", n, convertBD(n));
    }
    else if(choice==2){
        int n;
        long long bin;
  
        printf("Enter a decimal number: ");
        scanf("%d", &n);
  
        printf("%d in decimal =  %lld in binary", n, convertDB(n));

    }
    return 0;

}
long long convertBD(long long n){
    long long dec = 0;
    int i = 0, rem;

    while (n != 0) {
        rem = n % 10;
        dec += rem*pow(2,i);
        n /= 10;
        ++i;
}
return dec;
}
long long convertDB(int n){
long long bin = 0;
int rem, i = 1;

  while (n != 0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }

  return bin;
}