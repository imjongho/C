#include <stdio.h>

int main(void)
{
	int a = 0;

	printf("%10s%10s%10s\n", "8����", "10����", "16����");
	printf("%9o%10d%10x\n", a, a, a); a = a + 1; // 0���� a + 1�� 15���� �ø�
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); a = a + 1;
	printf("%9o%10d%10x\n", a, a, a); 
	// ��ȯ�� 8���� %o 10���� %d 16���� %x ���ڿ� %s
	// width ���� �׸��� �°� ������ ���

	return 0;
}