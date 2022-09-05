#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
键盘录入一个成绩（整数），判断并输出成绩的等级，如果用户输入成绩不合法（小于0或者大于100）则输出成绩不合法。
90-100 优秀
80-89  良
70-79  中
60-69  及格
0-59   差

输入描述：
输入学生的成绩（整数）
输出描述：
输出成绩对应的等级
90-100 优秀
80-89  良
70-79  中
60-69  及格
0-59   差
如果用户输入成绩不合法（小于0或者大于100）则输出成绩不合法。
示例1
输入：
99
输出：
优秀
示例2
输入：
82
输出：
良
示例3
输入：
76
输出：
中
示例4
输入：
64
输出：
及格
示例5
输入：
23
输出：
差
示例6
输入：
-19
输出：
成绩不合法
*/

#include <iostream>
using namespace std;

int main()
{
    int score;
    cin >> score;
    if (score >= 0 && score < 60)
        cout << "差" << endl;
    else if (score >= 60 && score < 70)
        cout << "及格" << endl;
    else if (score >= 70 && score < 80)
        cout << "中" << endl;
    else if (score >= 80 && score < 90)
        cout << "良" << endl;
    else if (score >= 90 && score <= 100)
        cout << "优秀" << endl;
    else
        cout << "成绩不合法" << endl;
    return 0;
}