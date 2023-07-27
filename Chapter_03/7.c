#include<stdio.h>

int main()
{
	double height_inch = 0;
	printf("请输入身高（/英寸）：");
	scanf_s("%lf", &height_inch);

	printf("以厘米为单位显示身高为：%g", height_inch * 2.54);


	return 0;
}