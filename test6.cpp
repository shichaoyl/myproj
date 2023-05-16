#include "stdlib.h"
#include <iostream>
#include "unistd.h"

using namespace std;
int main()
{
    static int X,X1;
    static int Y,Y1;
    while (1)
    {
        X1 = !X && Y;
        Y1 = !X && !Y;
        cout << X << " " << Y <<endl;
        X = X1;
        Y = Y1;

    }
    
}