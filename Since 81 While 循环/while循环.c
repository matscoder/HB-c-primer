#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//P83 for��while�ıȽ�
//��1-100�ĺ�
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

	printf("��Ϊ%d", sum);
}*/

//for��while�����໥ת��
//��for���߼��Ը�ǿ���������׳����Ƽ���ʹ��for


//P84  ��ο���1���������1: ��while�ж��Ƿ��ǻ����� ���ص� !��

/*int main()
{
	int val;
	int m;
	int sum = 0;

	printf("����������Ҫ�жϵ�����:");
	scanf("%d", &val);
	m = val;

	while (m)
	{                                     //1234=val   
		sum = sum * 10 + m % 10;  //sum =0+4,m=123  sum=40+3,m=12   sum=43*10+12%10=432,m=1
		//m=1  sum =432*10+1%10 =4321   5) m=0������
		m /= 10;
	}
	if (sum == val)
		printf("YES��\n");
	else
		printf("NO! \n");

	return 0:
}*/


//P85  ��ο���1���������2  쳲���������1
//�õݹ����쳲��������е�n���ֵ
 /*
 쳲���������
 1  2  3  5  8  13  21  34  �ӵ����ʼ��ÿһ��������ǰ��������֮��
 */

/*int main()
{
	int n;
	int f1, f2, f3;
	int i;

	f1 = 1;
	f2 = 2;

	printf(  "����������Ҫ���������к� :");
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


//P89. ��do...whileʵ��һԪ���η���
/*int main()
{
	double a, b, c;
	double delta;
	double x1, x2;
	char ch;

	
	do {
		printf("������һԪ���η��̵�����ϵ��:\n");
		printf("a = "), scanf("%lf", &a);
		printf("b = "), scanf("%lf", &b);
		printf("c = "),  scanf("%lf", &c);

		delta = b * b - 4 * a * c;


		if (delta > 0)
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("�������⣬x1 = %lf,x2 = %lf\n", x1, x2);
		}
		else if (0 == delta)
		{
			x1 = x2 = (-b) / (2 * a);
			printf("��Ψһ�⣬x1=x2=%lf\n", x1,x2);
		}
		else
			printf("��ʵ����");
		printf("���������(Y/N) :");
		scanf(" %c", &ch);
	} while ('y' == ch||'Y' ==ch);// while (a != 0);

	return 0;
}*/

//P90. switch���  �ҵ�case ��ں󣬾ͻ��������һֱִ��,����break����;
int main()
{
	int val;
	printf("������Ҫ�����¥��:"), scanf("%d", &val);

	switch (val)
	{
	case 1:
		printf("չ����\n");
		break;
	case 2:
		printf("չ����\n");
		break;
	case 3:
		printf("չ����\n");
		break;
	default :
		printf("û�иǵ���һ�� ��\n");
		break;
	}
	return 0;
	
}



//break  ��ֹѭ��//��ֹswitch,����swich
