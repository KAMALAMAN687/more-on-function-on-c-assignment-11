#include<stdio.h>
void series(int n);
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    series(n);
    return 0;

}
void series(int n)
{
    int a=-1,c,b=1,i;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }

}