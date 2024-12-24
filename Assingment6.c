#include <stdio.h>
int main()
{
    //Tic-Tac-Toe Game
    int n,m,i,j,h=1;
    char a='O',b='X',c,t[3][4] = {{'1', '2', '3', '\0'},{'4', '5', '6', '\0'},{'7', '8', '9', '\0'}};
    start:
    printf("Player 1:%c\n",a);
    printf("Player 2:%c\n",b);
    printf("\n\n");
    while (h>0)
    {
        printf("Player 1\n");
        pl1:
        printf("Enter the row");
        scanf("%d",&n);
        printf("Enter the column");
        scanf("%d",&m);
        if (t[n-1][m-1]=='O' || t[n-1][m-1]=='X')
        {
            printf("Entered Invalid\n");
            goto pl1;
        }
        else 
            t[n-1][m-1]=a;
        printf("\n");
        for (i=0;i<=2;i++)
        {
            for (j=0;j<=2;j++)
            {
                printf("%c ",t[i][j]);
            }
            printf("\n");
        }
        if  (  (t[0][0]==t[0][1] && t[0][0]==t[0][2]) || (t[1][0]==t[1][1] && t[1][0]==t[1][2]) 
            || (t[2][0]==t[2][1] && t[2][0]==t[2][2]) || (t[0][0]==t[1][0] && t[0][0]==t[2][0]) 
            || (t[0][1]==t[2][1] && t[0][1]==t[1][1]) || (t[0][2]==t[2][2] && t[0][2]==t[1][2]) 
            || (t[0][2]==t[1][2] && t[0][2]==t[2][0]) || (t[0][0]==t[1][1] && t[0][0]==t[2][2]))
        {
            printf("Player 1 wins the game");
            break;
        }
        printf("Player 2\n");
        pl2:
        printf("Enter row");
        scanf("%d",&n);
        printf("Enter column");
        scanf("%d",&m);
        if (t[n-1][m-1]=='O' || t[n-1][m-1]=='X')
        {
            printf("Entered Invalid\n");
            goto pl2;
        }
        else 
            t[n-1][m-1]=b;
        printf("\n");
        for (i=0;i<=2;i++)
        {
            for (j=0;j<=2;j++)
            {
                printf("%c ",t[i][j]);
            }
            printf("\n");
        }
        if  (  (t[0][0]==t[0][1] && t[0][0]==t[0][2]) || (t[1][0]==t[1][1] && t[1][0]==t[1][2]) 
            || (t[2][0]==t[2][1] && t[2][0]==t[2][2]) || (t[0][0]==t[1][0] && t[0][0]==t[2][0]) 
            || (t[0][1]==t[2][1] && t[0][1]==t[1][1]) || (t[0][2]==t[2][2] && t[0][2]==t[1][2]) 
            || (t[0][2]==t[1][2] && t[0][2]==t[2][0]) || (t[0][0]==t[1][1] && t[0][0]==t[2][2]))
        {
            printf("Player 2 wins the game");
            break;
        }
    }
    char ans;
    printf("\ndo you wish to continue playing:");
    scanf("%s", &ans);
    if(ans=="yes")
    goto start;
    else
    printf("\nthanku for playing the game");
    return 0;
}