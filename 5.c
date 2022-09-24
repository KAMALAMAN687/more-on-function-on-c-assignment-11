 #include<stdio.h>
void printnaturalnumber(int n);
 int main()
 {
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    printnaturalnumber(n);
    return 0;
 }
 void printnaturalnumber(int n)
 {
    int i,j;
    for(i=2;n!=0;i++)
    {
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
            break;
            
        }
        if(j==i)
        {
            printf("%d\n",i);
            n--;
        }


    }
 }