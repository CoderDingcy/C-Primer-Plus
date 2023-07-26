#include<stdio.h>

int main()
{
	//初始化英寸值
	double inch = 0;

	printf("请输入英寸值：");
	scanf_s("%lf", &inch);

	//5.4中的5指定输出结果宽度（包括小数点） 其中的4指定有效数字的个数 
	printf("与输入英寸值相应的厘米值为：%5.4lf", inch * 2.54);


	return 0;
}