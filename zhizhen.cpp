#include <iostream>
#include "stdlib.h"

using namespace std;


void Increase(int& value)
{
    value++;
}

int main()
{
    // int a = 5;
    // int& value = a;
    // Increase(a);
    // cout<<a<<endl;
    // int* b = nullptr;
    // b = &a;
    // *b = 2;
    // b = &value;
    // cout<<*b<<endl;
    // cin.get();
    int a = 5;
    int b = 8;

    int*ref = &a;
    *ref = 2;
    ref = &b;
    *ref = 3;
    cout<<a<<endl;
    cout<<b<<endl;
    cin.get();

    return 0;
}