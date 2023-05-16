#include <iostream>

using namespace std;

int main()
{
    int a = 10;//定义一个整型变量a
    int *p = &a;//定义一个整型指针变量p，指向a的地址
    int &b = a;//定义一个整型引用b，绑定到a

    //通过指针访问a的值
    cout<<*p<<endl;

    //通过引用访问a的值
    cout<<b<<endl;

    a = 100;

    cout<<*p<<endl;

    cout<<b<<endl;

    *p = 200;

    cout<<*p<<endl;

    cout<<b<<endl;

    
    return 0;
}