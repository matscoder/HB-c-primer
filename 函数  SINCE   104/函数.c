#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//P 111.���� 8
//���������ж�1�����Ƿ�������  ���Ƿ��ܱ�2- val-1����������

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
			printf("������������");
	}
	printf("�����ֲ�������");
	return 0;
}*/


//����1:

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
	if (i == val)   //��Ϊ����ʱ��i�����ֵ��Ϊval,����������i�����м�����ѭ�������!
		printf("YES��\n");
	else
		printf("NO!\n");

	return 0;
}
*/


����ʵ��������ʵ���ж������������ж������ĳ���

//����һ������    �������������bool��ʾ��ֻ����ͼ�����ֵ
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
	printf("���������жϵ���ֵ����:");
		for (a = 0; a < NUMBER; a++){
			printf("��ֵ1:");
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
	if (IsPrime(m))  //true���yes��false���no
		printf("Yes! \n");
	else
		printf("No! \n");

	return 0;
}