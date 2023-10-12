// ConsoleApplication2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float height, m, weight, BMI;
	printf("======BMI======\n");
	printf("Height(cm):");
	scanf_s("%f", &height);
	printf("Weight(kg):");
	scanf_s("%f", &weight);
	printf("===============\n");

	m = height / 100;
	BMI = weight / (m*m);
	printf("BMI = %.1f\n\n", BMI);

	if (BMI < 18.5)
		printf("過輕\n\n");

	if (BMI >= 18.5 && BMI < 24.9)
		printf("正常\n\n");

	if (BMI >= 25 && BMI < 29.9)
		printf("過重\n\n");

	if (BMI >= 30)
		printf("肥胖\n\n");


	system("PAUSE");
	return 0;
}