#include<iostream>
#include<vector>
using namespace std;

void insertionSort(int n, vector<int> &arr){
    
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        arr[j+1] = temp;  
    } 
}

int main()
{
    vector<int> v={8,7,6,5,4,3,2,1};
    insertionSort(8,v);
    for(int no:v)
    {
        cout<<no<<" ";
    }

}