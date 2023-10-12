// ConsoleApplication8.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>

int main(void) {


	int num1;
	int num2;

	printf("Enter a number:\n");
	scanf_s("%d%d", &num1, &num2);

	if (num1 % num2 == 0)
		printf("num1 is multiple of num2");
	else
		printf("num1 is not multiple of num2");

	_getch();
	return 0;


}