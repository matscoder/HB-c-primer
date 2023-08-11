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


//P113, 函数的声明
void f(int);//要加前置声明，不加的话调用语句在定义语句之前，就会出错 
int main(void)   //调用f的语句
{
	f();
	return 0;
}
void f(void)   //定义f的语句
{
	printf("哈哈!\n")
}





//void f(void) 需要加入声明
void g(void)
{
	f();//因为函数f的定义放在了调用f语句的后面，所以语法出错
}
void f(void)
{
	printf("哈哈\n"); 
}
int main(void)
{
	g();

	return 0;
}
//实参和形参个数相同，位置一一对应，类型相同 ，数据类型必须相互兼容，例如将5.8赋值给int型可以，但是不能将字符串abcd赋值给int类型




//P115-如何在开发中合理的设计函数来解决实际问题
//用单独的函数来实现，代码的可重用性提高
bool IsPrime(int val)
{
	int i;
	for (i = 2; i < val; i++)
	{
		if (0 == val % i)
			break;
	}
	if (i == val)
		return true;
	else
		return false;
}
int main()
{
	int val;
	int i;

	scanf("%d", &val);
	if (IsPrime(val))
		printf("Yes!\n");
	else
		printf("No!\n");

	return 0;
}

//求1 到某个数字之间所有的素数并将其输出 
//只用main函数实现，有局限性:
1.代码的重用性不高
2.不容易理解
方法1:
int main()
{
	int val;
	int i;
	int j;

	scanf("%d", &val);
	for (i = 2; i <= val; ++i)
	{
		for (j = 2; j < i; ++j) {
			if (0 == i % j)//val为素数时,j=i=val
				break;

		}
		
		if (j == i)
			printf("%d\n", i);
	}
	return 0;
	
}

方法2:
//用1个函数来判断1个数字是否是素数
优点:比不用函数更容易理解，代码的可重用性更高
缺点:可重用性依然不是非常高，它们每个数字从1到它本身的素数。 
bool IsPrime(int m)
{
	int i;
	for (i = 2; i < m; i++)
	{
		if (0 == m % i)
			break;
	}
	if (i == m )
		return true;
	else
		return false;
}

int main()
{
	int val;
	int i;
	int j;

	scanf("%d", &val);
	for (i = 2; i <= val; ++i)
	{
		if (IsPrime(i))
			printf("%d\n", i);
	}
	return 0;
}


如何合理设计函数-5
 //本函数功能是把1到n之间所有的素数在显示器上输出
	void TraverseVal(int n)
{
	int i;
	for (i = 2; i <= n; i++)
	{
		if (IsPrime(i))
			printf("%d\n", i);
	}
	}
int main()
{
	int val;
	int i;
	scanf("%d", &val);
	TraverseVal(val);

	return 0;
}