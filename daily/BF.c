#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

typedef struct
{
    char ch[MAXSIZE+1];
    int length;
} Sstring;

void BF(Sstring S,Sstring T,int pos)
{
    int i,j;
    i=0;
    j=0;
    while(i<=S.length&&j<=T.length)
    {
        if(S.ch[i]==T.ch[j])
        {
            ++i;
            ++j;
        }
        else
        {
            i=i-j+2;
            j=0;
        }
    if(j>T.length-1)
        printf("%d\n", i-T.length+1);
            }
}

int main()
{
    Sstring S,T;
    int pos=1;
    //scanf("%d",&pos);
    printf("输入长度和字符串！\n");
    printf("输入短的长度和字符串！\n");
    scanf("%d",&S.length);
    scanf("%s",S.ch);
    scanf("%d",&T.length);
    scanf("%s",T.ch);
   BF(S,T,pos);
   return 0;


}
