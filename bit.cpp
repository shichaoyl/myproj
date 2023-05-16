#include <iostream>

using namespace std;

struct stuff
{
    unsigned int field1 :32;
    unsigned int : 2;//未命名的位域成员填充
    unsigned int field2 : 4;
    unsigned int : 0;//使用一个宽度为 0 的未命名位域成员令下一位域成员与下一个整数对齐
    unsigned int field3 : 3;
};
int main()
{
    struct stuff s = {1,3,5};
    cout << s.field1 << endl;
    cout << s.field2 << endl;
    cout << s.field3 << endl;
    cout << sizeof(s) << endl;
    return 0;
}