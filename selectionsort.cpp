#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    int minind=0;
    for (int i=0;i<n-1;i++)
    {
        minind=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minind]){
                minind=j;
            }
        }
        swap(arr[i],arr[minind]);
    }
}
int main()
{
    int n;
    cout<<"enter the size of arr";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the "<<i+1<<"element";
        cin>>arr[i];
    }
    selectionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }

    return 0;
}