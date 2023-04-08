#include<stdio.h>
int main()
{ 
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x>=9)
    {
        printf("Hello\n");
        if(x>=15)
        {
            printf("You");
        }
        else
        {
            printf("me");
        }
    }
    else
    {
            printf("grazie");
    }



    return 0;
}