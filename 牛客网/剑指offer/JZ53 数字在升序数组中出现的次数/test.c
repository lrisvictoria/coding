#define _CRT_SECURE_NO_WARNINGS 1 
//����
//����һ������Ϊ n �ķǽ��������һ���Ǹ������� k ��Ҫ��ͳ�� k �������г��ֵĴ���
//
//���ݷ�Χ��0 \le n \le 1000, 0 \le k \le 1000��n��1000, 0��k��100��������ÿ��Ԫ�ص�ֵ���� 0 \le val \le 1000��val��100
//Ҫ�󣺿ռ临�Ӷ� O(1)O(1)��ʱ�临�Ӷ� O(logn)O(logn)
//ʾ��1
//���룺
//[1, 2, 3, 3, 3, 3, 4, 5], 3
//����ֵ��
//4
//ʾ��2
//���룺
//[1, 3, 4, 5], 6
//����ֵ��
//0

int GetNumberOfK(int* data, int dataLen, int k)
{
	int left = 0;
	int right = dataLen - 1;
	int arr_right = 0;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (data[mid] > k)
		{
			right = mid - 1;
		}
		else if (data[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			left += 1;
			arr_right = mid;
		}
	}
	right = arr_right;
	left = 0;
	int arr_left = right + 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (data[mid] > k)
		{
			right = mid - 1;
		}
		else if (data[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			right -= 1;
			arr_left = mid;
		}
	}
	return arr_right - arr_left + 1;
}