#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct _Monster
{
   char name[20];       // ���� �̸�
   char state[20];      // ���� Ÿ��
   int HP;              // ���� ü��
   int STR;             // ���� ���ݷ�              
}Monster;

typedef struct _Hero
{
   char name[20];
   char skill_1[20];
   char skill_2[20];
   char skill_3[20];
   int HP;
   int MP;
}Hero;

typedef struct _Skill
{
   int skill_1_STR;
   int skill_1_MP;
   int skill_2_STR;
   int skill_2_MP;
   int skill_3_STR;
   int skill_3_MP;
}Skill;

int main(void)
{
   Monster monster1 = { "������Ʈ", "��", 30, 15 };
   Monster monster2 = { "�����׽�", "��", 40, 10 };
   Monster monster3 = { "����̾��", "�Ĺ�", 50, 5 };
   Hero hero = { "���", "���̾", "����", "���ʱ�", 50, 50 };
   Skill skill = { 30, 15, 20, 10, 10, 5 };

   int monster = 0;     // ��ȯ�� ����
   int com = 0, user = 0;   // ���� ���� �� ����
   int turn = 1, count = 0, RPS_freq = 0;
   int win = 0, lose = 0, draw = 0;
   int freq[3] = { 0, };
   int fire_skill = 0, water_skill = 0, plants_skill = 0;
   int total_damage = 0, total_attack = 0, total_mana;
   double start = 0, end = 0;
   char *monster_name[] = { monster1.name, monster2.name, monster3.name };
   // monster_name[0] = ������Ʈ, [1] = �����׽�, [2] = ����̾��
   char* RPS[] = { "����", "����", "��" };
   // RPS[0] = ����, [1] = ����, [2] = ��

   // 1. ���� ����
   start = clock();   // ���� �ð�

   printf("����� �������� ���Ϳ� �ο��� �մϴ�.\n");
   printf("���[ü��: 50][����: 50]\n");
   printf("����(���̾): 0, ����(����): 1, ��(���ʱ�): 2�� �����ϼ���.\n");
   printf("���̾[������: 30][����: 15]     ");
   printf("����[������: 20][����: 10]     ");
   printf("���ʱ�[������: 10][����: 5]\n");
   printf("����� ���ϴ�.\n");
   printf("---------------------------------------\n\n");

   // 2. ���͸� �������� ��ȯ 
   while (1)
   {
      srand((unsigned)time(NULL));
      monster = rand() % 3;   // ��ǻ�Ͱ� �������� ���͸� ����(0 ~ 2)
      printf("����� ������ ���ʹ� %s�Դϴ�.\n", monster_name[monster]);

      switch (monster)
      {
         case 0:
            printf("������Ʈ Ÿ��: %s, ", monster1.state);
            printf("ü��: %d, ���ݷ�: %d\n", monster1.HP, monster1.STR);
            break;
         case 1:
            printf("�����׽� Ÿ��: %s, ", monster2.state);
            printf("ü��: %d, ���ݷ�: %d\n", monster2.HP, monster2.STR);
            break;
         case 2:
            printf("����̾�� Ÿ��: %s, ", monster3.state);
            printf("ü��: %d, ���ݷ�: %d\n", monster3.HP, monster3.STR);
            break;
      }
      printf("\n---------------------------------------\n");

      // 3. ��ȯ�� ���Ϳ� ����(���� ���� �� ����)
      printf("\n!!���� ����!!\n\n");
      while (1)
      {
         printf("����: ");
         scanf("%d", &user);  // ����ڰ� ���� ���� �� ����

         com = rand() % 3;    // ��ǻ�Ͱ� �������� ���� ���� �� ����
         printf("��ǻ�� : %s VS ���� : %s\n\n", RPS[com], RPS[user]);
         RPS_freq++;

         if (monster == 0)          // ������Ʈ�� �ο�
         {
            if (com == user)
            {
               printf("�����ϴ�. ���� ������ �Ѿ�ϴ�.\n");
               draw++;
            }
            else if (com == 0)
            {
               if (user == 1)
               {
                  printf("�̰���ϴ�. ��ų: %s �ߵ�\n", hero.skill_2);
                  printf("������: %d\n", skill.skill_2_STR * 2);
                  printf("ȿ���� ���մϴ�. �������� 2��� �����ϴ�.\n");
                  monster1.HP = monster1.HP - skill.skill_2_STR * 2;
                  hero.MP = hero.MP - skill.skill_2_MP;
                  water_skill += skill.skill_2_STR * 2;
                  freq[1]++;
                  win++;
               }
               else if (user == 2)
               {
                  printf("�����ϴ�. %s���� ������ ���߽��ϴ�.\n", monster1.name);
                  printf("������: %d\n", monster1.STR);
                  hero.HP = hero.HP - monster1.STR;
                  total_damage += monster1.STR;
                  lose++;
               }
            }
            else if (com == 1)
            {
               if (user == 2)
               {
                  printf("�̰���ϴ�. ��ų: %s �ߵ�\n", hero.skill_3);
                  printf("������: %d\n", skill.skill_3_STR / 2);
                  printf("ȿ���� ���մϴ�. �������� 1/2��� �����ϴ�.\n");
                  monster1.HP = monster1.HP - skill.skill_3_STR / 2;
                  hero.MP = hero.MP - skill.skill_3_MP;
                  plants_skill += skill.skill_3_STR / 2;
                  freq[2]++;
                  win++;
               }
               else if (user == 0)
               {
                  printf("�����ϴ�. %s���� ������ ���߽��ϴ�.\n", monster1.name);
                  printf("������: %d\n", monster1.STR);
                  hero.HP = hero.HP - monster1.STR;
                  total_damage += monster1.STR;
                  lose++;
               }
            }
            else if (com == 2)
            {
               if (user == 0)
               {
                  printf("�̰���ϴ�. ��ų: %s �ߵ�\n", hero.skill_1);
                  printf("������: %d\n", skill.skill_1_STR * 0);
                  printf("������Ʈ�� �ҿ� �鿪�Դϴ�.\n");
                  monster1.HP = monster1.HP - skill.skill_1_STR * 0;
                  hero.MP = hero.MP - skill.skill_1_MP;
                  freq[0]++;
                  win++;
               }
               else if (user == 1)
               {
                  printf("�����ϴ�. %s���� ������ ���߽��ϴ�.\n", monster1.name);
                  printf("������: %d\n", monster1.STR);
                  hero.HP = hero.HP - monster1.STR;
                  total_damage += monster1.STR;
                  lose++;
               }
            }

            // ���� ��ġ�� ��Ȳ ����
            printf("\n%d���� ��Ȳ ����\n", turn++);
            printf("���� %s�� ü��: %d, ����: %d\n", hero.name, hero.HP, hero.MP);
            printf("���� %s�� ü��: %d\n", monster1.name, monster1.HP);

            // ������ ü���� 0 ���ϸ� �ο��� ����
            if (monster1.HP <= 0)
            {
               count++;
               printf("\n���� óġ �Ϸ�...\n");
               printf("���� ���Ͱ� ��ȯ�˴ϴ�.\n\n");
               break;
            }

            if (hero.HP <= 0 || hero.MP <= 0)
            {
               break;
            }
         }
         else if (monster == 1)     // �����׽��� �ο�
         {
            if (com == user)
            {
               printf("�����ϴ�. ���� ������ �Ѿ�ϴ�.\n");
               draw++;
            }
            else if (com == 0)
            {
               if (user == 1)
               {
                  printf("�̰���ϴ�. ��ų: %s �ߵ�\n", hero.skill_2);
                  printf("������: %d\n", skill.skill_2_STR * 0);
                  printf("�����׽��� ���� �鿪�Դϴ�.\n");
                  monster2.HP = monster2.HP - skill.skill_2_STR * 0;
                  hero.MP = hero.MP - skill.skill_2_MP;
                  freq[1]++;
                  win++;
               }
               else if (user == 2)
               {
                  printf("�����ϴ�. %s���� ������ ���߽��ϴ�.\n", monster2.name);
                  printf("������: %d\n", monster2.STR);
                  hero.HP = hero.HP - monster2.STR;
                  total_damage += monster2.STR;
                  lose++;
               }
            }
            else if (com == 1)
            {
               if (user == 2)
               {
                  printf("�̰���ϴ�. ��ų: %s �ߵ�\n", hero.skill_3);
                  printf("������: %d\n", skill.skill_3_STR * 2);
                  printf("ȿ���� ���մϴ�. �������� 2��� �����ϴ�.\n");
                  monster2.HP = monster2.HP - skill.skill_3_STR * 2;
                  hero.MP = hero.MP - skill.skill_3_MP;
                  plants_skill += skill.skill_3_STR * 2;
                  freq[2]++;
                  win++;
               }
               else if (user == 0)
               {
                  printf("�����ϴ�. %s���� ������ ���߽��ϴ�.\n", monster2.name);
                  printf("������: %d\n", monster2.STR);
                  hero.HP = hero.HP - monster2.STR;
                  total_damage += monster2.STR;
                  lose++;
               }
            }
            else if (com == 2)
            {
               if (user == 0)
               {
                  printf("�̰���ϴ�. ��ų: %s �ߵ�\n", hero.skill_1);
                  printf("������: %d\n", skill.skill_1_STR / 2);
                  printf("ȿ���� ���մϴ�. �������� 1/2��� �����ϴ�.\n");
                  monster2.HP = monster2.HP - skill.skill_1_STR / 2;
                  hero.MP = hero.MP - skill.skill_1_MP;
                  fire_skill += skill.skill_1_STR / 2;
                  freq[0]++;
                  win++;
               }
               else if (user == 1)
               {
                  printf("�����ϴ�. %s���� ������ ���߽��ϴ�.\n", monster2.name);
                  printf("������: %d\n", monster2.STR);
                  hero.HP = hero.HP - monster2.STR;
                  total_damage += monster2.STR;
                  lose++;
               }
            }

            // ���� ��ġ�� ��Ȳ ����
            printf("\n%d���� ��Ȳ ����\n", turn++);
            printf("���� %s�� ü��: %d, ����: %d\n", hero.name, hero.HP, hero.MP);
            printf("���� %s�� ü��: %d\n", monster2.name, monster2.HP);

            // ������ ü���� 0 ���ϸ� �ο��� ����
            if (monster2.HP <= 0)
            {
               count++;
               printf("\n���� óġ �Ϸ�...\n");
               printf("���� ���Ͱ� ��ȯ�˴ϴ�.\n\n");
               break;
            }

            if (hero.HP <= 0 || hero.MP <= 0)
            {
               break;
            }
         }
         else if (monster == 2)     // ����̾��� �ο�
         {
            if (com == user)
            {
               printf("�����ϴ�. ���� ������ �Ѿ�ϴ�.\n");
               draw++;
            }
            else if (com == 0)
            {
               if (user == 1)
               {
                  printf("�̰���ϴ�. ��ų: %s �ߵ�\n", hero.skill_2);
                  printf("������: %d\n", skill.skill_2_STR / 2);
                  printf("ȿ���� ���մϴ�. �������� 1/2��� �����ϴ�.\n");
                  monster3.HP = monster3.HP - skill.skill_2_STR / 2;
                  hero.MP = hero.MP - skill.skill_2_MP;
                  water_skill += skill.skill_2_STR / 2;
                  freq[1]++;
                  win++;
               }
               else if (user == 2)
               {
                  printf("�����ϴ�. %s���� ������ ���߽��ϴ�.\n", monster3.name);
                  printf("������: %d\n", monster3.STR);
                  hero.HP = hero.HP - monster3.STR;
                  total_damage += monster3.STR;
                  lose++;
               }
            }
            else if (com == 1)
            {
               if (user == 2)
               {
                  printf("�̰���ϴ�. ��ų: %s �ߵ�\n", hero.skill_3);
                  printf("������: %d\n", skill.skill_3_STR * 0);
                  printf("����̾��� �Ĺ����� ����޽��ϴ�.\n");
                  monster3.HP = monster3.HP - skill.skill_3_STR * 0;
                  hero.MP = hero.MP - skill.skill_3_MP;
                  freq[2]++;
                  win++;
               }
               else if (user == 0)
               {
                  printf("�����ϴ�. %s���� ������ ���߽��ϴ�.\n", monster3.name);
                  printf("������: %d\n", monster3.STR);
                  hero.HP = hero.HP - monster3.STR;
                  total_damage += monster3.STR;
                  lose++;
               }
            }
            else if (com == 2)
            {
               if (user == 0)
               {
                  printf("�̰���ϴ�. ��ų: %s �ߵ�\n", hero.skill_1);
                  printf("������: %d\n", skill.skill_1_STR * 2);
                  printf("ȿ���� ���մϴ�. �������� 2��� �����ϴ�.\n");
                  monster3.HP = monster3.HP - skill.skill_1_STR * 2;
                  hero.MP = hero.MP - skill.skill_1_MP;
                  fire_skill += skill.skill_1_STR * 2;
                  freq[0]++;
                  win++;
               }
               else if (user == 1)
               {
                  printf("�����ϴ�. %s���� ������ ���߽��ϴ�.\n", monster3.name);
                  printf("������: %d\n", monster3.STR);
                  hero.HP = hero.HP - monster3.STR;
                  total_damage += monster3.STR;
                  lose++;
               }
            }

            // ���� ��ġ�� ��Ȳ ����
            printf("\n%d���� ��Ȳ ����\n", turn++);
            printf("���� %s�� ü��: %d, ����: %d\n", hero.name, hero.HP, hero.MP);
            printf("���� %s�� ü��: %d\n", monster3.name, monster3.HP);

            // ������ ü���� 0 ���ϸ� �ο��� ����
            if (monster3.HP <= 0)
            {
               count++;
               printf("\n���� óġ �Ϸ�...\n");
               printf("���� ���Ͱ� ��ȯ�˴ϴ�.\n\n");
               break;
            }

            if (hero.HP <= 0 || hero.MP <= 0)
            {
               break;
            }
         }

         printf("\n---------------------------------------\n\n");
      }

      // 4. ������ ������ ���� ü�� �ʱ�ȭ
      monster1.HP = 30;
      monster2.HP = 40;
      monster3.HP = 50;

      // 5. ����
      // �¸� ����
      if (count == 3)         
      {
         printf("\n���� ����: ���� 3������ ���������� �����̽��ϴ�.\n");
         printf("���ϵ帳�ϴ�.\n");
         printf("������ Ŭ�����ϼ̽��ϴ�.\n");
         break;
      }

      // �й� ����
      if (hero.HP <= 0)
      {
         printf("\n������ �����̽��ϴ�.\n");
         printf("GAME OVER\n");
         break;
      }
      else if (hero.MP <= 0)
      {
         printf("\n������ ������ �� ���������ϴ�.\n");
         printf("�������ʹ� ȿ�������� ��ų�� ����� �ּ���.\n");
         printf("GAME OVER\n");
         break;
      }
   }

   end = clock();  // ���� �ð�
   total_attack = fire_skill + water_skill + plants_skill;
   total_mana = skill.skill_1_MP * freq[0] + skill.skill_2_MP * freq[1] + skill.skill_3_MP * freq[2];

   // 6. ������ ��� �м�
   printf("\n---------------------------------------\n\n");
   printf("������ ��� �м�\n\n");
   printf("�� �ɸ� �ð�(��): %.2lf\n", (double)(end - start) / CLOCKS_PER_SEC);
   printf("�� ��: %d��\n", turn - 1);
   printf("�� ���������� �� Ƚ��: %d��\n", RPS_freq);
   printf("�¸�: %d, �й�: %d, ���º�: %d\n", win, lose, draw);
   printf("���Ϳ��� ���� �� ������: %d\n", total_attack);
   printf("��簡 ���� �� ���ط�: %d\n", total_damage);
   printf("��簡 ����� �� ����: %d\n", total_mana);
   printf("��ų�� ���� ������\n%s: %d", hero.skill_1, fire_skill);
   printf(", %s: %d, %s: %d\n", hero.skill_2, water_skill, hero.skill_3, plants_skill);
   printf("��簡 ����� ��ų�� ��\n%s: %d��", hero.skill_1, freq[0]);
   printf(", %s: %d��, %s: %d��\n", hero.skill_2, freq[1], hero.skill_3, freq[2]);

   return 0;
}