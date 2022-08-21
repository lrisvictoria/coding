#define _CRT_SECURE_NO_WARNINGS 1 
/*
������ 16.15. ��������
����������Ϸ��the game of master mind�����淨���¡�

�������4���ۣ�ÿ���۷�һ������ɫ�����Ǻ�ɫ��R������ɫ��Y������ɫ��G������ɫ��B�������磬�����������RGGB 4�֣���1Ϊ��ɫ����2��3Ϊ��ɫ����4Ϊ��ɫ������Ϊ�û�������ͼ�³���ɫ��ϡ�����ȷ�������ܻ��YRGB��Ҫ�ǲ¶�ĳ���۵���ɫ������һ�Ρ����С���Ҫ��ֻ�¶���ɫ����λ�´��ˣ�����һ�Ρ�α���С���ע�⣬�����С��������롰α���С���

����һ����ɫ���solution��һ���²�guess����дһ�����������ز��к�α���еĴ���answer������answer[0]Ϊ���еĴ�����answer[1]Ϊα���еĴ�����

ʾ����

���룺 solution="RGBY",guess="GGRR"
����� [1,1]
���ͣ� ����1�Σ�α����1�Ρ�
��ʾ��

len(solution) = len(guess) = 4
solution��guess������"R","G","B","Y"��4���ַ�
*/

int* masterMind(char* solution, char* guess, int* returnSize)
{
    *returnSize = 2;
    static int ans[2] = { 0 };
    int count1 = 0, count2 = 0;
    for (int i = 0; i < 4; i++)
    {
        if (solution[i] == guess[i])
        {
            solution[i] = 0;
            guess[i] = 0;
            count1++;
        }
    }
    ans[0] = count1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (solution[i] == guess[j] && solution[i] && guess[j])
            {
                solution[i] = 0;
                guess[j] = 0;
                count2++;
            }
        }
    }
    ans[1] = count2;
    return ans;
}