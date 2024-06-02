#include <stdio.h>

int main(void)
{
	int a, b;

	printf("정수1과 정수2의 값을 입력(16진수)\n");
	scanf("%x %x", &a, &b);
	// 사용자에게 두 개의 정수를 16진수 변환명세 %x로 입력받음 

	printf("%x * %x = %x\n", a, b, a * b);
	// 두 수의 곱을 16진수로 출력

	return 0;
}