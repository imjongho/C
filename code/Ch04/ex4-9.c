#include <stdio.h>

int main(void)
{
	int a, b;

	printf("����1�� ����2�� ���� �Է�(16����)\n");
	scanf("%x %x", &a, &b);
	// ����ڿ��� �� ���� ������ 16���� ��ȯ�� %x�� �Է¹��� 

	printf("%x * %x = %x\n", a, b, a * b);
	// �� ���� ���� 16������ ���

	return 0;
}