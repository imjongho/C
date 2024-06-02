#include <stdio.h>

int main(void)
{
	const double PHI = 3.14; // 원주율 상수 선언
	double r = 4.38; // 반지름 변수 선언

	printf("반지름이 %lf인 구의 체적은 %lf입니다.\n", r, 4*PHI*r*r*r/3);
	// 자료유형이 double이므로 %lf 사용

	return 0;
}