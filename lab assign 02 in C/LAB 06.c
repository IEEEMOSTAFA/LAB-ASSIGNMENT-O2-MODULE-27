
#include<stdio.h>
int five_fun(int a[],int len);
int three_fun(int a[],int len);
int main()
{
    int ar[105];
    int n;
    int i;
    printf("TOTAL NUMBER OF ELEMENT IN THE ARRAY.........<<");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("The %dth index of array >>",i);
        scanf("%d",&ar[i]);
    }
    int sum1=three_fun(ar,n);
    int sum2=five_fun(ar,n);
    int sum3=sum1+sum2;
    printf("%d",sum3);
    return 0;
}

int three_fun(int a[],int len)
{
    int count=0;
    for(int i=0; i<len; i++)
    {
        if(a[i]%3==0)
        {
            count++;
        }
    }
    return count;
}
int five_fun(int a[],int len)
{
    int count=0;
    for(int i=0; i<len; i++)
    {
        if(a[i]%5==0&& a[i]%3!=0)
        {
            count++;
        }
    }
    return count;
}
