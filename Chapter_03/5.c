#include<stdio.h>

int main()
{

	int age = 0;

	//����ע��������ɸ���������
	float seconds = 3.156e+7;

	//��������
	printf("���������䣺");
	scanf_s("%d", &age);

	//��������Ӧ����
	printf("�����Ӧ����Ϊ��%e", age * seconds);

	return 0;
}