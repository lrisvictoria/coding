/*
����
����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����

���ݷ�Χ��������ַ����������� 1 \le n \le 1000 \1��n��1000

����������
����һ���ַ����������пո�

���������
ͳ������Ӣ���ַ����ո��ַ��������ַ��������ַ��ĸ���

ʾ��1
���룺
1qazxsw23 edcvfr45tgbn hy67uj m,ki89ol.\\/;p0-=\\][
����
�����
26
3
10
12
*/

// ��⣺https://www.nowcoder.com/discuss/438156015029280768

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int cntspace = 0, cntalpha = 0, cntdigit = 0, cntother = 0;
    for (auto ch : str) {
        if (isspace(ch)) {
            cntspace++;
        }
        else if (isalpha(ch)) {
            cntalpha++;
        }
        else if (isdigit(ch)) {
            cntdigit++;
        }
        else {
            cntother++;
        }
    }

    cout << cntalpha << endl << cntspace << endl << cntdigit << endl << cntother << endl;

    return 0;
}