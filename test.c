#include<stdio.h>
char *mygets(char *str, int size)
{
    char *sp, *p;
    sp = fgets(str,size,stdin);
    if(sp)
    {
        p = sp;
        while(*p && *p !='\n')
            p++;
        *p = '\0';
    }
    return sp;
}

int atoi(char*str)
{
 
}
int main()
{
    char s[80];
    while ( mygets(s,80)!=NULL)
    {
        printf("%d\n",atoi(s));
    }
}

