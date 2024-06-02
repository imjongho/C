#include <stdio.h>

int main(void)
{
	int a, b;

	printf("정수1 입력(16진수)\n"); scanf("%x", &a);
	printf("정수2 입력(16진수)\n"); scanf("%x", &b);
	// 사용자에게 두 개의 정수를 16진수 변환명세 %x로 입력받음 주소 &사용

	printf("두 수의 합은 %d + %d = %d\n", a, b, a + b);
	// 두 수의 합을 십진수로 출력 

	return 0;
}