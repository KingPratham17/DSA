#include<iostream>
#include<cstring>
//#include "hero.cpp"
using namespace std;

class Hero{
    //to define contstructor Hero(){}
    private:
    int health;
    public:
    char *name;
    char level;
    static int timetocomplete;
    //the below will work without this constructor also
    Hero(Hero& temp) //it is very much required to pass & also
    {
        this->health=temp.health;
        this->level=temp.level;
    }
    Hero()
    {
        cout<<"Default Constructor"<<endl;
        name=new char[100];
    }
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
        cout<<"level "<<this->level<<endl;
        cout<<"health"<<this->health<<endl;
        cout<<"name: "<<this->name<<endl;

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
    void setName(char name[])
    {
        strcpy(this->name,name);
    }
    ~Hero()
    {
        cout<<"destructor called";
    }

};
int Hero::timetocomplete=0;
int main()
{
    Hero hero1;
    hero1.setHealth(100000);
    hero1.setLevel('S');
    char name[8]="Pratham";
    hero1.setName(name);
    hero1.print();
    return 0;
}