#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	int n, m, i = 0;
	
	srand((int)time(NULL)); //随机数种子
	n = rand() % 100 + 1; //1 - 100
	
	do{
		printf("输入所猜数字：");
		scanf("%d",&m);
		
		i++; //记录猜的次数 
		
		if(m > n)
		{
			printf("错误！所猜数字太大了！\n");
		}
		else if(m < n)
		{
			printf("错误！所猜数字太小了！\n");
		}
	}while(m != n);
	
		printf("答对了！\n");
		printf("总共猜了%d次。\n", i);
		if(i <= 5)
		{
			printf("你太聪明了，这么快就猜出来了！"); 
		}
		else if(i > 5)
		{
			printf("还需改进方法，以便更快猜出来！"); 
		}
	 	
	 	getchar();
		return 0; 
}
