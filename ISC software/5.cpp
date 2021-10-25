#include <bits/stdc++.h>
using namespace std;
void reverseWords(string s)
{

    vector<string> tmp;
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == ' ')
        {
            tmp.push_back(str);
            str = "";
        }
        else
            str += s[i];
    }
    tmp.push_back(str);
    int i;
    for (i = tmp.size() - 1; i > 0; i--)
        cout << tmp[i] << ".";
    cout << tmp[0] << endl;
}

// Driver Code
int main()
{
    char s[100];
    scanf("%[^\n]s",s);
    reverseWords(s);
    return 0;
}

/*
input : my name is pranjal
            output : pranjal.is.name.my
*/