#include <bits/stdc++.h>
using namespace std;
bool isPerfectSquare(long double x)
{
  long double sr = sqrt(x);
  return ((sr - floor(sr)) == 0);
}
int main() {
  int n,x,c=0;
  cin>>n;
  while(n--)
  {
      cin>>x;
  if (isPerfectSquare(x))
    c++;
  }
  cout<<c;
  return 0;
}

/*
            input : 8
                    79 77 54 81 48 34 25 16
           output : 3
             exp : [81,25,16]=3
*/
