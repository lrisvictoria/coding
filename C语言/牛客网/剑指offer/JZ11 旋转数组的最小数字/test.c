#define _CRT_SECURE_NO_WARNINGS 1 
//����
//��һ������Ϊ n �ķǽ������飬����[1, 2, 3, 4, 5]������������ת������һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ��
//���һ����ת���飬��������[3, 4, 5, 1, 2]������[4, 5, 1, 2, 3]�����ġ����ʣ���������һ����ת���飬�������е���Сֵ��
//
//���ݷ�Χ��1 \le n \le 100001��n��10000������������Ԫ�ص�ֵ: 0 \le val \le 100000��val��10000
//Ҫ�󣺿ռ临�Ӷȣ�O(1)O(1) ��ʱ�临�Ӷȣ�O(logn)O(logn)
//ʾ��1
//���룺
//[3, 4, 5, 1, 2]
//����ֵ��
//1
//ʾ��2
//���룺
//[3, 100, 200, 3]
//����ֵ��
//3
//plan1�����ֲ���
//int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
//    int left = 0;
//    int right = rotateArrayLen - 1;
//    while (left < right)
//    {
//        int mid = left + (right - left) / 2;
//        if (rotateArray[mid] > rotateArray[right])
//            left = mid + 1;
//        else if (rotateArray[mid] < rotateArray[right])
//            right = mid;
//        else
//            right--;
//    }
//    return rotateArray[left];
//}
//plan2���������
void bubbleSort(int* arr, int sz)
{
    for (int i = 0; i < sz - 1; i++)
    {
        int flag = 1;
        for (int j = 0; j < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                flag = 0;
            }
        }
        if (1 == flag)
            break;
    }
}
int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
    bubbleSort(rotateArray, rotateArrayLen);
    return rotateArray[0];
}