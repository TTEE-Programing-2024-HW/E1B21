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
				for(e=1;e<=d;e++)
				{
					for(f=1;f<=d;f++)
					{
						printf("%d*%d=%2d ",e,f,e*f);  //利用巢狀迴圈印出乘法表
					}
					printf("\n");
				}
				system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵。
				system("CLS"); // 清除螢幕
			}
			if(ch=='c'||ch=='C')
			{
				system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵。
				system("CLS"); // 清除螢幕
				printf("'continue(y/n)'");
				fflush(stdin); // 使input buffer淨空，常放在scanf()前;
				scanf("%c",&ans);
			
			while(ans!='y'&&ans!='Y'&&ans!='N'&&ans!='n')
				{
					printf("輸入錯誤請重打");
					fflush(stdin); // 使input buffer淨空，常放在scanf()前;
					scanf("%c",&ans);
				}
				if(ans=='y'||ans=='Y')
				{
					continue; //回到主選單
				}
				if(ans=='n'||ans=='N')
				{
					system("pause");
					return 0; //結束
				}	
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
//這次的作業與上次有很大的不同，不僅需要編寫程式碼，還要求在每完成一個部分後記錄下自己的工作進度。作為一名初次使用git的新手，我遇到了不少挑戰和困難。
//幸好，透過自己積極尋找解決方案和學長的耐心指導，我最終還是成功地完成了程式碼的編寫。當我完成所有工作，看到一切都在運行時，內心的成就感油然而生。
//這次的作業讓我獲益匪淺，不僅提升了我的程式設計技能，也讓我對git這樣的版本控制工具有了更深入的了解和應用。希望在經歷過這次的學習洗禮後，
//我能夠更加熟練地使用GitHub和git，使我在程式設計的路上能夠不斷進步，達到新的高度。
	