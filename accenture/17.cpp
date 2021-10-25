#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int temp=num*2;
    int arr[temp];
    for(int i=0;i<temp;i++)
        cin>>arr[i];

    int m,n;
    int a=3,b=1,c=2,d=0;
    m=(arr[a]-arr[b])/(arr[c]-arr[d]);

    for(int i=2;i<num;i++){
        a+=2;
        b+=2;
        c+=2;
        d+=2;
        n=(arr[a]-arr[b])/(arr[c]-arr[d]);

        if(m!=n){
            cout<<"0";
            return 0;
        }
    }
        cout<<m<<"x-"<<m<<"y=0";
        return 0;
}

