#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    int sum = x + y;
    int sub = x - y;
    int mult = x * y;
    float div = x*1.0 / y;
    printf("%d + %d = %d\n",x,y,sum);
    printf("%d - %d = %d\n",x,y,sub);
    printf("%d * %d = %d\n",x,y,mult);
    printf("%d / %d = %0.2f\n",x,y,div);
    return 0;


}