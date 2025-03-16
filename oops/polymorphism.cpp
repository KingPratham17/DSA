#include<iostream>
using namespace std;
class A{
    public:

    void sayhello(){
        cout<<"Hello Pratham"<<endl;
    }
    void sayhello(string name)
    {
        cout<<"hello"<<name<<endl;
    }
    void sayhello(char name)
    {
        cout<<"hello"<<name<<endl;
    }
    //same name in the function
    //int syahello() function is not allowed as it returns error say that functions that differ in return types cannou be overloaded.
};
int main()
{
    A obj;
    obj.sayhello();
}