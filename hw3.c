#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
int main(void)
{
	srand(time(NULL));	// 設定隨機種子
	int a=0,b=3,c=0,d=0,i=0,j=0,z=1,e=0,f=0,g=1,sits=1,s1=0,s3=0;
	char ab,ch,ans,s2,cho;
	char sit[9][9];
	for(i=0;i<=8;i++)
	{
		for(j=0;j<=8;j++)
		{
			sit[i][j]='-';
		}
	}
	puts("            :Y~                                   ");      
    puts("           ^B&7                                   ");      
    puts("          :5J!^                              .:.  ");      
    puts("          ~~^~.             ..:::^?JJ7.   .:^~~^  ");      
    puts("         :~^^~ ..      ..:^^^^^^^J&BJ^  .:^~^^^~. ");      
    puts("         ^~~!~^^^^^^^^^^^^^^^^^^~J~.  .^~^^^^^^~^ ");      
    puts("        .~~^^^^^~!JJ^^^~~~~^^^:..   .^~^^^^^^^^^~ ");      
    puts("        ~J7^^^^^^JPY^^^^~!.       .^~^^^^~~~~!!~^ ");      
    puts("       :!J!??7?!^^~7??7^^~^      .!!!!!!!777!^:.  ");      
    puts("      :JJ^~5BPP?^^~JJJ?^^^~.      ~77777!~^.      ");     
    puts("      .77^^^7??7^^^^~~^^^^^~.      ~7!!7.         ");      
    puts("       .^~^^^~!~^^^^^^~~~~~^~:      !7!7:         ");      
    puts("   .::^^^~~~^^^^^^^^^~~^^^~^^7!. .:~!777:         ");      
    puts("   ~~~^^^^^^^^~!!!~^^^~~^^^~^^~~^~777!:.          ");      
    puts("   :^^^^^~~~!!^^^^^^^^^~!!!~^^^^^!~~JY!.          ");     
    puts("      ...::^^^~^^^^^^^^^^^^^^^^^^!!?55J^          ");      
    puts("              ^^^^^^^^^^^^^^^^^^^^^!?:            ");      
    puts("              ^^^^^^^^^^^^^^^^^^^^~7!.            ");     
    puts("              :~^^^^^~~!!~~~~~~~~!7!.             ");      
    puts("               :^~!!7!~^^:^~!!!777?:              ");      
    puts("                 .:77:       ...^!!^              ");      
    puts("                   ::            :!^              ");                                                            
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
			printf("|a. Available seats                             |\n");
			printf("|b. Arrange for you                             |\n"); 
			printf("|c. Choose by yourself                          |\n"); 
			printf("|d. Exit                                        |\n");
			printf("------------------------------------------------\n"); 
		}
		else if(a!=2024&&b>1)
		{
			b=b-1;
			printf("輸入錯誤,還剩%d次機會\n",b);
			fflush(stdin); // 使input buffer淨空，常放在scanf()前;
			scanf("%d",&a);
		}
	}
}