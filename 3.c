#include<stdio.h>
int prime(int);
int main()
{ 
    int b,s;
    printf("enter a no. ");
    scanf("%d",&b);
    s=prime(b);
    if(s=0)
    printf("not a prime");
    else
    printf("prime no.");
    return 0;

}
int prime(int a)
{
    int c;
    for(c=2;c<=a-1;c++)
    {
        if(a%c==0)
        {
            return 0;
        }    
    }
    if(c==a)
    {
      return 1;
    }  
}