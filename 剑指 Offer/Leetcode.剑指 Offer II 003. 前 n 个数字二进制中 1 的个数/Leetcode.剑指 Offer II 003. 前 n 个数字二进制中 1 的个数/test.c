#define _CRT_SECURE_NO_WARNINGS 1 
//����һ���Ǹ����� n ������� 0 �� n ֮���ÿ�����ֵĶ����Ʊ�ʾ�� 1 �ĸ����������һ�����顣

/*
����: n = 2
���: [0,1,1]
����: 
0 --> 0
1 --> 1
2 --> 10
*/

/*
����: n = 5
���: [0,1,1,2,1,2]
����:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101
*/

//�����ұ����뿪��һ����̬����ģ����Ƕ��ھ�̬������Ϊ�䳤���鿪��ʱ������
//֮ǰ����ƽ���ı䳤�����ǿ���ʹ�õģ����Ƕ��ڵ�ǰ�������ȷʵû���ܹ�
//static int ans[n + 1]��������ˢ����Ƚ��٣�ѧ��Ҳ�Ƚ��٣����Բ�̫���
//�����Ҳ��ȷ�˱�����ϢΪans�Ĵ洢��С���Ǻ㶨��
//Ҳ�������϶��ھ�̬����ʹ�ñ䳤�����޷�ʹ�ð�...
//�ȵ��Ժ��Ҿ��ö�̬�ڴ棬��malloc���ٰ�...
//���ԾͲ����

//plan1��
//int* countBits(int n, int* returnSize) {
//    *returnSize = n + 1;//ע�����ﷵ�صĳ���
//    int* ans = malloc(sizeof(int) * (n + 1));//mallocһ������
//    int count = 0;//ͳ��һ�����Ķ��������ж��ٸ�1
//    int k = 0;//����������±�
//    for (int i = 0; i <= n; i++)//�����Ĵ���Ϊn + 1��
//    {
//        count = 0;//ÿ��ѭ����Ҫ����
//        for (int j = 0; j < 32; j++)
//        {
//            if ((i >> j) & 1)
//                count++;
//        }
//        ans[k++] = count;//count�ۼ���Ϻ�¼��ans
//    }
//    return ans;
//}
//plan2��
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    *returnSize = n + 1;
    int* ans = malloc(sizeof(int) * (n + 1));
    int count = 0;
    int k = 0;
    for (int i = 0; i <= n; i++)
    {
        count = 0;
        int j = i;//����һ��i����ѭ����ʹ�ñ���iֵ�����ı�
        while (j)
        {
            j = j & (j - 1);
            count++;
        }
        ans[k++] = count;
    }
    return ans;
}
//����һ��%2/2������������1������
//����1�����������������в�ʹ�ã��Ҿ�ʹ�ñȽϺ������Ч�ʽϸߵİ취��~