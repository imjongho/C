#include <stdio.h>

long fact(int n); //�Լ� ����

int main(void)
{
   int i;
   double psum = 0.0, nsum = 0.0, diff = 0.0;
   // ������ �ΰ��� ���Ϸ����� ���� psum, nsum���� ����
   // diff�� �� ���Ϸ����� ����
   for (i = 0;; i++)//���ѷ����� ����
   {
      psum += (1.0 / fact(i)); //���ӵ� ���Ϸ��� �� ���� �� 
      nsum = psum + (1.0 / fact(i + 1)); //���ӵ� ���Ϸ��� �� ���� ��
      diff = nsum - psum; //�μ��� ������ ����
      if (diff < 0.0000001) //������ 0.0000001���� �۾�����
         break; //���ѷ��� ����
   }
   printf("���̰� 0.0000001���� ������ ���Ϸ����� %.7lf�Դϴ�\n", psum);
   //���ѷ����� ���� ���� ���� ������ ���Ϸ��� ���
   return 0;
}

long fact(int n)	// ����Լ�
{
   if (n <= 1)
      return 1;
   else
      return n * fact(n - 1); // n! ���ϱ�
}