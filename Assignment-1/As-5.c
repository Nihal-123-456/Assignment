#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d",&n);
    if(n>1000)
    {
        printf("I will buy Punjabi\n");
        if(n>=1500)
            printf("I will buy new shoes\nAlisha will buy new shoes");
    }
    else
    {
        printf("Bad luck!\n");
    }
    return 0;
}