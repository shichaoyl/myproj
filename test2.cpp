/**编写一个函数比较两个字符串，参数是两个字符指针（要求显式定义，例如char *S, char *T)，比较字符串S和T的大小。如果S大于T，则返回1，如果S小于T则返回-1，如果S与T相等则返回0。
比较规则：
1.把两个字符串的相同位置上的字符进行比较，字符的大小比较以ASCII值为准
2.在比较中，如果字符串S的字符大于字符串T的字符的数量超过小于的数量，则认为S大于T，如果等于则S等于T，如果小于则S小于T
例如S为aaccdd，T为eebbbb，每个位置比较得到S前两个字母都小于T，但后4个字母都大于T，最终认为S大于T
3.如果两个字符串长度不同，则更长的字符串为大
在主函数中输入两个字符串，并调用该函数进行判断，在判断函数中必须使用函数参数的指针进行字符比较
输入：
输入t表示有t个测试实例
接着每两行输入两个字符串，字符串的最大长度不超过20
依次输入t个实例
————————————————**/

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
using namespace std;
int Compare(char *S, char *T)
{
    if (strlen(S) == strlen(T))
    {
        int tmp1,tmp2 = 0;
        for (int i = 0; i < strlen(S); i++)
        {
            if (S[i]>T[i])
            {
                /* code */
                tmp1++;
            }
            else if (S[i]<T[i])
            {
                /* code */
                tmp2++;
            }
            else
            {
                return 0;
                /* code */
            }
        }
        if (tmp1>tmp2)
        {
            return 1;
        }
        else if (tmp1<tmp2)
        {
            return -1;
        }
        else  
        {
            return 0;
        }        
    }
    else if (strlen(S) > strlen(T))
    {
        return 1;
    }
    else
    {
        return -1;
    }
    
}

int main()
{
    int a,b;
    char* S = new char[100];
    char* T = new char[100];

    cin>> a;
    for (int i = 0; i < a; i++)
    {
        cin>>S;
        cin>>T;
        b = Compare(S, T);
        cout<<b<<endl;
    }
    return 0;

}