#include <string>
#include <iostream>

using namespace std;

class Entity
{
    public:
    float X,Y;

    Entity()
    {
    }

    Entity(float x, float y)
    {
        X = x;
        Y = y;
    }
    void Print()
    {
        cout << "X: " << X << " Y: " << Y << endl;
    }
};

class LOG
{
    //删除默认构造函数
    //LOG() = delete;
    
    // private:
    // LOG()
    // {

    // }
public:
    static void write()
    {
        cout << "Hello World!" << endl;
    }
};

int main()
{
    LOG::write();
    //构造函数是private，不希望创建实例
    // LOG log;
    // log.write();


    //Entity e(10.0f, 5.0f);
    //cout << "X: " << e.X << " Y: " << e.Y << endl;
    //e.Print();
    //cin.get();
}