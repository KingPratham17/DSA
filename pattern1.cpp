#include<iostream>
using namespace std;
int main(){
    int row=1,col=1,n;
    cin>>n;
    while(row<=n){
        int space=n-row;
        while(space !=0){
            cout<<" ";
            space=space-1;
        }
        col=1;
        while(col<=row)
        {
            cout<<"*";
            col+=1;

        }
        cout<<endl;
        row+=1;
    }
    return 0;

}
