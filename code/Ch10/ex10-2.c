#include <stdio.h>

int main(void)
{
   int i = 0;
   int point[] = { 3, 5, 2, 12, 23 };
   int aryLength = sizeof(point) / sizeof(int);

   printf("�迭 point[i]�� �̿��Ͽ� ���Ұ��� ���\n");
   for (i = 0; i < aryLength; i++)
   {
      printf("point[%d] = %d ", i, point[i]);
   }
   printf("\n\n");

   printf("�ּ� ��� point�� �̿��Ͽ� ������ �ּҰ��� ���Ұ��� ����\n");
   for (i = 0; i < aryLength; i++)
   {
      printf("(point + %d) == %p, *(point + %d) == %d\n", i, point + i, i, *(point + i));
   }

   return 0;
}