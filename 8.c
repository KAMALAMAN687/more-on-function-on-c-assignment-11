#include<stdio.h>
void printpascal(int n);
int factorial(int a);

int combi(int n,int r);
int main()
{
    int n;
    printf("enter no. of rows of pascal triangleto print :");
    scanf("%d",&n);
    printpascal(n);

}
void printpascal(int n)
{
    int i,j,k,r;
    for(i=1;i<=n;i++)
    {
        k=1,r=0;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i&&j<=n-1+i&&k)
            {
                printf("%2d",combi(i-1,r));
                k=0;
                r++;

            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}
int factorial(int a)
{
    int p=1;
    while(a!=0)
    {
        p=p*a;
        a--;
    }
    return p;
}
int combi(int n,int r)
{
    
    return (factorial(n)/factorial(r)/factorial(n-r));
}
