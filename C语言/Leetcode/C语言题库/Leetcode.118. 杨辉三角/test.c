#define _CRT_SECURE_NO_WARNINGS 1 

/*
����һ���Ǹ����� numRows�����ɡ�������ǡ���ǰ numRows �С�
�ڡ�������ǡ��У�ÿ�����������Ϸ������Ϸ������ĺ͡�
*/

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

 /*
  * numRows��ӡ��������������Ҫ����һ�����鷵��������׵�ַ
  * returnSize����������������ĵ�ַ
  * returnColumnSizes�������ÿһ�е�����
  */
int** generate(int numRows, int* returnSize, int** returnColumnSizes)
{
    int** ret = (int**)malloc(sizeof(int*) * numRows);
    // ret��һ��ָ�룬ָ��ָ��һ�������Ŀռ䣬�ռ���Ԫ��Ϊint*
    // ����Ϊint*��ָ��ָ��һ���������飬����Ԫ��Ϊint��Ϊ������ǵ�����һ��
    *returnSize = numRows;
    // returnSizeΪ���������
    *returnColumnSizes = (int*)malloc(sizeof(int) * numRows);
    // returnColumnSizes��һ������ָ�룬���һ��ָ��ĵ�ַ
    // *�󣬵õ�һ��ָ��ĵ�ַ����malloc����һ�������Ŀռ�
    // �ռ乲��numRows��Ԫ�أ�Ԫ��Ϊint��Ϊÿ�е�����
    for (int i = 0; i < numRows; i++)
    {
        (*returnColumnSizes)[i] = i + 1;// ÿ��Ԫ��Ϊ��ǰ���� + 1
        ret[i] = (int*)malloc(sizeof(int) * (i + 1));
        // retΪ����ָ�룬ret[i]���ʵ�ÿ�е�ַ����Ϊÿ�п��ٿռ�
        // ��СΪi + 1������
        ret[i][0] = 1;
        ret[i][i] = 1;
        if (i >= 2)
        {
            for (int j = 1; j < i; j++)
            {
                ret[i][j] = ret[i - 1][j] + ret[i - 1][j - 1];
            }
        }
    }
    return ret;
}