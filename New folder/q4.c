#include<stdio.h>
int main()
{
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if(j==2)
            printf(" ");
            else
            printf("*");
        }
    printf("\n");
    }
}