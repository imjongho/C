/*
		1. ���α׷� ���: 1�ߵ�(yard)�� 91.44 ��Ƽ����(cm)��� �մϴ�. 150�ߵ�� �� ��Ƽ�������� ����ϴ� ���α׷��� �ۼ��մϴ�.
		2. ������		: ����ȣ
		3. �����ۼ���	: 2020. 3. 27
		4. ����������	: 2020. 3. 27
		5. �۾����� �� ������Ʈ, ����
			//���α׷� ���� ���:
			//�۾����� �̸�: Ch02
			//������Ʈ �̸�: Ch02
			//�ҽ����� �̸�: ex2-6.c
*/

#include <stdio.h>

int main(void)
{
	float yard = 91.44;
	// �ڷ����� float�� ����� �Ǽ��� 91.44�� yard��� ������ �����մϴ�.
	printf("150�ߵ�� %f��Ƽ�����Դϴ�.\n", yard * 150);
	// 1�ߵ尡 91.44(cm)�̹Ƿ� 150�ߵ�� yard * 150�Դϴ�.
	// yard * 150�� �Ǽ����̹Ƿ� ��ȯ ���� %f�� ����մϴ�. 
	
	return 0;
}