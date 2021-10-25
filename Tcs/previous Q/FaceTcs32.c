#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long
ll n,slen;

void fun (ll size,ll k,string s, ll l, ll *ingame)
{
	if(size==1)
	{
		ll i=1;
		while(ingame[i]!=1)
		{i++;

		}
		cout<<i<<endl;
		return;
	}
	if(l==slen) l=0;
	if(k==n+1)  k=1;
	if(ingame[k]==0)
	{

		fun(size,k+1,s,l,ingame);
	}
	else
	{
       if(s[l]=='x')
	   fun(size,k+1,s,l+1,ingame);
	   else{
		   ingame[k]=0;
		   fun(size-1,k+1,s,l+1,ingame);
	   }
	}
	return;
}

int main()
{
	cin>>n;
	string s;
	cin>>s;
	slen=s.length();
	ll ingame[n+1];
	for(int i =1;i<=n;i++)
	{
		ingame[i]=1;
	}
	fun(n,1,s,0,ingame);
}

