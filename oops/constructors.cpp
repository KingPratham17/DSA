#include<iostream>
//#include "hero.cpp"
using namespace std;

class Hero{
    //to define contstructor Hero(){}
    private:
    int health;
    public:
    char level;
    Hero(int health)
    {
        this->health=health;
    }
    Hero(int health,char level)
    {
        this->health=health;
        this->level=level;
    }
    void print(){
        cout<<level<<endl;
        cout<<health<<endl;
    }
    //getter
    int getHealth(){
        return health;
    }
    char getLevel()
    {
        return level;
    }
    //setter
    void setHealth(int h)
    {
        health=h;
    }
    void setLevel(char ch)
    {
        level=ch;
    }

};
int main()
{
    Hero pratham(100,'S');
    pratham.print();
    Hero *aarya =new Hero(50,'A');
    aarya->print();
   
    return 0;
}