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
			fflush(stdin); // 使input buffer淨空，常放在scanf()前;
			scanf("%c",&ch);
			if(ch=='a'||ch=='A')
			{
				if(sits==0)
				{
					for(i=0;i<=8;i++)
					{
						for(j=0;j<=8;j++)
						{
							if(sit[i][j]=='@')
							sit[i][j]='*';
						}
					}
					for(i=0;i<=8;i++)
					{
						for(j=0;j<=8;j++)
						{
							printf("%c",sit[i][j]); //印出座位表
						}
						printf("\n");
					}
					system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵。
				}
				if(sits==1)
				{
					for(i=0;i<=8;i++)
					{
						for(j=0;j<=8;j++)
						{
							sit[i][j]='-';
						}
					}
					while (d<10) 
					{
	        			i=rand()%9; // 隨機選擇一行
	        			j=rand()%9; // 隨機選擇一列
	
	        			if (sit[i][j]=='-') // 確保該位置尚未被選擇
						{
	        		    	sit[i][j]='*';
	        		    	d++;
	        			}
	   				}
					for(i=0;i<=8;i++)
					{
						for(j=0;j<=8;j++)
						{
							printf("%c",sit[i][j]); //印出座位表
						}
						printf("\n");
					}
					d=0;
					for(i=0;i<=8;i++)
					{
						for(j=0;j<=8;j++)
						{
							sit[i][j]='-';
						}
					}
					system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵。
				}	
			}
			if(ch=='b'||ch=='B')
			{
				for(i=0;i<=8;i++)
				{
					for(j=0;j<=8;j++)
					{
						sit[i][j]='-';
					}
				}
				printf("請輸入要幾個位子(1~4)");
				fflush(stdin); // 使input buffer淨空，常放在scanf()前;
				scanf("%d",&e);	
				while(e!=1&&e!=2&&e!=3&&e!=4)
				{
					printf("輸入錯誤請重打");
					fflush(stdin); // 使input buffer淨空，常放在scanf()前;
					scanf("%d",&e);
				}
				if(e>=1&&e<=3)
				{	
					do {
           				i = rand()%9;
            			j = rand()%9;
						}
					 while ((e==3&&j>=7)||(e==2&&j>=8));
        			for (int k = 0; k < e; k++) 
					{
            			sit[i][j + k] = '@';
					}
					while (d<10) 
					{
        				i=rand()%9; // 隨機選擇一行
        				j=rand()%9; // 隨機選擇一列
        				if (sit[i][j]=='-') // 確保該位置尚未被選擇
						{
        		   		 	sit[i][j]='*';
        		    		d++;
        				}
   					}d=0;
				}
				if(e==4)
				{
					g=rand()%2;
        			if(g==0)
					{
        				i=rand()%6; // 隨機選擇0~5其中一行
        				j=rand()%6; // 隨機選擇0~5其中一列
						sit[i][j]='@';
						sit[i][j+1]='@';
						sit[i][j+2]='@';
						sit[i][j+3]='@';
						while (d<10) 
						{
        					i=rand()%9; // 隨機選擇一行
        					j=rand()%9; // 隨機選擇一列

        					if (sit[i][j]=='-') // 確保該位置尚未被選擇
							{
        		   		 		sit[i][j]='*';
        		    			d++;
        					}
   						}d=0;	
					}
					if(g==1)
					{
						i=rand()%8; // 隨機選擇一行
        				j=rand()%8; // 隨機選擇一列
						sit[i][j]='@';
						sit[i][j+1]='@';
						sit[i+1][j]='@';
						sit[i+1][j+1]='@';
						while (d<10) 
						{
        					i=rand()%9; // 隨機選擇一行
        					j=rand()%9; // 隨機選擇一列
        					if (sit[i][j]=='-') // 確保該位置尚未被選擇
							{
        		   		 		sit[i][j]='*';
        		    			d++;
        					}
   						}
						d=0;	
					}	
				}
				for(i=0;i<=8;i++)
				{
					for(j=0;j<=8;j++)
					{
						printf("%c",sit[i][j]); //印出座位表
					}
					printf("\n");
				}
				printf("是否滿意(y/n)");
				fflush(stdin); // 使input buffer淨空，常放在scanf()前;
				scanf("%s",&ans);
				if(ans=='y')
				{
					sits=0;
				}
				if(ans=='n')
				{
					sits=1;
				}
				system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵。
			}
			if(ch=='c'||ch=='C')
			{
				for(i=0;i<=8;i++)
				{
					for(j=0;j<=8;j++)
					{
						sit[i][j]='-';
					}
				}
				printf("請輸入想要的座位,若輸入0-0則結束輸入\n");
				while(1)
				{
					scanf("%d%c%d",&s1,&s2,&s3);
					if(s1==0&&s2=='-'&&s3==0) //輸入0-0則結束
					{
						break;
					}
					while(s1<1||s1>9||s2!='-'||s3>9||s3<1||sit[s1-1][s3-1]=='@') //若輸入錯誤則重打
					{
						printf("輸入錯誤請重打");
						fflush(stdin); // 使input buffer淨空，常放在scanf()前
						scanf("%d%c%d",&s1,&s2,&s3);
					}
					sit[s1-1][s3-1]='@';
				}
				while (d<10) 
				{
        			i=rand()%9; // 隨機選擇一行
        			j=rand()%9; // 隨機選擇一列
        			if(sit[i][j]=='-') // 確保該位置尚未被選擇
					{
        		   		sit[i][j]='*';
        				d++;
       				}
				}
				d=0;
				for(i=0;i<=8;i++)
				{
					for(j=0;j<=8;j++)
					{
						printf("%c",sit[i][j]); //印出座位表
					}
					printf("\n");
				}
				printf("是否滿意(y/n)");
				fflush(stdin); // 使input buffer淨空，常放在scanf()前;
				scanf("%s",&ans);
				if(ans=='y')
				{
					sits=0;
				}
				if(ans=='n')
				{
					sits=1;
				}
				system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵。		
			}
			if(ch=='d'||ch=='D')
			{
				printf("continue(y/n)");
				fflush(stdin); // 使input buffer淨空，常放在scanf()前
				scanf("%c",&cho);
				while(cho!='y'&&cho!='n')
				{
					printf("輸入錯誤請重打");
					fflush(stdin); // 使input buffer淨空，常放在scanf()前; 
					scanf("%c",&cho);
				}
				if(cho=='n')
				{
					system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵。
					return 0; //程式結束
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
//完成這次程式作業，我學到了很多新的知識和技能。首先，理解題目需求是至關重要的，這幫助我在開始編寫程式之前有了一個明確的方向。過程中，我學會了如何使用隨機數生成器來完成特定要求，
//並加深了對二維陣列操作的理解。每當遇到錯誤，我會耐心地進行調試，這讓我對程式的運行邏輯有了更深入的認識。此外，模塊化編程的方法使我的程式更加清晰易讀，提高了可維護性。
//這次作業不僅提升了我的編程技能，還鍛煉了我解決問題的能力，讓我在面對複雜問題時更加自信和冷靜。希望在之後能過更迅速有效率地寫出類似程式。