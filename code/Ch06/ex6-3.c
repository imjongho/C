#include <stdio.h> //printf() �� �̿��� ���� ������� ����

int main(void) {
   int invalid_operator = 0; 
   char operator; 
   float number1, number2, result;
   printf("�� ���� ������ ���� ���·� �Է��ϼ���.\n"); 
   printf("�����ڴ� �װ���(+, -, *, / ) ���� �ϳ����� �մϴ�.\n"); 
   printf("number1 ������ number2\n"); 
   scanf("%f %c %f", &number1, &operator, &number2);

   switch (operator) {
      case '*':
         result = number1 * number2;
         break;
      case '/':
         result = number1 / number2;
         break;
      case '+':
         result = number1 + number2;
         break;
      case '-':
         result = number1 - number2;
         break;
      default: 
         invalid_operator = 1;
   }
   switch (invalid_operator) { 
      case 1: 
         printf("�����ڰ� �߸� �ԷµǾ����ϴ�.\n"); 
         break; 
      default: printf("\n>>>>>>>> > �����\n"); 
         printf("% 5.2f % c % 5.2f = % 5.2f \n", number1, operator, number2, result); 
         break; 
   }

   return 0;
}