#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//******************（图形专题第一部分）********************
//共十八题
//这一部分有8题 
//BC111 空心正方形图案
//多组输入
//4
//* * * * 
//*     *
//*     *
//* * * *
//思路：嵌套循环，控制行列，第1、n行全是*
//第1、列全是*，其余为空格
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 0; i < n; i++)//行
//        {
//            for (int j = 0; j < n; j++)//列
//            {
//                if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//BC112 空心三角形图案
//多组输入
//4
//*
//* *
//*   *
//* * * *
//--------------------------
//其实我对于这种图形的打印挺苦恼的
//我也是看了别人的思路才能勉强写出来，还是得多练......
//思路：观察图形，发现第一列和最后一行全是*；
//那么，就可以加上条件；
//对于斜边呢，这也是我没想到的地方;
//观察可以发现i=j就会打印*;
//那么条件加上，就完成了.
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (i == j || j == 0 || i == n - 1)
//                    printf("* ");
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//BC113 数字三角形
//多组输入
//4
//1
//1 2
//1 2 3
//1 2 3 4
//思路，控制行列，列数与行数相等
//图形结果用列数来表示  
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j <= i; j++)
//			{
//				printf("%d ", j + 1);
//			}
//			printf("\n");
//		}
//	}
//}
//BC98 线段图案
//多组输入,输出图案无空格
//2
//**
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = 0; i < n; i++)
//            printf("*");
//        printf("\n");
//    }
//    return 0;
//}
//BC99 正方形图案
//多组输入
//4
//* * * * 
//* * * *
//* * * *
//* * * *    
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//BC100 直角三角形图案
//多组输入
//4
//*
//* *
//* * *
//* * * *
//思路：和正方形不同的是，它的行列中*不相等
//但是行列还是相等的
//于是列<=行
//否则第一行元素不能成功打印
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//BC101 翻转直角三角形图案
//多组输入
//4
//* * * *
//* * * 
//* * 
//*
//思路:：行用正常思路，列用递减的思想
//j初始化为n，但是由于是三角形，所以在递减过程中
//要注意j>i,千万不可以写成j>0，否则就变成正方形了！
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = n; j > i; j--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//思路2：直接把行初始化为n，
//对于列就直接等于行数，两个循环呈递减状态
//但是代码可读性比较低，毕竟还是习惯于从0开始
//int main()
//{
//	int n;
//	while (scanf("%d", &n) == 1)
//	{
//		for (int i = n; i > 0; i--)
//		{
//			for (int j = i; j > 0; j--)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//BC102 带空格直角三角形图案
//多组输入
//4
//      * 
//    * * 
//  * * * 
//* * * * 
//思路：一开始我完全没想到，看了一眼别人的代码才有思路
//分两部分：空格和*
//观察图形空格是有两个的，第1行3，第2行2，依次递减
//*号依次递增
//于是乎，嵌套循环
//之后在循环内部中分为空格部分：
//初始j为n-1，毕竟第一行只有3组空格，截止条件为>i
//对于*部分：
//逐次递增，前面的元素是空格，*只需要跟在空格后面
//然后正常思路，把j<=i,就完成了
#include<stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = n-1; j > i ; j--)
            {
                printf("  ");
            }
            for (int j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}