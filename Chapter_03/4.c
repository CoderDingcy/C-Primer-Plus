#include<stdio.h>

int main()
{
	float num = 0;
	
	//输入浮点数
	printf("Enter a floating-point value:");
	scanf_s("%f",&num);

	//输出
	printf("fixed-point notation:%f",num);

	printf("expointial notation:%e",num);


	return 0;
}