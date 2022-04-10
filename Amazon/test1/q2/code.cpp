#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int i=1,j=n-1;
    
    vector<vector<int> > vec;

    while(i<n){
        if(i+j == 2*(i^j)){
            vector<int> v1;
            v1.push_back(i);
            v1.push_back(j);
            vec.push_back(v1);
        }
        i++;
        j--;
    }
    
    if(vec.size()==0){
        vector<int> v1;
            v1.push_back(-1);
            v1.push_back(-1);
            vec.push_back(v1);
    }
    
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}