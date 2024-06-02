#include <stdio.h>

int main(void)
{
	//printf("%011.6lf\n", 3.141592);

	// printf("%05d\n", 31);

	/* int salary = 0;
	printf("월급을 입력 =>");
	scanf("%d", &salary); */

	/* float degree = 0;
	printf("현재의 온도를 입력(소수로) =>");
	scanf("%f", &degree);
	printf("현재의 온도는 %f입니다.\n", degree); */
	
	int i = 59;
	printf("%06d\n", i);
	printf("%#06X\n", i);
	printf("%-#6x\n", i);
	printf("%06o\n", i);
	printf("%010s\n", "SEOUL");
	printf("%-10s\n", "SEOUL");

	return 0;
}