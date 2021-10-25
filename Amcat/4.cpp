#include<iostream>
using namespace std;
int main()
{
    int i=0,j;
    string pra;
    cin>>pra;

    while(pra[i]!='\0')
    {
        if(pra[i]=='a' || pra[i]=='e' || pra[i]=='i' || pra[i]=='o' || pra[i]=='u')
              {
                  j=i;
                  while(pra[j]!='\0')
                  {
                      pra[j]=pra[j+1];
                      j++;
                  }
                  continue;
              }
        i++;
    }
    cout<<pra;
}
