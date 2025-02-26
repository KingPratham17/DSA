#include<iostream>
using namespace std;
 int binarysearch(int arr[],int n,int key)
 {
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            return mid;
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
    int arr[6]={3,5,6,7,3,2};
    cout<<"the pos is:"<<binarysearch(arr,6,10);
 }