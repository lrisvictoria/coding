/*
��Խ�������д���򣬽���ĳ������������λ��ż��λ������ʹ�ý��ٵ�ָ�Ҳ����˵��λ0��λ1������λ2��λ3�������Դ����ƣ���

ʾ��1:

 ���룺num = 2������0b10��
 ��� 1 (���� 0b01)
ʾ��2:

 ���룺num = 3
 �����3
��ʾ:

num�ķ�Χ��[0, 2^30 - 1]֮�䣬���ᷢ�����������

*/

// ��⣺https://leetcode.cn/problems/exchange-lcci/solution/wei-yun-suan-by-unruffled-pikeizw-fd81/

class Solution {
public:
    int exchangeBits(int num) {
        return ((num & 0x55555555) << 1) | ((num & 0xaaaaaaaa) >> 1);
    }
};s