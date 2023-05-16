#include <iostream>
#include <string>

using namespace std;

class Printable
{
    public:
    virtual string GetClassName() = 0;
};

class Entity : public Printable{ 
    public:
    //virtual string GetName()  = 0;//纯虚函数，需要在子类实现，纯虚函数无法实例化
    virtual string GetName() {return "entity";}
    string GetClassName() override { return "Entity"; }
};

class Player : public Entity{
    private:
    string m_Name;
    public:
    Player(const string& name) : m_Name(name) {}

    string GetName() override {return m_Name;}//实现纯虚函数之后才能实例化
    string GetClassName() override { return "Player"; }

};

void PrintName(Entity* entity)
{
    cout << entity->GetName() << endl;
}

class A :public Printable
{
    public:
    string GetClassName() override { return "A"; }
};
void Print(Printable* obj)
{
    cout <<obj->GetClassName() << endl;
}

int main()
{
    Entity* e = new Entity();
    //PrintName(entity);

    Player* player = new Player("shichao");
    //PrintName(player);

    Print(e);
    Print(player);
    Print(new A());
}