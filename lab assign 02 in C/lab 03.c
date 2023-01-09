//finished
#include<stdio.h>
void swap(int*x,int* y)
{
    printf("%d %d ",*x,*y);
}
int main()
{
    int a ,b;
    scanf("%d%d",&a,&b);
    swap(&a,&b);

}
