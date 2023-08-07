#include <stdio.h>

//P68 -for循环最简单的用法
//求任意范围内奇数的和
/*int main()
{
	int i;
	int sum;
	for (i = 1; i <= 10; i += 2)//i+=2 等价于i+2
	{
		sum = sum + i;
	}

	printf("i = %d\n", i);
	printf("sum = %d\n", sum);

	return 0;
}*/

//P69 for循环3-for 和if的嵌套使用
//求1-100之间所有能被3整除的数字之和
int main()
{
	int i;
	int sum=0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			sum += i;
	}
	printf("和为%d\n", sum);

	return 0;
}


//p69 作业
//1.求1-100之间奇数之和，2.求1-100之间奇数个数，3.求1-100奇数平均值，4.求1-100奇数之和与偶数之和。

