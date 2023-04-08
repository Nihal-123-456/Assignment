#include<stdio.h>
int main()
{
    int x;
    printf("Enter amount of tk ");
    scanf("%d",&x);
    if(x>=10000)
    {
        if(x>20000)
        {
            printf("Gucci bag\nGucci belt");
        }
        else
        {
            printf("Gucci bag");
        }
    }
    else if(x>=5000)
    {
        printf("Levis bag");
    }
    else
    {
        printf("Something");
    }
    return 0;
}