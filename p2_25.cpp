// ConsoleApplication6.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>


int main()

{

	for (int a = 0; a != 9; a++) {

		for (int b = 0; b !=9; b++) {

			if ((a == 0) || (a == height - 1) || (b == width - 1) || (b == 0)) {
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}