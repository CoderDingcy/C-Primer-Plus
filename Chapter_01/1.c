#include<stdio.h>

int main()
{
	//��ʼ��Ӣ��ֵ
	double inch = 0;

	printf("������Ӣ��ֵ��");
	scanf_s("%lf", &inch);

	//5.4�е�5ָ����������ȣ�����С���㣩 ���е�4ָ����Ч���ֵĸ��� 
	printf("������Ӣ��ֵ��Ӧ������ֵΪ��%5.4lf", inch * 2.54);


	return 0;
}