#define _CRT_SECURE_NO_WARNINGS 1 
//BC98 ������ɾ��ָ������
//˼·���䣺����˼��
int main()
{
	int n;
	scanf("%d", &n);
	int arr[50];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int del;
	scanf("%d", &del);
	int j = 0;//��¼�������λ�õ��±�
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != del)
			arr[j++] = arr[i];//�����ã���++���ȴ�����ݣ�������������
		//���arr[i]==del,��ô��������Թ��������������±�
	}
	for (int i = 0; i < j; i++)//��ʱj��ֵ�������������Ԫ�صĸ���
	{
		printf("%d ", arr[i]);
	}
	return 0;
}