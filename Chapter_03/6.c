#include<stdio.h>

int main()
{
	double quart = 0;
	double water_m = 3.0e-23;
	printf("������ˮ�Ŀ�������");
	scanf_s("%lf", &quart);
	printf("%g����ˮ������ˮ��������Ϊ��%e", quart, quart * (950 / water_m));

	return 0;
}