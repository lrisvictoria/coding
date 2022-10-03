#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
按顺序分别定义char、int、long、double类型的变量，并用sizeof()依次输出这几个变量在内存中所占用的字节数。
输入描述：
用户按顺序分别定义char、int、long、double类型的变量。
输出描述：
输出这几个变量的内存占用大小。
每个占一行，格式如下：
xxx
yyy
zzz
...
（以上xxx、yyy和zzz均代表整数）
*/

#include <iostream>
using namespace std;

int main()
{
    cout << sizeof(char) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(double) << endl;
    return 0;
}