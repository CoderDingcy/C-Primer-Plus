#include<stdio.h>

int main()
{
	float num = 0;
	
	//���븡����
	printf("Enter a floating-point value:");
	scanf_s("%f",&num);

	//���
	printf("fixed-point notation:%f",num);

	printf("expointial notation:%e",num);


	return 0;
}