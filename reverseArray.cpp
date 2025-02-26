#include <bits/stdc++.h>
using namespace std;
//this code helped me to pass vector as input  modify the same vector 
void rotate(vector<int>& v)
{
    int s=0;
    int end=v.size()-1;
    while(s<=end)
    {
        swap(v[s],v[end]);
        s++;
        end--;
    }
}

int main() {
    vector<int> v;
    vector<int> z;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<(*it);
    }
    cout<<endl;
    rotate(v);
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<(*it);
    }

    
    return 0;
}