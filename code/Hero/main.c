#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct _Monster
{
   char name[20];       // 몬스터 이름
   char state[20];      // 몬스터 타입
   int HP;              // 몬스터 체력
   int STR;             // 몬스터 공격력              
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
   Monster monster1 = { "이프리트", "불", 30, 15 };
   Monster monster2 = { "엘퀴네스", "물", 40, 10 };
   Monster monster3 = { "드라이어드", "식물", 50, 5 };
   Hero hero = { "용사", "파이어볼", "폭포", "인탱글", 50, 50 };
   Skill skill = { 30, 15, 20, 10, 10, 5 };

   int monster = 0;     // 소환한 몬스터
   int com = 0, user = 0;   // 가위 바위 보 게임
   int turn = 1, count = 0, RPS_freq = 0;
   int win = 0, lose = 0, draw = 0;
   int freq[3] = { 0, };
   int fire_skill = 0, water_skill = 0, plants_skill = 0;
   int total_damage = 0, total_attack = 0, total_mana;
   double start = 0, end = 0;
   char *monster_name[] = { monster1.name, monster2.name, monster3.name };
   // monster_name[0] = 이프리트, [1] = 엘퀴네스, [2] = 드라이어드
   char* RPS[] = { "가위", "바위", "보" };
   // RPS[0] = 가위, [1] = 바위, [2] = 보

   // 1. 게임 시작
   start = clock();   // 시작 시간

   printf("당신은 이제부터 몬스터와 싸워야 합니다.\n");
   printf("용사[체력: 50][마나: 50]\n");
   printf("가위(파이어볼): 0, 바위(폭포): 1, 보(인탱글): 2를 선택하세요.\n");
   printf("파이어볼[데미지: 30][마나: 15]     ");
   printf("폭포[데미지: 20][마나: 10]     ");
   printf("인탱글[데미지: 10][마나: 5]\n");
   printf("행운을 빕니다.\n");
   printf("---------------------------------------\n\n");

   // 2. 몬스터를 무작위로 소환 
   while (1)
   {
      srand((unsigned)time(NULL));
      monster = rand() % 3;   // 컴퓨터가 무작위로 몬스터를 선택(0 ~ 2)
      printf("당신이 마주한 몬스터는 %s입니다.\n", monster_name[monster]);

      switch (monster)
      {
         case 0:
            printf("이프리트 타입: %s, ", monster1.state);
            printf("체력: %d, 공격력: %d\n", monster1.HP, monster1.STR);
            break;
         case 1:
            printf("엘퀴네스 타입: %s, ", monster2.state);
            printf("체력: %d, 공격력: %d\n", monster2.HP, monster2.STR);
            break;
         case 2:
            printf("드라이어드 타입: %s, ", monster3.state);
            printf("체력: %d, 공격력: %d\n", monster3.HP, monster3.STR);
            break;
      }
      printf("\n---------------------------------------\n");

      // 3. 소환된 몬스터와 전투(가위 바위 보 게임)
      printf("\n!!전투 시작!!\n\n");
      while (1)
      {
         printf("선택: ");
         scanf("%d", &user);  // 사용자가 가위 바위 보 선택

         com = rand() % 3;    // 컴퓨터가 무작위로 가위 바위 보 선택
         printf("컴퓨터 : %s VS 유저 : %s\n\n", RPS[com], RPS[user]);
         RPS_freq++;

         if (monster == 0)          // 이프리트와 싸움
         {
            if (com == user)
            {
               printf("비겼습니다. 다음 턴으로 넘어갑니다.\n");
               draw++;
            }
            else if (com == 0)
            {
               if (user == 1)
               {
                  printf("이겼습니다. 스킬: %s 발동\n", hero.skill_2);
                  printf("데미지: %d\n", skill.skill_2_STR * 2);
                  printf("효과가 강합니다. 데미지가 2배로 들어갔습니다.\n");
                  monster1.HP = monster1.HP - skill.skill_2_STR * 2;
                  hero.MP = hero.MP - skill.skill_2_MP;
                  water_skill += skill.skill_2_STR * 2;
                  freq[1]++;
                  win++;
               }
               else if (user == 2)
               {
                  printf("졌습니다. %s에게 공격을 당했습니다.\n", monster1.name);
                  printf("데미지: %d\n", monster1.STR);
                  hero.HP = hero.HP - monster1.STR;
                  total_damage += monster1.STR;
                  lose++;
               }
            }
            else if (com == 1)
            {
               if (user == 2)
               {
                  printf("이겼습니다. 스킬: %s 발동\n", hero.skill_3);
                  printf("데미지: %d\n", skill.skill_3_STR / 2);
                  printf("효과가 약합니다. 데미지가 1/2배로 들어갔습니다.\n");
                  monster1.HP = monster1.HP - skill.skill_3_STR / 2;
                  hero.MP = hero.MP - skill.skill_3_MP;
                  plants_skill += skill.skill_3_STR / 2;
                  freq[2]++;
                  win++;
               }
               else if (user == 0)
               {
                  printf("졌습니다. %s에게 공격을 당했습니다.\n", monster1.name);
                  printf("데미지: %d\n", monster1.STR);
                  hero.HP = hero.HP - monster1.STR;
                  total_damage += monster1.STR;
                  lose++;
               }
            }
            else if (com == 2)
            {
               if (user == 0)
               {
                  printf("이겼습니다. 스킬: %s 발동\n", hero.skill_1);
                  printf("데미지: %d\n", skill.skill_1_STR * 0);
                  printf("이프리트는 불에 면역입니다.\n");
                  monster1.HP = monster1.HP - skill.skill_1_STR * 0;
                  hero.MP = hero.MP - skill.skill_1_MP;
                  freq[0]++;
                  win++;
               }
               else if (user == 1)
               {
                  printf("졌습니다. %s에게 공격을 당했습니다.\n", monster1.name);
                  printf("데미지: %d\n", monster1.STR);
                  hero.HP = hero.HP - monster1.STR;
                  total_damage += monster1.STR;
                  lose++;
               }
            }

            // 턴을 마치고 상황 보고
            printf("\n%d턴의 상황 보고\n", turn++);
            printf("현재 %s의 체력: %d, 마나: %d\n", hero.name, hero.HP, hero.MP);
            printf("현재 %s의 체력: %d\n", monster1.name, monster1.HP);

            // 몬스터의 체력이 0 이하면 싸움이 끝남
            if (monster1.HP <= 0)
            {
               count++;
               printf("\n몬스터 처치 완료...\n");
               printf("다음 몬스터가 소환됩니다.\n\n");
               break;
            }

            if (hero.HP <= 0 || hero.MP <= 0)
            {
               break;
            }
         }
         else if (monster == 1)     // 엘퀴네스와 싸움
         {
            if (com == user)
            {
               printf("비겼습니다. 다음 턴으로 넘어갑니다.\n");
               draw++;
            }
            else if (com == 0)
            {
               if (user == 1)
               {
                  printf("이겼습니다. 스킬: %s 발동\n", hero.skill_2);
                  printf("데미지: %d\n", skill.skill_2_STR * 0);
                  printf("엘퀴네스는 물에 면역입니다.\n");
                  monster2.HP = monster2.HP - skill.skill_2_STR * 0;
                  hero.MP = hero.MP - skill.skill_2_MP;
                  freq[1]++;
                  win++;
               }
               else if (user == 2)
               {
                  printf("졌습니다. %s에게 공격을 당했습니다.\n", monster2.name);
                  printf("데미지: %d\n", monster2.STR);
                  hero.HP = hero.HP - monster2.STR;
                  total_damage += monster2.STR;
                  lose++;
               }
            }
            else if (com == 1)
            {
               if (user == 2)
               {
                  printf("이겼습니다. 스킬: %s 발동\n", hero.skill_3);
                  printf("데미지: %d\n", skill.skill_3_STR * 2);
                  printf("효과가 강합니다. 데미지가 2배로 들어갔습니다.\n");
                  monster2.HP = monster2.HP - skill.skill_3_STR * 2;
                  hero.MP = hero.MP - skill.skill_3_MP;
                  plants_skill += skill.skill_3_STR * 2;
                  freq[2]++;
                  win++;
               }
               else if (user == 0)
               {
                  printf("졌습니다. %s에게 공격을 당했습니다.\n", monster2.name);
                  printf("데미지: %d\n", monster2.STR);
                  hero.HP = hero.HP - monster2.STR;
                  total_damage += monster2.STR;
                  lose++;
               }
            }
            else if (com == 2)
            {
               if (user == 0)
               {
                  printf("이겼습니다. 스킬: %s 발동\n", hero.skill_1);
                  printf("데미지: %d\n", skill.skill_1_STR / 2);
                  printf("효과가 약합니다. 데미지가 1/2배로 들어갔습니다.\n");
                  monster2.HP = monster2.HP - skill.skill_1_STR / 2;
                  hero.MP = hero.MP - skill.skill_1_MP;
                  fire_skill += skill.skill_1_STR / 2;
                  freq[0]++;
                  win++;
               }
               else if (user == 1)
               {
                  printf("졌습니다. %s에게 공격을 당했습니다.\n", monster2.name);
                  printf("데미지: %d\n", monster2.STR);
                  hero.HP = hero.HP - monster2.STR;
                  total_damage += monster2.STR;
                  lose++;
               }
            }

            // 턴을 마치고 상황 보고
            printf("\n%d턴의 상황 보고\n", turn++);
            printf("현재 %s의 체력: %d, 마나: %d\n", hero.name, hero.HP, hero.MP);
            printf("현재 %s의 체력: %d\n", monster2.name, monster2.HP);

            // 몬스터의 체력이 0 이하면 싸움이 끝남
            if (monster2.HP <= 0)
            {
               count++;
               printf("\n몬스터 처치 완료...\n");
               printf("다음 몬스터가 소환됩니다.\n\n");
               break;
            }

            if (hero.HP <= 0 || hero.MP <= 0)
            {
               break;
            }
         }
         else if (monster == 2)     // 드라이어드와 싸움
         {
            if (com == user)
            {
               printf("비겼습니다. 다음 턴으로 넘어갑니다.\n");
               draw++;
            }
            else if (com == 0)
            {
               if (user == 1)
               {
                  printf("이겼습니다. 스킬: %s 발동\n", hero.skill_2);
                  printf("데미지: %d\n", skill.skill_2_STR / 2);
                  printf("효과가 약합니다. 데미지가 1/2배로 들어갔습니다.\n");
                  monster3.HP = monster3.HP - skill.skill_2_STR / 2;
                  hero.MP = hero.MP - skill.skill_2_MP;
                  water_skill += skill.skill_2_STR / 2;
                  freq[1]++;
                  win++;
               }
               else if (user == 2)
               {
                  printf("졌습니다. %s에게 공격을 당했습니다.\n", monster3.name);
                  printf("데미지: %d\n", monster3.STR);
                  hero.HP = hero.HP - monster3.STR;
                  total_damage += monster3.STR;
                  lose++;
               }
            }
            else if (com == 1)
            {
               if (user == 2)
               {
                  printf("이겼습니다. 스킬: %s 발동\n", hero.skill_3);
                  printf("데미지: %d\n", skill.skill_3_STR * 0);
                  printf("드라이어드는 식물에게 사랑받습니다.\n");
                  monster3.HP = monster3.HP - skill.skill_3_STR * 0;
                  hero.MP = hero.MP - skill.skill_3_MP;
                  freq[2]++;
                  win++;
               }
               else if (user == 0)
               {
                  printf("졌습니다. %s에게 공격을 당했습니다.\n", monster3.name);
                  printf("데미지: %d\n", monster3.STR);
                  hero.HP = hero.HP - monster3.STR;
                  total_damage += monster3.STR;
                  lose++;
               }
            }
            else if (com == 2)
            {
               if (user == 0)
               {
                  printf("이겼습니다. 스킬: %s 발동\n", hero.skill_1);
                  printf("데미지: %d\n", skill.skill_1_STR * 2);
                  printf("효과가 강합니다. 데미지가 2배로 들어갔습니다.\n");
                  monster3.HP = monster3.HP - skill.skill_1_STR * 2;
                  hero.MP = hero.MP - skill.skill_1_MP;
                  fire_skill += skill.skill_1_STR * 2;
                  freq[0]++;
                  win++;
               }
               else if (user == 1)
               {
                  printf("졌습니다. %s에게 공격을 당했습니다.\n", monster3.name);
                  printf("데미지: %d\n", monster3.STR);
                  hero.HP = hero.HP - monster3.STR;
                  total_damage += monster3.STR;
                  lose++;
               }
            }

            // 턴을 마치고 상황 보고
            printf("\n%d턴의 상황 보고\n", turn++);
            printf("현재 %s의 체력: %d, 마나: %d\n", hero.name, hero.HP, hero.MP);
            printf("현재 %s의 체력: %d\n", monster3.name, monster3.HP);

            // 몬스터의 체력이 0 이하면 싸움이 끝남
            if (monster3.HP <= 0)
            {
               count++;
               printf("\n몬스터 처치 완료...\n");
               printf("다음 몬스터가 소환됩니다.\n\n");
               break;
            }

            if (hero.HP <= 0 || hero.MP <= 0)
            {
               break;
            }
         }

         printf("\n---------------------------------------\n\n");
      }

      // 4. 전투가 끝나고 몬스터 체력 초기화
      monster1.HP = 30;
      monster2.HP = 40;
      monster3.HP = 50;

      // 5. 종료
      // 승리 조건
      if (count == 3)         
      {
         printf("\n성공 조건: 몬스터 3마리를 성공적으로 잡으셨습니다.\n");
         printf("축하드립니다.\n");
         printf("게임을 클리어하셨습니다.\n");
         break;
      }

      // 패배 조건
      if (hero.HP <= 0)
      {
         printf("\n용사님은 죽으셨습니다.\n");
         printf("GAME OVER\n");
         break;
      }
      else if (hero.MP <= 0)
      {
         printf("\n용사님의 마나가 다 떨어졌습니다.\n");
         printf("다음부터는 효율적으로 스킬을 사용해 주세요.\n");
         printf("GAME OVER\n");
         break;
      }
   }

   end = clock();  // 끝난 시간
   total_attack = fire_skill + water_skill + plants_skill;
   total_mana = skill.skill_1_MP * freq[0] + skill.skill_2_MP * freq[1] + skill.skill_3_MP * freq[2];

   // 6. 전투의 통계 분석
   printf("\n---------------------------------------\n\n");
   printf("전투의 통계 분석\n\n");
   printf("총 걸린 시간(초): %.2lf\n", (double)(end - start) / CLOCKS_PER_SEC);
   printf("총 턴: %d턴\n", turn - 1);
   printf("총 가위바위보 한 횟수: %d번\n", RPS_freq);
   printf("승리: %d, 패배: %d, 무승부: %d\n", win, lose, draw);
   printf("몬스터에게 가한 총 데미지: %d\n", total_attack);
   printf("용사가 받은 총 피해량: %d\n", total_damage);
   printf("용사가 사용한 총 마나: %d\n", total_mana);
   printf("스킬별 가한 데미지\n%s: %d", hero.skill_1, fire_skill);
   printf(", %s: %d, %s: %d\n", hero.skill_2, water_skill, hero.skill_3, plants_skill);
   printf("용사가 사용한 스킬의 빈도\n%s: %d번", hero.skill_1, freq[0]);
   printf(", %s: %d번, %s: %d번\n", hero.skill_2, freq[1], hero.skill_3, freq[2]);

   return 0;
}