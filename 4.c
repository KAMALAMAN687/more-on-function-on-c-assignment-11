#include<stdio.h>
int prime(int);
int main()
{ 
    int b,s;
    printf("enter a no. ");
    scanf("%d",&b);
    s=prime(b);
    printf("next prime number is %d",s);
    return 0;

}
int prime(int a)
{
    int c,d;
    for(c=a+1;c>=a;c++)
    {
        for(d=a;d>=2;d--)
        {
            if(c%d==0)
            break;
        }
        if(d==1)
        return c;
          
    }
    
}