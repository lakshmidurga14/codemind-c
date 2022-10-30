#include<stdio.h>
int main()
{
    int s= 0 ,n,p=1;
    scanf("%d",&n);
    while (n > 0)
    {
        s+= n % 10;
        p*= n % 10;
        n /= 10;
    }
    if (s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
    
}