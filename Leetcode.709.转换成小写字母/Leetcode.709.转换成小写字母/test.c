#define _CRT_SECURE_NO_WARNINGS 1 

/*给你一个字符串 s ，将该字符串中的大写字母转换成相同的小写字母，返回新的字符串。*/

/*
输入：s = "Hello"
输出："hello"
*/

//plan1：暴力求解
//char* toLowerCase(char* s) {
//    int len = strlen(s);
//    for (int i = 0; i < len; i++)
//    {
//        if (s[i] >= 'A' && s[i] <= 'Z')
//        {
//            s[i] += 32;
//        }
//    }
//    return s;
//}

//plan2：库函数
//tolower：将大写字母转化为小写
//char* toLowerCase(char* s) {
//    int len = strlen(s);
//    for (int i = 0; i < len; i++)
//    {
//        s[i] = tolower(s[i]);
//    }
//    return s;
//}
//plan3：我这种写法在vs上是可以的，但是对于力扣是不行的
//返回的是p的地址，我改变了p的指向，就指向了\0，到时候打印就出错了
//所以我先用一个指针变量存放数组首元素地址，最后返回数组的地址

//错误示范：
//#include<stdio.h>
//char* toLowerCase(char* s) {
//
//    while (*s != '\0')
//    {
//        if (*s >= 'A' && *s <= 'Z')
//        {
//            *s += 32;
//        }
//        s++;//改变指向
//    }
//    return s;//指向\0
//}
//int main()
//{
//    char arr[] = "abCdEf";
//    int*p = toLowerCase(arr);
//    printf("%s\n", p);//打印为空
//    return 0;
//}
char* toLowerCase(char* s) {
    char* str = s;
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str += 32;
        }
        str++;
    }
    return s;
}