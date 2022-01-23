#include<stdio.h>
void main()
{
    int a,b,diff;
    scanf("%d %d",&a,&b);
    if(b>a)
    {
        diff=b-a;
    }
    else
    diff=a-b;
    printf("Difference is %d",diff);
}