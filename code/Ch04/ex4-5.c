#include <stdio.h>

int main(void)
{
	int a;

	printf("하나의 정수를 입력해주세요.\n");
	scanf("%d", &a); // 사용자에게 입력받음 주소 &사용
	printf("8진수 => %o\n십진수 => %d\n16진수 => %x\n", a, a, a);
	// 변환명세 8진수 %o 10진수 %d 16진수 %x

	return 0;
}