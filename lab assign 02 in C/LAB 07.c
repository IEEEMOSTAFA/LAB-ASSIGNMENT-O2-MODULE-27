#include<stdio.h>
void swap(int* x,int* y);
int main()
{
    int ar[105];
    int n;
    int i;
    int swaping_index1;
    int swaping_index2;
    ar[0]=0;
    printf("TOTAL NUMBER OF ELEMENT IN THE ARRAY......>>\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("THE  %dth >>\n",i);
        scanf("%d",&ar[i]);
    }
    int test;
    printf("ENTER THE TASTE_CASR NUMBER>>\n");
    scanf("%d",&test);
    for (int i=1; i<=test; i++)
    {
        scanf("%d",&swaping_index1);
        scanf("%d",&swaping_index2);
        swap(&ar[swaping_index1],&ar[swaping_index2]);
    }
    printf("THE MODIFIED ARRAY >>");
    for(i=1; i<=n; i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}
void swap(int* x,int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
