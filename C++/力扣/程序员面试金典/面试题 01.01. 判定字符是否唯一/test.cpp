/*
ʵ��һ���㷨��ȷ��һ���ַ��� s �������ַ��Ƿ�ȫ����ͬ��

ʾ�� 1��

����: s = "leetcode"
���: false
ʾ�� 2��

����: s = "abc"
���: true
���ƣ�

0 <= len(s) <= 100
s[i]������Сд��ĸ
����㲻ʹ�ö�������ݽṹ����ܼӷ֡�

*/

class Solution {
public:
    bool isUnique(string astr) {
        int cnt[26] = { 0 };
        for (char& c : astr) {
            cnt[c - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (cnt[i] > 1) {
                return false;
            }
        }
        return true;
    }
};