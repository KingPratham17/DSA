#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"Speaking "<<endl;  
    }
};

class Dog: public Animal{

};

class GermanShepherd: public Dog{

};
class Human{
    public:
    string color;
    public:
    void speak(){
        cout<<"speaking "<<endl;
    }
};

//multiple inheritance
class Hybrid: public Animal,public Human{

};
int main()
{
    Hybrid h1;
    h1.bark();
    h1.speak();
}