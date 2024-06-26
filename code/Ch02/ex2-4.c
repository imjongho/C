/*
		1. 프로그램 기능: 현재의 1달러의 원화 환율을 찾아 변수에 저장하고, 다른 변수에는 800달러를 저장하여 해당 달러가 몇 원인지 츨력하는 프로그램을 작성합니다. 
		2. 만든이		: 임종호
		3. 최초작성일	: 2020. 3. 26
		4. 최종수정일	: 2020. 3. 26
		5. 작업공간 및 프로젝트, 파일
			//프로그램 저장 장소:
			//작업공간 이름: Ch02
			//프로젝트 이름: Ch02
			//소스파일 이름: ex2-4.c
*/

#include <stdio.h>

int main(void)
{
	int a = 1220;
	// 현재 1달러의 원화 환율은 1220원입니다.
	// 따라서 자료유형 int를 사용해 정수 1220을 a라는 변수에 저장합니다.
	printf("현재의 1달러와 원화 환율은 %d원입니다.\n", a);
	// 변수 a에 있는 정수값을 출력하기 위해 변환 명세 %d를 사용합니다.
	int b = a * 800;
	// 굳이 다른 변수를 취할 필요없이 위에서 출력해도 되는 것 같지만 문제에는 다름 변수를 사용하라고 했으니 b라는 변수를 사용하겠습니다. 
	// 1달러에 1220원이었으니 800달러는 1220 * 800(원)이 되는데 1220원을 a라는 변수에 저장했기에 a를 사용해줍니다.
	// 따라서 자료유형 int를 사용해 정수 a * 800을 b라는 변수에 저장합니다.
	printf("800달러는 %d원입니다.\n", b);
	// 변수 b에 있는 정수값을 출력하기 위해 변환 명세 %d를 사용합니다.

	return 0;
}