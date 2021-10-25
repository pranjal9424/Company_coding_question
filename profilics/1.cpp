#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int l,m,e=0,o=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                e++;
                l=i+1;
            }else{
                o++;
                m=i+1;
            }
        }
        if(e==1)
            cout<<l<<endl;
        else
            cout<<m<<endl;

    }
}


/*
    input:- 2
            6
            4  6  90  2  1  78
            4
            2  1  67  47 1
   output:- 5
            1

*/
