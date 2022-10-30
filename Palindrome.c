#include<stdio.h>
 int main()
{
    int n,r,re=0,t;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        re=(re*10)+r;
        n=n/10;
    }
    if (t==re)
    printf("True");
    else
    printf("False");
    return 0;
    
}