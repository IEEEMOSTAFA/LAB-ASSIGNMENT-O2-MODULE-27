//finished

#include<stdio.h>
#include<string.h>
void decend_function(int len,char str[])
{

     for(int i=0;i<len;i++)

    {
    for(int j=i+1;j<len;j++)
    {
        if(str[i]<str[j])
        {
            int temp;
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
    }

    }
    printf("%s",str);

}
int main()
{
 char str[50];
 fgets(str,sizeof(str),stdin);
 int len=strlen(str);
 decend_function(len,str);

}
