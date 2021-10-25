#include<iostream>
using namespace std;
int main()
{
    int n,k,sum=0;
    cin>>n;
    for(int j=1;j<=n;j++)
    {
        cin>>k;
        if(j%2==1)
            sum+=k;
    }
    cout<<sum;
}


/*            input : 7
                    2 -3 8 -6 -7 18 1
            output : 4
             expl : [2,8,-7,1]=4
*/