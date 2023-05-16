//静态变量和静态函数

#include <iostream>

using namespace std;

void test_static()
{
    static int count = 0;

    count++;
    cout << count << endl;
}

class MyClass
{
    public:
    static void print()
    {
        cout<<"hello"<<endl;
    }
};


int main()
{
    // for (int i = 0; i < 5; i++)
    // {
    //     test_static();
    // }
    MyClass::print();

    return 0;
}