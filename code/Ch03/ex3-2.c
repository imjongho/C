#include <stdio.h>

int main(void)
{
	int a = 025; // 8진수는 0, 16진수는 0x

	printf("8진수로 출력: %o\n10진수로 출력: %d\n16진수로 출력: %x\n", a, a, a); 
	// 8진수 출력은 변환명세로 %o, 16진수 출력은 변환명세 %x 

	return 0;
}