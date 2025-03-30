#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int s,int e)
{
    int mid=s+(e-s)/2;
    
    int length1=mid-s+1;
    int length2=e-mid;
    int* arr1= new int[length1];
    int* arr2= new int[length2];
    int arrind=s;
    for(int i=0;i<length1;i++)
    {
        arr1[i]=arr[arrind++];
    }
arrind=mid+1;
for(int i=0;i<length2;i++)
    {
        arr2[i]=arr[arrind++];
    }
int ind1=0;
int ind2=0;
arrind=s;
while(ind1<length1 && ind2<length2)
{
    if(arr1[ind1]>arr2[ind2])
    {
        arr[s++]=arr2[ind2++];
    }
    else if(arr1[ind1]<=arr2[ind2])
    {
        arr[s++]=arr1[ind1++];
    }
}
while (ind1<length1)
{
    arr[s++]=arr1[ind1++];

}
while (ind2<length2)
{
    arr[s++]=arr2[ind2++];
    
}
delete[] arr1;
delete[] arr2;

}
void mergesort(int *arr,int s,int e)
{
    if(s>=e)
    return;

    int mid=s+(e-s)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}

int main()
{
    int arr[]={5,5,4,3,2,1};
    int n=6;
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
