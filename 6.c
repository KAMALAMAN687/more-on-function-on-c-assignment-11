#include<stdio.h>
void printnaturalnumber(int ,int);
 int main()
 {
    int a,b;
    printf("enter a two numbers b/w them prime numbers to be needed ");
    scanf("%d%d",&a,&b);
    printnaturalnumber(a,b);
    return 0;
 }
 void printnaturalnumber(int a,int b)
 {
    int i,j;
    for(i=a+1;i<b;i++)
    {
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
            break;
            
        }
        if(j==i)
        {
            printf("%d\n",i);
            
        }


    }
 }