#include<stdio.h>

int main()
{
	double pint, cup, once, bigspoon, teaspoon;
	printf("请输入杯数：");
	scanf_s("%lf", &cup);

	printf("相应品脱数：%g\n", cup / 2);
	printf("相应盎司数：%g\n", cup * 8);
	printf("相应大汤勺数：%g\n", cup * 16);
	printf("相应茶勺数：%g\n", cup * 48);



	return 0;
}