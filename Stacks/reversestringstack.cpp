#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string name="Pratham";
    stack<char> s;
    string ans;
    for(int i=0;i<name.length();++i)
    {
        char ch=name[i];
        s.push(ch);
    }

    while(!s.empty())
    {
        char ch=s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<ans;
    return 0;
}
//TC = O(N)
//SC= O(N)