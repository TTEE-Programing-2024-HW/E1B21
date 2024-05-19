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
}