#include<stdio.h>
int the_fun(int x);
int main()
{
    int n;
    printf("enter any num>>");
    scanf("%d",&n);
    printf("%d",the_fun(n));
    return 0;
}
int the_fun(int x)
{
    int flag=1;
    int sum=0;
    for(int i=1; i<=x; i++)
    {
        sum=sum+i*flag;
        if (i%3==0)
        {
            if(flag==1)
            {
                flag =-1;
            }
            else if(flag==-1)
            {
                flag=1;
            }
        }
    }
    return sum;
}
