#define _CRT_SECURE_NO_WARNINGS 1 

//����һ������ nums �����顸��̬�͡��ļ��㹫ʽΪ��runningSum[i] = sum(nums[0]��nums[i]) ��
//
//�뷵�� nums �Ķ�̬�͡�

//���룺nums = [1, 2, 3, 4]
//�����[1, 3, 6, 10]
//���ͣ���̬�ͼ������Ϊ[1, 1 + 2, 1 + 2 + 3, 1 + 2 + 3 + 4] ��
//
//���룺nums = [1, 1, 1, 1, 1]
//�����[1, 2, 3, 4, 5]
//���ͣ���̬�ͼ������Ϊ[1, 1 + 1, 1 + 1 + 1, 1 + 1 + 1 + 1, 1 + 1 + 1 + 1 + 1] ��


//��ԭ�������޸�
//�޸Ĺ�������ݶ���ԭ����nums��
//��̬�ͼ���ֻ��Ҫ��Ԫ�� + ��һ�����޸ĵ�Ԫ�ؼ���

int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    for (int i = 1; i < numsSize; i++)
    {
        nums[i] += nums[i - 1];
    }
    return nums;
}
