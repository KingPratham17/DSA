#include<iostream>
using namespace std;
void reverse(string& str,int i,int j)
{
    if(i>j)
    {
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    reverse(str,i,j);
}
int main(){
    string name;
    getline(cin,name);
    int i=0,j=name.size()-1;
    reverse(name,i,j);
    cout<<name<<endl;
    return 0;
}