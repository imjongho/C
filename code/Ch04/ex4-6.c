#include <stdio.h>

int main(void)
{
	int a;

	printf("정수1 입력(8진수)\n");
	scanf("%o", &a); // 사용자에게 입력받음 주소 &사용
	printf("8진수 => %o\n십진수 => %d\n16진수 => %x", a, a, a);
	// 변환명세 8진수 %o 10진수 %d 16진수 %x

	return 0;
}