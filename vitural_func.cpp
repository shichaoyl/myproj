#include <iostream>
#include <string>

using namespace std;

class Entity{
    public:
    virtual string GetName() {return "entity";}
};

class Player : public Entity{
    private:
    string m_Name;
    public:
    Player(const string& name) : m_Name(name) {}

    string GetName() override {return m_Name;}
};

void PrintName(Entity* entity)
{
    cout << entity->GetName() << endl;
}

int main()
{
    Entity* entity = new Entity();
    PrintName(entity);

    Player* player = new Player("shichao");
    PrintName(player);
}