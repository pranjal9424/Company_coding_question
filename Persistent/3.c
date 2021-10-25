#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
  char c;
     for(int i=0;i<n;i++)
     {
         cin>>c;
         if(!(c=='a' || c=='e' || c=='o' || c=='u' || c=='i'))
            count++;
     }
     cout<<count;
        return 0;
}
