#include <stdio.h>

int main(void)
{
	char a = 65; // 정수 65를 문자형 변수 a에 저장

	printf("십진수 65를 문자형태로 출력하면 %c입니다.\n", a);
	printf("십진수 75를 문자형태로 출력하면 %c입니다.\n", a+10);
	// 아스키 코드로 'A' = 65 'K' = 75 

	return 0;
}