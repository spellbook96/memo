#include <iostream>
#include <string>

using std::string; using std::cout; using std::endl;
string LCS(string str1, string str2)
{

    if(str1.empty() || str2.empty())
    {
        return "";
    }
    else if(str1[str1.size()-1] == str2[str2.size()-1])
    {
        char c = str1[str1.size()-1];
        str1.erase(str1.size()-1);
        str2.erase(str2.size()-1);
        return LCS(str1,str2) + c;
    }
    else
    {
        string t1 = str1;
        string t2 = str2;
        string s1 = LCS(t1.erase(t1.size()-1),str2);
        string s2 = LCS(str1, t2.erase(t2.size()-1));
        if (s1.size() > s2.size())
            return s1;
        else
            return s2;
    }
}

int main()
{
    // string str1 = "educational";
    // string str2 = "";
    
    string str1 = "educational";
    string str2 = "advantage";
    cout << LCS(str1,str2) << endl;
    return 0;
}