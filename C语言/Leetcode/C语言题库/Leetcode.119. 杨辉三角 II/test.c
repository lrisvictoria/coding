#define _CRT_SECURE_NO_WARNINGS 1 

/*
����һ���Ǹ����� rowIndex�����ء�������ǡ��ĵ� rowIndex �С�

�ڡ�������ǡ��У�ÿ�����������Ϸ������Ϸ������ĺ�
*/

// ͨ�������ķ���

// ��ִ�д���(rowIndex + 1) * (rowIndex - 1)
// (rowIndex)^2 - 1
// ʱ�临�Ӷȣ�O(N^2)
// �ռ临�Ӷȣ�O(N)

int* getRow(int rowIndex, int* returnSize)
{
    int* ans = (int*)malloc(sizeof(int) * (rowIndex + 1));// ���ٿռ�
    *returnSize = rowIndex + 1;
    for (int i = 0; i <= rowIndex; i++)
    {
        for (int j = i - 1; j > 0; j--)
        {
            ans[j] = ans[j] + ans[j - 1];
        }
        ans[i] = 1;
    }
    return ans;
}

// ��һ�к͵ڶ��в���Ҫ����ڶ���ѭ����ֱ����ans[i]���

// ֮���ֵ���𲽵������ٸ�����
// ��i = 1ʱ������[1, 1]
// i = 2 j = 1, j > 0
// ans[1] = ans[1] + ans[0] = 2
// ans[2] = 1

// ����һ�ε����������

// i = 3 j = 2������[1, 2, 1]
// ans[2] = ans[2] + ans[1] = 1 + 2 = 3;
// j-- j = 1
// ans[1] = ans[1] + ans[0] = 1 + 2 = 3
// j--
// �������