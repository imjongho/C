#include <stdio.h>

int main(void)
{
	int a, b;

	printf("����1 �Է�(16����)\n"); scanf("%x", &a);
	printf("����2 �Է�(16����)\n"); scanf("%x", &b);
	// ����ڿ��� �� ���� ������ 16���� ��ȯ�� %x�� �Է¹��� �ּ� &���

	printf("�� ���� ���� %d + %d = %d\n", a, b, a + b);
	// �� ���� ���� �������� ��� 

	return 0;
}