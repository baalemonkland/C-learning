/*�� N ����Χ��һȦ��˳���źţ��ӵ�һ���˿�ʼ������1 �� M ������ ����
�Ǳ��� M �����˳�Ȧ�ӡ���������µ���ԭ�����ڵڼ��š�*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int M, N, Mj = 1024, sum = 0;
	printf("������N��M:\n");
	scanf("%d %d", &N, &M);
	int mirror[1024] = { 0 };//��Ҵ���¼����0��ȥ��1����)
	for (int i = 0; i < N; i++)
	{
		mirror[i] = 1;
	}//��ʼ��
	for (int j = 0, k = 0; j < N + 1; j++)
	{//j����������ţ�k��������
//�Զ����˳���
		if (mirror[j] == 1)//ȷ����Ҵ��
		{
			sum = sum + 1;//����
			if (sum == M)
			{
				k++;//��¼�ִ�
				if (k == N)break;//��Ϸ�������� 
				mirror[j] = 0;//����
				sum = 0;
			}
		}
		if (j == N - 1)//���ȿ�����;
		{
			j = -1;//�γ�Բ��
		}
	}
	//�Ҵ��߲�ѯ
	for (int l = 0; l < N; l++){if (mirror[l] != 0) printf("%d\n", l + 1);}
	return 0;
}