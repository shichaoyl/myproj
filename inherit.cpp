#include <iostream>

//静态数据成员是属于类的；
// 静态成员函数的意义，不在于信息共享，数据沟通，而在于管理静态数据成员，完成对静态数据成员的封装。
// 1、静态成员函数属于整个类所有，没有this指针。
// 2、静态成员函数只能直接访问静态成员变量和静态成员函数。
// 3、可以通过类名直接访问的公有静态成员函数。
// 4、可以通过对象名访问类的公有静态成员函数。
// 5、定义静态成员函数，直接使用static关键字修饰即可。

using namespace std;

class Entity
{
    public:
    static float X,Y;
    
    static void Move(float xa, float ya)
    {
        X  = X + xa;
        Y  = Y + ya;
        cout << xa << " " << ya << endl;
    }
};

 float Entity::X = 1.0f;
 float Entity::Y = 2.0f;

class Player : public Entity
{
    public:
    static const char* Name;

    static void SetName()
    {
        Name = "Player";
        cout << Name << endl;
    }
};

int main()
{
    //1、通过对象进行访问
	Player p;
    p.Move(0,0);
	p.Move(2,3);

    //2、通过类名进行访问
	Player::Move(3,4); //100


    //Player p1;
   // p1.SetName();
    //Player::SetName();
    // Entity p2;
    // for (int i = 0; i < 5; i++)
    // {
    //     p2.Move(1,2);
    // }
    
    //Player::Move(10,11);
    
    // p1.SetName();
    // p1.Move(10,11);
    // cout << p1.X << " " << p1.Y << endl;

    return 0;
}