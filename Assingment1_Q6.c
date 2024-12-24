//Way to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
#include<stdio.h>
int main(){
    int x,y;
    printf("enter X coordinate:");
    scanf("%d", &x);
    printf("enter Y coordinate:");
    scanf("%d", &y);

    if(x>0 && y>0)
    printf("(%d,%d) lies in the first quadrant", x,y);
    else if(x<0 && y>0)
    printf("(%d,%d) lies in the second quadrant", x,y);
    else if(x<0 && y<0)
    printf("(%d,%d) lies in the third quadrant", x,y);
    else if(x>0 && y<0)
    printf("(%d,%d) lies in the forth quadrant", x,y);
    else
    printf("(%d,%d) doesnt lie in any quadrant ", x,y);

    return 0;
}