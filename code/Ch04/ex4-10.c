#include <stdio.h>

// ��ũ�� ����
#define DIV(x, y) ((x) / (y))

int main(void)
{
	float x, y; // �Ǽ��̹Ƿ� float���� ���� ����

	printf("�� ���� �Ǽ� �Է�\n");
	scanf("%f %f", &x, &y); // float�̹Ƿ� ��ȯ�� %f
	
	printf("%f / %f = %f\n", x, y, DIV(x, y));
	// �ΰ��� �Ǽ��� �Է� �޾� ������ ���

	return 0;
}