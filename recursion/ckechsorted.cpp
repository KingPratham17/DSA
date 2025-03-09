#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr,int size)
{
    if(size==0||size==1)
    {
        return true;
    }
    if(arr[0]> arr[1])
    return false;
    else{
        bool rempart=isSorted(arr+1,size-1);
        return rempart;
    }
}
int main()
{
int arr[5]={5,2,3,4,5};
int size =5;
cout<<isSorted(arr,size)<<endl;
return 0;
}
