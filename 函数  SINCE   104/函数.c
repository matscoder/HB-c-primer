#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//P 111.函数 8
//函数举例判断1个数是否是素数  看是否能被2- val-1的数字整除

/*int main()
{
	int val;
	int i;

	scanf("%d", &val);
	for (i = 2; i < val; i++); 
	{
		if (val % i == 0)
			break;
		else
			printf("该数字是素数");
	}
	printf("该数字不是素数");
	return 0;
}*/


//方法1:

/*int main()
{
	int val;
	int i;

	scanf("%d", &val);
	for (i = 2; i < val; i++)
	{
		if (val % i == 0)
			break;

	}
	if (i == val)   //当为素数时，i的输出值才为val,不是素数，i会在中间跳出循环并输出!
		printf("YES！\n");
	else
		printf("NO!\n");

	return 0;
}
*/


怎样实现用数组实现判断输入多个数字判断素数的程序

//定义一个函数    真假用数据类型bool表示，只有真和假两个值
/*#define NUMBER 5
bool IsPrime(int a[])
{
	int i;
	for (i = 2; i < NUMBER; i++)
	{
		if (a[] % i == 0)
			break;

	}
	if (i == val)   
		return true;
	else
		return false;
	
	
}

int main()
{
	int x[NUMBER];
	int m, i,a,b;
	printf("请输入想判断的数值个数:");
		for (a = 0; a < NUMBER; a++){
			printf("数值1:");
	scanf("%d", &x[a]);
	IsPrime(x[a]);
		}
}
*/



bool IsPrime(int val)
{
	int i;
	for (i = 2; i < val; i++)
	{
		if (val % i == 0)
			break;

	}
	if (i == val)
		return true;
	else
		return false;
}

int main()
{
	int m ;

	scanf("%d", &m);
	if (IsPrime(m))  //true输出yes，false输出no
		printf("Yes! \n");
	else
		printf("No! \n");

	return 0;
}