/*
����
���ճ��������У����Ǿ����������ܳ��ĵ��ʣ�����"localization"��"internationalization"�ȡ�
Ϊ����д���㣬���ǻὫ̫���ĵ��ʽ�����д������������¶��壺

���һ�����ʰ������ַ������ﵽ���߳���10��������Ϊ����һ�������ʡ����еĳ����ʶ���Ҫ������д��
��д�ķ�������д��������ʵ���β�ַ���Ȼ��������β�ַ��м�д���������ȥ����β�ַ������������ַ�������
����"localization"��д��õ�����"l10n"��"internationalization"��д��õ�����"i18n"��
�ָ���n�����ʣ������еĳ����ʽ�����д������İ�ԭ�������

��

����������
��һ�а���Ҫ������n��1��n��100

������n��ÿ�а���һ����СдӢ���ַ����ɵ��ַ������ַ������Ȳ�����100��
���������
��˳�����������ÿ�����ʡ�
ʾ��1
���룺
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
����
�����
word
l10n
i18n
p43s
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--) {
        string str;
        cin >> str;

        int len = str.size();
        if (len < 10) {
            cout << str << endl;
        }
        else {
            cout << str.front() << len - 2 << str.back() << endl;
        }
    }

    return 0;
}

// ��⣺https://www.nowcoder.com/discuss/437237363895545856