#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int a=0,b=3,c=0,d=0,e=0,f=0;
	char ch,ab,i,j,k,ans;
	puts("大眼仔");
	puts("..............::^7JY5PGGBBG55555555PPPPPPGGGPY!:..");
	puts(".............:^~~7JY5PGG#BB555555PPPPPPPPPYJ!^....");
	puts("..........:::^^~~?JY5PGG#B#P55PPPPGGPP5J7!~~~~^:..");
	puts("........:^^^^^^~~!Y5PGGGBBGY5PPPGP5J7!~~~~~~~~~~^:");
	puts("......::^^^^^^^^~~7Y5PGG#GYYPGGGP?!~~~~~~~~~~~~~~^");
	puts("......:^^^^^^^^^^~~JYPGGB55PGGGG?~!!!!!!~~~~~~~~~~");
	puts("......:^^^^^^^^^^^^!YPPGGPGBBBGJ~!!!!!!!!~~~~~~~~~");
	puts("......::^^^^^^^^^^^7Y5PG55PGGGJ!~~~~!!!!!~~~~~~~~~");
	puts("......::^^^^^^^^^^!JY5P5PPPGGPY?!??7!!!!!~~~~~~~~~");
	puts("......::^^^^^^^^~~7YY5555YY5Y55555YY?!!!!!~~~~~~~~");
	puts("::::::::^^^^^^^!?JY5PP5Y?7???JJYJ??J?!!!!!!~~~~~~~");
	puts("::::::::^^^^^!?YY555Y5PPGGGPY??JYJ??7!!!!!!!~~~~~~");
	puts("::::::::^^^^7JYY55YYP#BJY#@&#GY?7JJJ?7!!!!!!~~~~~~");
	puts("::::::::^^^!JY55Y??5#@&GB&@@@&BJ77????7!!!!!!~~~~~");
	puts("::::::::^^~?YYJJJ?J5#@@@@@@@@#G?77?JJJJ7^~~~~~~~~~");
	puts("::::::::^^~?JYYJJYYJ5B#&@@@&#GY?7????JJ?^:::^^^~~~");
	puts("::::::::^~^!JYY555YJJJY5PPP5Y??JJ????J77~:::::::^^");
	puts("::::::::^~~~7J5GG5YJJJJJJJJJJJJJ55J?J7!~^:::::::::");
	puts(":::::::^^~~~~!JYY5P55Y5555YYYY5P55YJ7!~^::::::::::");
	puts(":::::::^^^~~~^~~7?JJYYYYYYYYYYYYYJ?!!~^:::::::::::");
	puts(":::::::^^^~~~~~~^~~!7???JJJJJJ?7!~~^^:::::::::::::");
	puts(":::::::^^^~~~~~~~~~~~~~~~~~~~~^:::::::::::::::::::");
	puts("::::::::^^^~~~~~~~~~~~~~~~~^^:::::::::::::::::::::");
	puts("::::::::^^^~~~~~~~~~~~~~~~~~^^^:::::::::::::::::::");
	puts("::::::::^^^~~~~~~~~~~~~~~~~~^^^:::::::::::::::::::");
	puts("::::::::^^^~~~~~~~~~~~~~~~~~~^^^::::::::::::::::::");
	puts("::::::::^^^~~~~~~~~~~~~~~~~~~^^^^::::^^^^^:^^^^^::");
	puts("::::::::^^^^~~~~~~~~~~~~~~~~~~^^^^^^~~~~~~~~~~~~~~");
	puts("::::::::^^^^~~~~~~~~~~~~~~~~~~~~~~~~!!!!!!!!!!!!!!");
	puts("::::::::^^^^~~~~~~~~~~~~~~~~~~~~~~~~!!!!!!!!!!!!!!");
	puts("::::::::^^^^~~~~~~~~~~~~~~~~~~~~~~~~!!!!!!!!!!!!!!");
	system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵。
	system("CLS"); // 清除螢幕
	printf("請輸入密碼");
	scanf("%d",&a);
	while(1)
	{
		if(a==2024)
		{
			system("CLS"); // 清除螢幕
			printf("------------------------------------------------\n");
			printf("|a. 畫出直角三角形                              |\n");
			printf("|b. 顯示乘法表                                  |\n"); 
			printf("|c. 結束                                        |\n"); 
			printf("------------------------------------------------\n");
			printf("請輸入字元\n");
			fflush(stdin); // 使input buffer淨空，常放在scanf()前;
			scanf("%c",&ch);
			if(ch=='a'||ch=='A')
			{
				system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵。
				system("CLS"); // 清除螢幕
				printf("請輸入a到n一個英文字母");
				fflush(stdin); // 使input buffer淨空，常放在scanf()前;
				scanf("%c",&ab);
				while(ab<'a'||ab>'n')
				{
					printf("輸入錯誤請重打");
					fflush(stdin); // 使input buffer淨空，常放在scanf()前;
					scanf("%c",&ab);
				}	
					if(ab>='a' && ab<='n')
					{
						for(i='a';i<=ab;i++) //控制有幾行
						{	
							for(j=ab-c;j>='a';j--) //控制美行有幾個空個
							printf(" ");
							for(k=ab-c;k<=ab;k++) //控制每行要輸出的文字母
							printf("%c",k);
					    	c=c+1;	
					    	printf("\n");
						}
					system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵。
					system("CLS"); // 清除螢幕
					}
			} 
			if(ch=='b'||ch=='B')
			{
				system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵。
				system("CLS"); // 清除螢幕
				printf("請輸入一個1到9的數字");
				fflush(stdin); // 使input buffer淨空，常放在scanf()前;
				scanf("%d",&d);
				while(d<1||d>9)
				{
					printf("輸入錯誤請重打");
					fflush(stdin); // 使input buffer淨空，常放在scanf()前;
					scanf("%d",&d);
				}
			}
			if(ch=='c'||ch=='C')
			{
				printf("c");
			}
		}
		else if(a!=2024&&b>1)
		{
			b=b-1;
			printf("輸入錯誤,還剩%d次機會",b);
			scanf("%d",&a);
		}
		else
		{
			system("PAUSE");
			return 0;
		}
	}
	
	
	
	
	
	}
	
	