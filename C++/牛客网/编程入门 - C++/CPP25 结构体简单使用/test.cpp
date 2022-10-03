#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
设计一个学生结构体，该结构体具有三个成员，分别是：姓名name、年龄age、身高height。
键盘依次输入姓名、年龄和身高数据，将数据保存到学生结构体变量上，并输出学生信息。
输入描述：
键盘依次输入学生的姓名name、年龄age、身高height
输出描述：
输出学生的信息，例如：
张三 20 182.5
示例1
输入：
张三
20
182.5
输出：
张三 20 182.5
*/

#include <iostream>
#include <string>
using namespace std;

struct student
{
    char name[20];
    int age;
    double height;
};

int main() {

    struct student stu;
    cin >> stu.name >> stu.age >> stu.height;//依次输入
    cout << stu.name << " " << stu.age << " " << stu.height;//格式调整

    return 0;
}