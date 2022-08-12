#define _CRT_SECURE_NO_WARNINGS 1 
//描述
//小明同学最近开发了一个网站，在用户注册账户的时候，需要设置账户的密码，为了加强账户的安全性，小明对密码强度有一定要求：
//
//1. 密码只能由大写字母，小写字母，数字构成；
//
//2. 密码不能以数字开头；
//
//3. 密码中至少出现大写字母，小写字母和数字这三种字符类型中的两种；
//
//4. 密码长度至少为8
//
//现在小明受到了n个密码，他想请你写程序判断这些密码中哪些是合适的，哪些是不合法的。
//
//输入描述：
//输入一个数n，接下来有n(n≤100)行，每行一个字符串，表示一个密码，输入保证字符串中只出现大写字母，小写字母和数字，字符串长度不超过100。
//输出描述：
//输入n行，如果密码合法，输出YES，不合法输出NO

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char arr[101] = { 0 };
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%s", arr);
		int len = strlen(arr);
		if (len < 8)
		{
			printf("NO\n");
			continue;
		}
		if (isdigit(arr[0]))
		{
			printf("NO\n");
			continue;
		}
		int a = 0;//大写字母
		int b = 0;//小写字母
		int c = 0;//数字
		for (int j = 0; j < len; j++)
		//从0开始遍历，直到len，注意这里起始为0,不要为1，若第一个字符为数字就直接退出了
		//但是若所有元素都是一个类型，且在计算字符串大小时，全计算进去了，而a并没有被计入，这样就导致了这种情况为真
		//虽然这里过了，但是要小心
		{
			if (isupper(arr[j]))
				a++;
			if (islower(arr[j]))
				b++;
			if (ifdigit(arr[j]))
				c++;
		}
		if (a == sizeof(arr) || b == sizeof(arr) || c == sizeof(arr))
		{
			printf("NO\n");
			continue;//直接进入下一次循环，不用con用ifelse语句也行
		}
		printf("YES\n");
	}
	return 0;
}