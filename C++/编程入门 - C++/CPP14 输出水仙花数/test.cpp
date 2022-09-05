#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
在控制台输出所有的“水仙花数”。
水仙花数是指一个三位数，其各位数字的立方和等于该数本身。
举例：153就是一个水仙花数。
153 = 1*1*1 + 5*5*5 + 3*3*3 = 1 + 125 + 27 = 153
输入描述：
无
输出描述：
输出所有的“水仙花数”，每个“水仙花数”占一行，格式如下：
xxx
yyy
zzz
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 100; i < 1000; i++)
    {
        int j = i, sum = 0;
        while (j)
        {
            sum += (j % 10) * (j % 10) * (j % 10);//累加
            j /= 10;//调整
        }
        if (sum == i)
        {
            cout << i << endl;
        }
    }
    return 0;
}