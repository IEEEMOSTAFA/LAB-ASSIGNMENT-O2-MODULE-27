#include<stdio.h>
void funxyx(int n)
{
    int len1;
    if((n/4)%2==0)
    {
        len1=n/4;
    }
    else
    {
        len1=(n/4)-1;
    }
    int len2=len1-2;

    int sum2=0;

    for(int i=len2; i<=len2+6; i+=2)
    {
        sum2=sum2+i;
    }
    if(n==sum2)
    {
        printf("%d + %d + %d + %d = %d\n",len2,len2+2,len2+4,len2+6,sum2);
    }
    else
    {
        printf("soryy did not match!!");
    }
}
int main()
{
    int n;
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
    scanf("%d",&n);
    funxyx(n);
    }
    return 0;
}
