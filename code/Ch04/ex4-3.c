#include <stdio.h>

int main(void)
{
	//printf("%011.6lf\n", 3.141592);

	// printf("%05d\n", 31);

	/* int salary = 0;
	printf("������ �Է� =>");
	scanf("%d", &salary); */

	/* float degree = 0;
	printf("������ �µ��� �Է�(�Ҽ���) =>");
	scanf("%f", &degree);
	printf("������ �µ��� %f�Դϴ�.\n", degree); */
	
	int i = 59;
	printf("%06d\n", i);
	printf("%#06X\n", i);
	printf("%-#6x\n", i);
	printf("%06o\n", i);
	printf("%010s\n", "SEOUL");
	printf("%-10s\n", "SEOUL");

	return 0;
}