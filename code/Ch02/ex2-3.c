/*
		1. ���α׷� ���: 6�� ������ ������, ������, �ټ������� ����ϴ� ���α׷��� �ۼ��մϴ�.
		2. ������		: ����ȣ
		3. �����ۼ���	: 2020. 3. 26
		4. ����������	: 2020. 3. 26
		5. �۾����� �� ������Ʈ, ����
			//���α׷� ���� ���:
			//�۾����� �̸�: Ch02
			//������Ʈ �̸�: Ch02
			//�ҽ����� �̸�: ex2-3.c
*/

#include <stdio.h>

int main(void)
{
	int a = 6;
	// 6�� �����̵� �������̵��� ��� 6�� ������ ���� ���̱� ������ �ڷ����� int�� ����� ���� 6�� a��� ������ �����մϴ�. 
	printf("6�� ������? %d\n", a*a);
	printf("6�� ��������? %d\n", a*a*a);
	printf("6�� ��������? %d\n", a*a*a*a);
	printf("6�� �ټ�������? %d\n", a*a*a*a*a);
	// 6�� n������ �������̹Ƿ� ��ȯ ���� %d�� ����մϴ�.

	return 0;
}