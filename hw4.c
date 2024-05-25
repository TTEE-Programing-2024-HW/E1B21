#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#include<string.h>
struct data
	{
		char name[12];
		char num[6];
		int math;
		int phy;
		int eng;
		float avg;
	};
int main(void)
{
	struct data *student;
	char ch,nam[12],cho;
	int i=0,a=0,b=3,n=0,z=1,w=2;
	puts("    ::                                             ");     
    puts("   ??~.                                            ");     
    puts("  :5#57:                                           ");     
    puts("  ~PBGPJ^                                          ");     
    puts("  ^5GGGPJ~                                         ");     
    puts("  .YGGGGPJ^                                        ");     
    puts("   !PBGGBP?.  ..  ..                ....::^~~:     ");     
    puts("   .?G#B#&J^^^!!~^!!::.       .:~!?JY55PGG5?^.     ");     
    puts("    .7P#@@5??777777!77!!:  .~?5GBBGGGGGGPJ~.   ..  ");     
    puts("      ^?G5??77777!!!777??!7YB&@@#GGGGG5?~.    :?!  ");     
    puts("        !?7?7?777777????7?Y#@@@&&#BPY7:    .:~~^!^ ");     
    puts("         7?JJPJ?????????????55JJ?7!~^:::^^^~~~^^^~!");      
    puts("       .J?&#&???????7Y?P?7??.   ^!7?JJJ??7!77~^^~! ");     
    puts("       ^??B&G??7???75@B@J?J^  :?YYYJJJYYYYYYJ!^^~~ ");    
    puts("    .^^???JY??7??777G#&BJJ?. :YYJJJJJJJJJJJJJ!~~!^ ");     
    puts("   ~~::^?J?????J???7?JYJJY!~^J5YJJJJJJJJJJJJJ?YJ7  ");     
    puts("  .~..:::~7??J???????JJJ?!~~~?55YYYYYJJJJJYYY55P:  ");     
    puts("  ^7::::^:::^~!7????77?!~~~~~~555555YYYYYY555P5~   ");     
    puts("  .!7^:~:.:^:::::^^~!~~!~~~~!?YJ55555555555P5?:    ");     
    puts("    :~!7::^...:..::^!7~?!~~~JYJJJ555PP555YJ!:      ");     
    puts("      .~!~!^:::::::~!7!?!!?JJJJJJY!^~~^^:.         ");     
    puts("        :7??!~~~^^~!7?YYJJJJJJJJJY:                ");     
    puts("         :YJJ?~!77YJJJJ5Y5J?????JY:                ");     
    puts("          !JJJJ5YJJJJJ5PPG!.?777??                 ");     
    puts("           ????J?7???JGPP! :?7???:                 ");     
    puts("          .7777J?7???YYJ: !J????^                  ");     
    puts("          :????J777?7..   ~77?7^                   ");      
    puts("            .:.^777!.                              ");             
	system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵。
	system("CLS"); // 清除螢幕
	printf("請輸入密碼");
	scanf("%d",&a);
	while(1)
	{
		z-=1;
		if(a==2024)
		{
			if(z==0)
			{
				printf("輸入正確");
				sleep(1); // 等待一秒
			}
			system("CLS"); // 清除螢幕
			printf("------------------------------------------------\n");
			printf("|a. Enter student grades                         |\n");
			printf("|b. Display student grades                       |\n"); 
			printf("|c. arch for student grad                        |\n"); 
			printf("|d. Grade ranking                                |\n");
			printf("|e. Exit system                                  |\n");
			printf("------------------------------------------------\n"); 
			fflush(stdin); // 使input buffer淨空，常放在scanf()前;
			scanf("%c",&ch);
			if(ch=='a'||ch=='A')
			{
				system("CLS"); // 清除螢幕
				printf("請輸入有幾個學生\n");
				fflush(stdin); // 使input buffer淨空，常放在scanf()前;
				scanf("%d",&n);
				student=(struct data *)malloc(n * sizeof(struct data));
				for(i=0;i<n;i++)
				{	
					printf("請輸入第%d個學生的資料(依序從姓名 座號 數學成績 物理成績 英文成績)",i+1);
					scanf("%s %s %d %d %d",student[i].name,student[i].num,&student[i].math,&student[i].phy,&student[i].eng);
					while(strlen(student[i].num)!=6||student[i].math<0||student[i].math>100||student[i].phy<0||student[i].phy>100||student[i].eng<0||student[i].eng>100)
					{
						if(strlen(student[i].num)!=6) //學號是否六位數
						printf("學號要6位數請重打\n");
						if(student[i].math<0||student[i].math>100||student[i].phy<0||student[i].phy>100||student[i].eng<0||student[i].eng>100) //成績是否大於0小於100
						printf("成績要1到100請重打");
						fflush(stdin); // 使input buffer淨空，常放在scanf()前;
						scanf("%s %s %d %d %d",student[i].name,student[i].num,&student[i].math,&student[i].phy,&student[i].eng);
					}	
				}
				system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵。
			}
			if(ch=='b'||ch=='B')
			{
				system("CLS"); // 清除螢幕
				printf("名字\t學號\t數學成績\t物理成績\t英文成績\t平均\n");
				for(i=0;i<n;i++)
				{
					student[i].avg=(student[i].math+student[i].phy+student[i].eng)/3.0; //算出平均值
					printf("%s\t%s\t%d\t\t%d\t\t%d\t\t%.1f\n",student[i].name,student[i].num,student[i].math,student[i].phy,student[i].eng,student[i].avg);
				}	
				system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵。
			}
		}
		else if(a!=2024&&b>1)
		{
			b=b-1;
			printf("輸入錯誤,還剩%d次機會\n",b);
			fflush(stdin); // 使input buffer淨空，常放在scanf()前;
			scanf("%d",&a);
		}
		else
		{
			printf("沒機會囉\n");
			system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵。
			return 0; //程式結束
		}
	}
	
	
	
	
	
	
	
	
	
	
}