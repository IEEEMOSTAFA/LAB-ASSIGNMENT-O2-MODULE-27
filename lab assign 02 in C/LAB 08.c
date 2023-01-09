
#include<stdio.h>
#include<string.h>
void borken_keybord(char array[]);
int main()
{
    char ar[100];
    scanf("%s",&ar);
    borken_keybord(ar);
    return 0;
}
void borken_keybord(char array[])
{
    int l =strlen(array);
    for(int i=0; i<l; i++)
    {
        if((i+1)%2==0)
        {
            printf("%c%c",array[i],array[i]);
        }
        else
        {
            printf("%c",array[i]);
        }
    }
}
