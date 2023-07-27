#include<stdio.h>

int main()
{

	int age = 0;

	//这里注意该数需由浮点数接收
	float seconds = 3.156e+7;

	//输入年龄
	printf("请输入年龄：");
	scanf_s("%d", &age);

	//输出年龄对应秒数
	printf("年龄对应秒数为：%e", age * seconds);

	return 0;
}