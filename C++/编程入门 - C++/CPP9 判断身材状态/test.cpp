#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
体重指数（BMI）是世界卫生组织（WHO）推荐国际统一使用的肥胖分型标准，即BMI＝体重／身高2（kg/m2）。
小于 18.5 属于"偏瘦"，大于等于 18.5 小于 20.9 属于"苗条"，大于等于 20.9 小于等于 24.9 属于"适中"，超过 24.9 属于"偏胖"。
下面由你来编写一段逻辑，输入用户的身高和体重，计算出对应的体重指数，并返回他们的身材状态。
输入描述：
用户的身高（m）和用户的体重（kg）
输出描述：
体重指数对应的身材状态：偏瘦，苗条，适中，偏胖。
示例1
输入：
62.5
1.75
输出：
苗条
*/

#include <iostream>
#include <tgmath.h>//pow函数所需
using namespace std;

int main() {

    double weight;
    double height;

    cin >> weight;
    cin >> height;

    // write your code here......
    double BMI = weight / pow(height, 2);
    if (BMI < 18.5)
        cout << "偏瘦" << endl;
    else if (BMI >= 18.5 && BMI < 20.9)
        cout << "苗条" << endl;
    else if (BMI >= 20.9 && BMI < 24.9)
        cout << "适中" << endl;
    else
        cout << "偏胖" << endl;

    return 0;
}