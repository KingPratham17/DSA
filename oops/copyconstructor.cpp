#include<iostream>
//#include "hero.cpp"
using namespace std;

class Hero{
    //to define contstructor Hero(){}
    private:
    int health;
    public:
    char level;
    //the below will work without this constructor also
    Hero(Hero& temp) //it is very much required to pass & also
    {
        this->health=temp.health;
        this->level=temp.level;
    }
    Hero()
    {
        cout<<"Default Constructor"<<endl;
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
    Hero suresh(70,'C');
    suresh.print();
    Hero R(suresh);
    R.print();
    return 0;
}