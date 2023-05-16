/**
 * 已知每个月份的英文单词如下，要求创建一个指针数组，数组中的每个指针指向一个月份的英文字符串，要求根据输入的月份数字输出相应的英文单词
1月 January 
2月 February
3月 March
4月 April
5月 May
6月 June
7月 July
8月 Aguest
9月 September
10月 October
11月 November
12月 December
输入：
第一行输入t表示t个测试实例
接着每行输入一个月份的数字
依次输入t行
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    const char* pMonth[12] = {"January","February","March","April","May","June","July","Aguest","September","October","November","December"};
    //int a = cin.get();
    int a;
    int b;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        /* code */
        cin>>b;
        cout<<pMonth[b-1]<<endl;
    }
    cin.get();
    
}