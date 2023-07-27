#include<stdio.h>

int main()
{
	double quart = 0;
	double water_m = 3.0e-23;
	printf("请输入水的夸脱数：");
	scanf_s("%lf", &quart);
	printf("%g夸脱水包含的水分子数量为：%e", quart, quart * (950 / water_m));

	return 0;
}