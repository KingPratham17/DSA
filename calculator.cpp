#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int ans;
    char operation;
    cout<<"enter the value of a,b"<<endl;
    cin>>a >>b;
    cout<<"enter the operation to be performed";
    cin>>operation;
   switch(operation)
   {
    case '+':  ans=a+b;
    break;
    case '-': ans=a-b;
    break;
    case '*':ans=a*b;
    break;
    case '/':ans=a/b;
    break;
   }
   cout<<"the ans is:"<<ans<<endl;
    return 0;

}