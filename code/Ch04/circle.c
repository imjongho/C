#include "circle.h" // ����� ���� ������� ���

int main(void)
{
	double x = 0; // x�� ������

	printf("���� ������ �Է�(�Ǽ�)\n");
	scanf("%lf", &x); // double�̹Ƿ� ��ȯ�� %lf
	printf("���� �ѷ���? %lf\n", CIRCUM(x));
	printf("���� ������? %lf\n", AREA(x));

	return 0;
}