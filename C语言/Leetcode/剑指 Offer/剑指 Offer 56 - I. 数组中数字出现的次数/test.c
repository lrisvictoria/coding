#define _CRT_SECURE_NO_WARNINGS 1 

/*
һ���������� nums �����������֮�⣬�������ֶ����������Ρ���д�����ҳ�������ֻ����һ�ε����֡�Ҫ��ʱ�临�Ӷ���O(n)���ռ临�Ӷ���O(1)��

ʾ�� 1��

���룺nums = [4,1,4,6]
�����[1,6] �� [6,1]
ʾ�� 2��

���룺nums = [1,2,10,4,1,4,3,3]
�����[2,10] �� [10,2]

*/



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumbers(int* nums, int numsSize, int* returnSize)
{
    int* ans = (int*)calloc(2, sizeof(int));
    int ret = 0, pos = 0;
    // 1.��tmp�������������ret��ŵ�ֵΪ��������
    for (int i = 0; i < numsSize; i++)
    {
        ret ^= nums[i];
    }
    // 2.�ҵ��ʺϷ���Ķ�����λ��������λ�����1����ô��˵������������һλ��ͬ
    // ��ô�Ͱ�����һλ���������ݷ��飬��pos��¼��һλ
    for (int i = 0; i < 32; i++)
    {
        if (((ret >> i) & 1))
        {
            pos = i;
            break;
        }
    }
    // 3.���з��飬ĳһλΪ1/0�ķ���
    for (int i = 0; i < numsSize; i++)
    {
        if (((nums[i] >> pos) & 1) == 0)
        {
            ans[0] ^= nums[i];// �����ɶԵ����Ϊ0��ʣ�¾���һ������
        }
    }
    ans[1] = ret ^ ans[0];// retΪ�����������ans[0]Ϊһ�����������
                          // ����һ�������Ҳ�е����ͳɶԵ�
                          // �����Ƕ����������һ�������а��ˣ�ʣ�µľ�����һ������
    *returnSize = 2;
    return ans;
}
