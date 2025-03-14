#include<iostream>
//#include "hero.cpp"
using namespace std;

class Hero{
    private:
    int health;
    public:
    char level;
    void print(){
        cout<<level<<endl;
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
    Hero pratham;
    // dynamically //
    Hero *aarya = new Hero;
    aarya->setHealth(1000);
    aarya->setLevel('A');
    cout<<" aarya Health is:"<<(*aarya).getHealth()<<endl;
    cout<<"aarya Level is:"<<(*aarya).level<<endl;
    //better way
    cout<<" aarya Health is:"<<aarya->getHealth()<<endl;
    cout<<"aarya Level is:"<<aarya->getLevel()<<endl;
    cout<<"Health is:"<<pratham.getHealth()<<endl;
    pratham.setHealth(100);
    pratham.level='S';
    cout<<"Health is:"<<pratham.getHealth()<<endl;
    cout<<"Level is:"<<pratham.level<<endl;
    return 0;
}