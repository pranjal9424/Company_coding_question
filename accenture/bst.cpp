#include <vector>
#include <iostream>
using namespace std;
vector<vector<long long> > table;
long long dfs(vector<int> nums,long long int mod);
int numOfWays(vector<int>& nums)

    {

          long long int mod=1e9+7;

          int n=nums.size();

          table.resize(n+1);

           for(int i=0;i<=n;++i)

           {

               table[i]=vector<long long> (i+1,1);

               for(int j=1;j<i;++j)

               {

                   table[i][j]=(table[i-1][j-1]+table[i-1][j])%mod;

               }

           }

        long long ans=dfs(nums,mod);

       return ans % mod - 1;

    }



long long dfs(vector<int> nums,long long int mod)

    {

        int n=nums.size();

          if(n <= 2) return 1;

        vector<int> left,right;

        for(int i=1;i<n;++i)

        {

            if(nums[i]<nums[0])

                left.push_back(nums[i]);

            else

                right.push_back(nums[i]);

        }



        long long int left_res=dfs(left,mod)%mod;
        long long int right_res=dfs(right,mod)%mod;



        return ((((table[n-1][left.size()]%mod)*left_res)%mod)*right_res)%mod;



    }

int main()
{

    vector<int> g1;

  int input;
    for (int i = 1; i <= 3; i++){
        cin >> input;
      g1.push_back(input);
    }

    cout<<numOfWays(g1);
}


