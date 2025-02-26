#include<iostream>
using namespace std;
 int firstocc(int arr[],int n,int key)
 {
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            e=mid-1;
            ans=mid;

        }
        else if(key>arr[mid]){
            s=mid+1;

        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
        
    }
    return ans;
 }
 int lastocc(int arr[],int n,int key)
 {
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            s=mid+1;
            ans=mid;

        }
        else if(key>arr[mid]){
            s=mid+1;

        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
        
    }
    return ans;
 }
 int main()
 {
    int even[11]={1,2,3,3,3,3,3,3,3,3,5};
    cout<<"the first occ is:"<<firstocc(even,11,3)<<endl;
    cout<<"the last occ is:"<<lastocc(even,11,3)<<endl;
    return 0;
 }