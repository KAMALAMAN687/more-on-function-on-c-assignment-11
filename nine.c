#include<stdio.h>
void square(int a);
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("square of entered number is " );
    square(n);
    return 0;
}
void square(int a)
{
    printf("%d",a*a);
}