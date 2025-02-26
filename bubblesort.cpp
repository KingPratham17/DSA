#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
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
    bubblesort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }

    return 0;
}