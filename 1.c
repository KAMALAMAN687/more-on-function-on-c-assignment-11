#include<stdio.h>
int lcm(int,int);
int main()
{
    int x,y,s;
    printf("enter two numbers : ");
    scanf("%d%d",&x,&y);
    s=lcm(x,y);
    printf("lcm is %d",s);
    return 0;
}
int lcm(int a,int b)
{

    int c;
    for(c=1;c<=a*b;c++)
    {
        if(c%a==0&&c%b==0)
        return c;
    }
}