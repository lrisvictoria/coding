#define _CRT_SECURE_NO_WARNINGS 1 

//����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
//�����ʹ��ʱ�临�Ӷ�Ϊ O(log n) ���㷨��

//����: nums = [1, 3, 5, 6], target = 5
//��� : 2

//�Ҳ����±�

int searchInsert(int* nums, int numsSize, int target) {
    int i = 0;
    int count = 0;//���±�һ��
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] < target)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}