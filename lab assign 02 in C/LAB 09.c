
#include<stdio.h>
int prime_count(int* x);
float average(int* arr,int n);
int main()
{
    int ar[105];
    int n;
    int i;
    int count=0;
    printf("TOTAL NUMBER OF ELEMENT IN THE ARRAY>>\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("THE %dth INDEX OF ARRAY>>",i);
        scanf("%d",&ar[i]);
        if(prime_count(&ar[i])==1)
        {
            count++;
        }
    }
    printf("\n Total amount of prime number is..... %d\n",count);
    printf("Even Average= %.2f\n",average(&ar,n));
    return 0;
}
int prime_count(int* x)
{
    int sum=0;
    if(*x==1)
    {
        return 0;
    }
    else
    {
        for(int i=2; i<*x; i++)
        {
            if(*x%i==0)
            {
                return 0;
            }
        }
    }
    return 1;
}
float average(int* arr,int n)
{
    int sum = 0,count=0;
    for (int i = 0; i<n; i++)
    {
        if (arr[i]%2==0)
        {
            sum+=arr[i];
            count++;
        }
    }
    float average=sum/count;
    return average;
}
