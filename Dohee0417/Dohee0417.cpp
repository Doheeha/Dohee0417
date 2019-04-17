// Dohee0417.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

int main()
{

	int a, b, c;

	printf("Hello \n");
	printf("dohee \n");

	printf("a b =");
	scanf_s("%d %d",&a, &b);
	c = a + b;

	printf("%d + %d 는 %d 입니다.\n", a, b, c);
}
