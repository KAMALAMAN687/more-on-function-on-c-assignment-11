#include<stdio.h>
int hcf(int a,int b)
{
    int c;
    for(c=a<b?a:b;c<=a*b;c--)
    {
        if(a%c==0&&b%c==0)
        return c;
    }
}
int hcf(int,int);
int main()
{
    int x,y,z;
    printf("enter two numbers : ");
    scanf("%d%d",&x,&y);
    z=hcf(x,y);
    printf("hcf is %d",z);
    return 0;
}