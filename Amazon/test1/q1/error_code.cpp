#include<bits/stdc++.h>
using namespace std;

int chekforsecond(vector<int> arr,int i,int j ){
if(j==i+1){
    return 1;
}
int k=i+1;

while(k<=j){
    if(arr[k]< arr[i]){
        return 0;
    }
    k++;
}

return 1;

}

int chekforfirst(vector<int> arr,int i,int j ){
if(j==i+1){
    cout<<"Pra"<<endl;
    
    return 1;
}
int k=i+1;

while(k<=j){
    if(arr[k]>= arr[i]){
        return 0;
    }
    k++;
}

return 1;
}

long long solve (int N, vector<int> arr, vector<int> val) {
   // Write your code here

   int i=0,j;
    int jump=0;

    vector<int> vec;
    

    while(i<N-1){
        j=i+1;
        while(j<N ){
        if(arr[j]>= arr[i] && chekforfirst(arr,i,j )==1){
            vec.push_back(i);
            i=j;
            cout<<"l-1->"<<j;
            break;
        }
        if(arr[j]< arr[i] && chekforsecond(arr,i,j )==1){
            vec.push_back(i);
            i=j;
            cout<<"l-2->"<<j;
            break;
        }
        j++;
        }
        cout<<endl;
        
        
    }

    vec.push_back(i);
    long long ans=0;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
        ans+=val[vec[i]];
    }

cout<<endl;
    return ans;
   
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        vector<int> arr(N);
        for(int i_arr = 0; i_arr < N; i_arr++)
        {
        	cin >> arr[i_arr];
        }
        vector<int> val(N);
        for(int i_val = 0; i_val < N; i_val++)
        {
        	cin >> val[i_val];
        }

        long long out_;
        out_ = solve(N, arr, val);
        cout << out_;
        cout << "\n";
    }
}