#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//P83 for和while的比较
//求1-100的和
/*int main()
{
	int sum = 0;
	int i = 1;
	while (i <= 100)
	{
		sum += i;
		i++;
	}
	
	for (i = 1; i <= 100; i++)
	{
		sum += i;
	}

	printf("和为%d", sum);
}*/

//for和while可以相互转换
//但for的逻辑性更强，更不容易出错，推荐多使用for


//P84  如何看懂1个程序举例1: 用while判断是否是回文数 （重点 !）

/*int main()
{
	int val;
	int m;
	int sum = 0;

	printf("请输入您需要判断的数字:");
	scanf("%d", &val);
	m = val;

	while (m)
	{                                     //1234=val   
		sum = sum * 10 + m % 10;  //sum =0+4,m=123  sum=40+3,m=12   sum=43*10+12%10=432,m=1
		//m=1  sum =432*10+1%10 =4321   5) m=0不成立
		m /= 10;
	}
	if (sum == val)
		printf("YES！\n");
	else
		printf("NO! \n");

	return 0:
}*/


//P85  如何看懂1个程序举例2  斐波那契序列1
//用递归计算斐波那契数列第n项的值
 /*
 斐波那契序列
 1  2  3  5  8  13  21  34  从第三项开始，每一个数字是前两个数字之和
 */

/*int main()
{
	int n;
	int f1, f2, f3;
	int i;

	f1 = 1;
	f2 = 2;

	printf(  "请输入您需要求的项的序列号 :");
	scanf("%d", &n);
	if (1 == n)
	{
		f3 = 1;
	}
	else if (2 == n)
	{
		f3 = 2;
	}
	else
	{
		for (i = 3; i <= n; i++)
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
	}

	printf("%d\n", f3);
		return 0;
} */


//P89. 用do...while实现一元二次方程
/*int main()
{
	double a, b, c;
	double delta;
	double x1, x2;
	char ch;

	
	do {
		printf("请输入一元二次方程的三个系数:\n");
		printf("a = "), scanf("%lf", &a);
		printf("b = "), scanf("%lf", &b);
		printf("c = "),  scanf("%lf", &c);

		delta = b * b - 4 * a * c;


		if (delta > 0)
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("有两个解，x1 = %lf,x2 = %lf\n", x1, x2);
		}
		else if (0 == delta)
		{
			x1 = x2 = (-b) / (2 * a);
			printf("有唯一解，x1=x2=%lf\n", x1,x2);
		}
		else
			printf("无实数解");
		printf("您想继续吗？(Y/N) :");
		scanf(" %c", &ch);
	} while ('y' == ch||'Y' ==ch);// while (a != 0);

	return 0;
}*/

//P90. switch语句  找到case 入口后，就会从上往下一直执行,除非break跳过;
int main()
{
	int val;
	printf("请输入要进入的楼层:"), scanf("%d", &val);

	switch (val)
	{
	case 1:
		printf("展开！\n");
		break;
	case 2:
		printf("展开！\n");
		break;
	case 3:
		printf("展开！\n");
		break;
	default :
		printf("没有盖到这一层 ！\n");
		break;
	}
	return 0;
	
}



//break  中止循环//终止switch,跳出swich
