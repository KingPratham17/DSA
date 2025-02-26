#include<iostream>
using namespace std;
int peakIndexInMountainArray(int arr[],int n) {
        int left = 0, right = n - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            
            if (arr[mid] < arr[mid + 1]) {
                
                left = mid+1;
            } else {
                right = mid;
            }
        }
        
        return left;
};
int main(){
    int n=4;
    int arr[]={0,2,1,0};
    cout<<"the answer is:"<<peakIndexInMountainArray(arr,n)<<endl;
    return 0;
}