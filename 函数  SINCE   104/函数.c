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


//P113, ����������
void f(int);//Ҫ��ǰ�����������ӵĻ���������ڶ������֮ǰ���ͻ���� 
int main(void)   //����f�����
{
	f();
	return 0;
}
void f(void)   //����f�����
{
	printf("����!\n")
}





//void f(void) ��Ҫ��������
void g(void)
{
	f();//��Ϊ����f�Ķ�������˵���f���ĺ��棬�����﷨����
}
void f(void)
{
	printf("����\n"); 
}
int main(void)
{
	g();

	return 0;
}
//ʵ�κ��βθ�����ͬ��λ��һһ��Ӧ��������ͬ ���������ͱ����໥���ݣ����罫5.8��ֵ��int�Ϳ��ԣ����ǲ��ܽ��ַ���abcd��ֵ��int����




//P115-����ڿ����к������ƺ��������ʵ������
//�õ����ĺ�����ʵ�֣�����Ŀ����������
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

//��1 ��ĳ������֮�����е�������������� 
//ֻ��main����ʵ�֣��о�����:
1.����������Բ���
2.���������
����1:
int main()
{
	int val;
	int i;
	int j;

	scanf("%d", &val);
	for (i = 2; i <= val; ++i)
	{
		for (j = 2; j < i; ++j) {
			if (0 == i % j)//valΪ����ʱ,j=i=val
				break;

		}
		
		if (j == i)
			printf("%d\n", i);
	}
	return 0;
	
}

����2:
//��1���������ж�1�������Ƿ�������
�ŵ�:�Ȳ��ú�����������⣬����Ŀ������Ը���
ȱ��:����������Ȼ���Ƿǳ��ߣ�����ÿ�����ִ�1��������������� 
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


��κ�����ƺ���-5
 //�����������ǰ�1��n֮�����е���������ʾ�������
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