/*
����
��һ����Ϊ �ַ������ҵ���һ��ֻ����һ�ε��ַ�,����������λ��, ���û���򷵻� -1����Ҫ���ִ�Сд��.����0��ʼ������


���ݷ�Χ��0 \le n \le 100000��n��10000�����ַ���ֻ����ĸ��ɡ�
Ҫ�󣺿ռ临�Ӷ� O(n)O(n)��ʱ�临�Ӷ� O(n)O(n)
ʾ��1
���룺
"google"
����
����ֵ��
4
����
ʾ��2
���룺
"aa"
����
����ֵ��
-1
*/

class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        unordered_map<char, int> hash;
        for (char& c : str) {
            hash[c]++;
        }

        for (int i = 0; i < str.size(); i++) {
            if (hash[str[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};