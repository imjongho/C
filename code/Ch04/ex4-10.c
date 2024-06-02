#include <stdio.h>

// 매크로 정의
#define DIV(x, y) ((x) / (y))

int main(void)
{
	float x, y; // 실수이므로 float으로 변수 선언

	printf("두 개의 실수 입력\n");
	scanf("%f %f", &x, &y); // float이므로 변환명세 %f
	
	printf("%f / %f = %f\n", x, y, DIV(x, y));
	// 두개의 실수를 입력 받아 나누고 출력

	return 0;
}