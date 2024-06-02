#include <stdio.h>

int main(void)
{
	int a = 0;

	printf("%10s%10s%10s\n", "8진수", "10진수", "16진수");
	printf("%9o%10d%10x\n", a, a, a); a = a + 1; // 0에서 a + 1로 15까지 올림
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); 
	// 변환명세 8진수 %o 10진수 %d 16진수 %x 문자열 %s
	// width 폭은 그림에 맞게 적절히 사용

	return 0;
}