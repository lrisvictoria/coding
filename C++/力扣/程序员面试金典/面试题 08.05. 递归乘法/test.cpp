/*
�ݹ�˷��� дһ���ݹ麯������ʹ�� * ������� ʵ����������������ˡ�����ʹ�üӺš����š�λ�ƣ���Ҫ����һЩ��

ʾ��1:

 ���룺A = 1, B = 10
 �����10
ʾ��2:

 ���룺A = 3, B = 4
 �����12
��ʾ:

��֤�˷���Χ�������

*/

// 1 ����д��

class Solution {
public:
    int multiply(int A, int B) {
        char res[A][B];
        return sizeof(res);
    }
};

// 2 λ���� - ��⣺https://leetcode.cn/problems/recursive-mulitply-lcci/solution/di-gui-by-unruffled-pikeizw-ium9/

class Solution {
public:
    int multiply(int A, int B) {
        if (B == 0) {
            return 0;
        }
        if (B == 1) {
            return A;
        }
        int C = 0;
        if (B & 1) {
            C = A;
        }
        return multiply(A, B >> 1) + multiply(A, B >> 1) + C;
    }
};