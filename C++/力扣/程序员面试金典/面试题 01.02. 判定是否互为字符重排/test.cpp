/*
����������Сд��ĸ��ɵ��ַ��� s1 �� s2�����дһ������ȷ������һ���ַ������ַ��������к��ܷ�����һ���ַ�����

ʾ�� 1��

����: s1 = "abc", s2 = "bca"
���: true
ʾ�� 2��

����: s1 = "abc", s2 = "bad"
���: false
˵����

0 <= len(s1) <= 100
0 <= len(s2) <= 100

*/

// �����ж������ַ����Ƿ����

class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        if (s1.size() != s2.size()) {
            return false;
        }

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        if (s1 != s2) {
            return false;
        }
        else {
            return true;
        }
    }
};