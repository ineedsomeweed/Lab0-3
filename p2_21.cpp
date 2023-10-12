// ConsoleApplication6.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>


int main() {
	//rectangle
	for (int a = 0; a != 9; a++) {

		for (int b = 0; b != 9; b++) {

			if ((a == 0) || (a == 8) || (b == 8) || (b == 0)) {
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}

	// 0
	printf("      ***\n");
	printf("    *     *\n");
	printf("  *         *\n");
	printf("  *         *\n");
	printf("  *         *\n");
	printf("  *         *\n");
	printf("  *         *\n");
	printf("    *     *\n");
	printf("      ***\n");
	printf("\n");

	//arrow
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2 - i; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i * 2; k++) {
			printf("*");
		}
		printf("\n");
	}
	for (int j = 0; j <= 5; j++) {
		printf("   *\n");
	}

	//diamond

	int i, j, r= 5;


	for (i = 0; i < r; i++)
	{
		for (j = r - 1; j > i; j--)
		{
			printf(" ");
		}
		printf("*");
		for (j = 0; j <= (i - 1) * 2; j++)
		{
			printf(" ");
		}
		if (i == 0)
		{
			printf("\n");
		}
		else
		{
			printf("*\n");
		}
	}

	for (i = r - 1; i > 0; i--)
	{
		for (j = r; j > i; j--)
		{
			printf(" ");
		}
		printf("*");
		for (j = 1; j < (i - 1) * 2; j++)
		{
			printf(" ");
		}
		if (i == 1)
		{
			printf("\n");
		}
		else
		{
			printf("*\n");
		}
	}

}