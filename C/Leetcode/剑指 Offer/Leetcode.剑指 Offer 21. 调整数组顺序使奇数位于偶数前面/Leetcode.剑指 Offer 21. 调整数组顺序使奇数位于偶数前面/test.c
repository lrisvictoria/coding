#define _CRT_SECURE_NO_WARNINGS 1 
/*
����һ���������飬ʵ��һ�����������������������ֵ�˳��ʹ�����������������ǰ�벿�֣�����ż��������ĺ�벿�֡�
*/

/*
���룺nums = [1,2,3,4]
�����[1,3,2,4]
ע��[3,1,2,4] Ҳ����ȷ�Ĵ�֮һ��
*/

int* exchange(int* nums, int numsSize, int* returnSize)
{
	int* left = nums;
	int* right = nums + numsSize - 1;
	while (left < right)
	{
		while (left < right && *left % 2 == 1)//���������������
			left++;
		while (left < right && *right % 2 == 0)//�����ż��������
			right--;
		//��������ҵ�ż�����ұ��ҵ������ˣ��Ϸ�����ѭ�����ٽ��У���ʼ����
		int tmp = *left;
		*left = *right;
		*right = tmp;
	}
	*returnSize = numsSize;
	return nums;
}