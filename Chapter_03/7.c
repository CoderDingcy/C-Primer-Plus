#include<stdio.h>

int main()
{
	double height_inch = 0;
	printf("��������ߣ�/Ӣ�磩��");
	scanf_s("%lf", &height_inch);

	printf("������Ϊ��λ��ʾ���Ϊ��%g", height_inch * 2.54);


	return 0;
}