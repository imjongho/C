#include <stdio.h>

int main(void)
{
	int a;

	printf("����1 �Է�(8����)\n");
	scanf("%o", &a); // ����ڿ��� �Է¹��� �ּ� &���
	printf("8���� => %o\n������ => %d\n16���� => %x", a, a, a);
	// ��ȯ�� 8���� %o 10���� %d 16���� %x

	return 0;
}