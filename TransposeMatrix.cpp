//Transpose matrix inplace c++

#include<bits/stdc++.h>
using namespace std;
void TransposeMatrix(vector<vector<int>> &m)
{
    int n= m.size();
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<i; j++)
        {
            swap(m[i][j], m[j][i]);
        }
    }
    
}

int main(){
    vector<vector<int>> m={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Before transpose :"<<endl;
    for (int i = 0; i < m.size(); i++)
    {
        for(int j=0; j<m[0].size(); j++)
        {
            cout<<" "<<m[i][j];
        }
        cout<<endl;
    }
    cout<<endl;

    TransposeMatrix(m);

    cout<<"After transpose :"<<endl;
    for (int i = 0; i < m.size(); i++)
    {
        for(int j=0; j<m[0].size(); j++)
        {
            cout<<" "<<m[i][j];
        }
        cout<<endl;
    }
    
return 0;
}
