/*
�ַ���ѹ���������ַ��ظ����ֵĴ�������дһ�ַ�����ʵ�ֻ������ַ���ѹ�����ܡ����磬�ַ���aabcccccaaa���Ϊa2b1c5a3��

����ѹ��������ַ���û�б�̣��򷵻�ԭ�ȵ��ַ���������Լ����ַ�����ֻ������СдӢ����ĸ��a��z����

ʾ��1:

 ���룺"aabcccccaaa"
 �����"a2b1c5a3"
ʾ��2:

 ���룺"abbccd"
 �����"abbccd"
 ���ͣ�"abbccd"ѹ����Ϊ"a1b2c2d1"����ԭ�ַ������ȸ�����
��ʾ��

�ַ���������[0, 50000]��Χ�ڡ�

*/

// to_string ����ֵת��Ϊ�ַ���

class Solution {
public:
    string compressString(string S) {
        // ����մ�
        if ((int)S.size() == 0) {
            return S;
        }

        string res;
        char ch = S[0];
        int cnt = 0; // һ��ʼ ch ����Ϊ 0 
        for (int i = 0; i < S.size(); i++) {
            /*
            * ���ch �� s[i] ��ͬ����Ҫͳ����ͬ�ַ�����
            * �����ͬ����ֹͣ���� cnt ת��Ϊ�ַ���ƴ�ӵ� res ��
            * ���ҵ��� ch, ch Ϊ��ǰ�ַ�������cntδ����������cnt = 1
            */
            if (ch == S[i]) {
                cnt++;
            }
            else {
                res += ch + to_string(cnt);
                ch = S[i];
                cnt = 1;
            }
        }

        // ���һ����û�д�����������һ��
        res += ch + to_string(cnt);
        // �Ƚ�һ��
        return res.size() >= S.size() ? S : res;
    }
};