#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
某公司按照季度和每个季度对应3个月份统计的数据如下：单位(万元)
第一季度：22,66,44
第二季度：77,33,88
第三季度：25,45,65
第四季度：11,66,99
请使用二维数组保存这些数据，并计算公司年销售总额。
输入描述：
无
输出描述：
输出公司年销售总额
*/

//格式填入数组元素

#include <iostream>
using namespace std;

int main() {

    int arr[4][3] = {
        {22, 66, 44},
        {77, 33, 88},
        {25, 45, 65},
        {11, 66, 99}
    };

    int sum = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
    }

    cout << sum << endl;

    return 0;
}