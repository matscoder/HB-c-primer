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
/*int main()
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
}*/


//p69 作业
//1.求1-100之间奇数之和，2.求1-100之间奇数个数，3.求1-100奇数平均值，4.求1-100奇数之和与偶数之和。

//1.
/*int main()
{
int c=0,d=0,i;//a奇数，b偶数
int sum1 = 0, sum2 = 0 ; 
float svb1 ,svb2;

for (i = 1; i <= 100; i++)
{
	if (i % 2 != 0)
	{
		sum1 += i;
		c++; //奇数个数
	}
	else{
		sum2 += i;
		d++;//偶数个数
	}

}
svb1 = sum1 / (float)c;
svb2 = sum2 / (float)d;

printf("1-100之间的奇数之和为%d\n偶数之和为%d\n1-100奇数的平均值是:%f\n1-100偶数的平均值是: %f\n", sum1, sum2, svb1, svb2);

return 0;
}*/

//P78-运算符补充3-逗号表达式
int main()
{
	int i;
	int j = 2;

	i = (j++, ++j, j + 2, j - 3); //i=1,但是j=4,j+2和j-3并不改变j的值;
	printf("%d\n", i);
}

//逗号表达式:
格式:(A，B，C，D)
功能:
	从左到右执行
	最终表达式的值是最后一项的值