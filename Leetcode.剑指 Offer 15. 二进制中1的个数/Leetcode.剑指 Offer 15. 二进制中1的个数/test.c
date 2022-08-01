#define _CRT_SECURE_NO_WARNINGS 1 
/*
编写一个函数，输入是一个无符号整数（以二进制串的形式），返回其二进制表达式中数字位数为 '1' 的个数（也被称为 汉明重量).）。
*/

/*输入：n = 11 (控制台输入 00000000000000000000000000001011)
输出：3
解释：输入的二进制串 00000000000000000000000000001011 中，共有三位为 '1'。
*/

/*输入：n = 128 (控制台输入 00000000000000000000000010000000)
输出：1
解释：输入的二进制串 00000000000000000000000010000000 中，共有一位为 '1'。
*/

//注：uint_32 为 32位无符号类型数据

//plan1：%2 /2
//int hammingWeight(uint32_t n) {
//    int count = 0;
//    while (n)
//    {
//        if (n % 2 == 1)
//            count++;
//        n /= 2;
//    }
//    return count;
//}
//plan2：
//int hammingWeight(uint32_t n) {
//    int count = 0;
//    for (int i = 0; i < 32; i++)
//    {
//        if ((n >> i) & 1)//这里n为uint32_t类型，所以>>不造成影响
//        {
//            count++;
//        }
//    }
//    return count;
//}
//plan3：
//int hammingWeight(uint32_t n) {
//    int count = 0;
//    while (n)
//    {
//        n = n & (n - 1);
//        count++;
//    }
//    return count;
//}
//plan4：
int hammingWeight(uint32_t n) {
    int count = 0;
    for (int i = 0; i < 32; i++)
    {
        if (n & (uint32_t)1 << i)//这里一定要强制类型转化
            //我踩坑了，给出的报错信息为1左移31位不能用int表示
            //编译器不同，语法规则上检测强度不同
            //由于上面的方法都是uint32_t同类型的进行位操作，所以没事
            //但是这里类型不同就要注意了！！！
            count++;
    }
    return count;
}