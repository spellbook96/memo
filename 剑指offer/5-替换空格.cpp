#include <string>
#include <iostream>
using std::string;using std::cout; using std::endl;

string replaceSpace(string s)
{
    int count = 0;
    int length = s.length();
    for(int i=0;i<length;++i)
        if(s[i]==' ')
            ++count;
    int p1 = length-1;
    int p2 = length + 2*count -1;
    for(int i=0;i<2*count;++i)
        s.append(" ");
    while(p1!=p2)
    {
        if(s[p1]!=' ')
            s[p2--]=s[p1--];
        else
            {
                --p1;
                s[p2--]='0';
                s[p2--]='2';
                s[p2--]='%';
            }
    }

    return s;
}
char *replaceSpace(char *s)
{
    int count =0;
    int length =0;
    char *p1 = s;
    char *p2;
    while(*p1)
    {
        if(*p1++==' ')
            ++count;
        // ++length;
    }
    p2 = p1;
    for(int i = 0;i<count;++i)
        *p2++ = ' ';
    p2[1]='\0';
    // cout << count << " " << length;
    return s;
}
int main()
{
    string s = "We Are Happy";
    char str[50]= "We Are Happy";
    cout << replaceSpace(s) << endl;
    return 0;
}