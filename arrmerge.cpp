#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>v1,int n,vector<int>v2,int m,vector<int>& v3)
{
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m)
    {
        if(v1[i]<v2[j])
        {
            v3[k]=v1[i];
            k++;
            i++;
        }
        else{
            v3[k]=v2[j];
            k++;
            j++;
        }
        
    }
    while(i<n)
    {
        v3[k]=v1[i];
            k++;
            i++;
    }
    while(j<m)
    {
        v3[k]=v1[j];
            k++;
            j++;
    }

}
int main()
{
    vector<int> v1={1,3,5,7,9};
    vector<int> v2={2,4,6};
    vector<int> v3(8,0);
    merge(v1,5,v2,3,v3);
    for(auto it:v3)
    {cout<<it<<" ";}
    cout<<endl;
    return 0;
}
