#include<iostream>
using namespace std;
 int binarysearch(int arr[],int s,int n,int key)
 {
    int e=n;
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
 int getpivot(int arr[],int n)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main()
{
    cout<<"enter the no of elements in the array:"<<endl;
    int n;
    int key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter ele:";
        cin>>arr[i];
        
    }
    cout<<"enter the emement to be searched in the array:";
    cin>>key;
    int pivot=getpivot(arr,n);
    if(key>=arr[pivot]&& key<=arr[n-1])
    {
        cout<<"the ans is"<<binarysearch(arr,pivot,n-1,key);
    }
    else{
        cout<<"the ans is"<<binarysearch(arr,0,pivot-1,key);
    }

return 0;
}
