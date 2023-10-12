// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
#include<stdio.h> 
#include<limits.h> 
int main()
{
	int min, max, i, n, num;
	min = INT_MAX;
	max = INT_MIN;
	for (i = 0; i < 3; i++)
	{
		printf("Number-%d: ", i + 1);
		scanf_s("%d", &num);
		if (num > max)	max = num;
		if (num < min)	min = num;
	}
printf("Smallest number = %d\nLargest number = %d", min, max);
}