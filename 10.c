#include<stdio.h>
int factorial(int n);
float sumseries(int n);

int main()
{
int n;
float s;
printf("enter number of terms ");
scanf("%d",&n);
s=sumseries(n);
printf("sum of %d term in a series is%.2f",n,s);
return 0;
}
float sumseries(int n)
{
    int i ,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+factorial(i)/i;
        

    }
    return sum;
}
int factorial(int n)
{
    int p=1;
    while(n!=0)
    {
        p=p*n;
        n--;
    }
    return p;

}