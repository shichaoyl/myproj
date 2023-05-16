#include <iostream>

using namespace std;

//创建实例时调用构造函数
//析构函数在销毁对象时使用

class Entity
{
    public:
    float X,Y;

    Entity()
    {
        X = 0.0f;
        Y = 0.0f;
        cout<<"Constructor"<<endl;
    }

    // Entity(float x, float y)
    // {
    //     X = x;
    //     Y = y;
    // }

    ~Entity()
    {
        cout<<"Destructor"<<endl;
    }

    void Print()
    {
        cout << "X: " << X << " Y: " << Y << endl;
    }
};

int main()
{

    //Entity e(10.0f, 5.0f);
    Entity e;
    //cout << "X: " << e.X << " Y: " << e.Y << endl;
    e.Print();
    //e.~Entity();
    //cin.get();
    return 0;
}