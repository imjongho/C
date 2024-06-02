#include "circle.h" // 사용자 정의 헤더파일 사용

int main(void)
{
	double x = 0; // x가 반지름

	printf("원의 반지름 입력(실수)\n");
	scanf("%lf", &x); // double이므로 변환명세 %lf
	printf("원의 둘레는? %lf\n", CIRCUM(x));
	printf("원의 면적은? %lf\n", AREA(x));

	return 0;
}