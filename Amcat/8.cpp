
#include<bits/stdc++.h>
using namespace std;
string helper(string ss)
{
    vector<string> v;
    string temp;
    while(getline(ss,temp,' '))
    {
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++)
    {
        reverse(v[i].begin(),v[i].end());
    }
    string ans=v[0];
    for(int i=1;i<v.size();i++)
    {
        ans+=' ';
        ans+=v[i];
    }
    return ans;
}
int main()
{
    string s;
    cin>>s;
    cout<<helper(s);
}
