#define _CRTCSECURE_NO_WARNINGS
#include <stdio.h>





//p126-��������ָ�볣���������
int main()//��5�޸��˲���������ĵ�Ԫ,�����޸�ϵͳδ����ռ��ֵ
{
	int* p;
	int i = 5;

	*p = i;
	printf("%d\n", *p);

	return 0;
}






int main()
{
	int i = 5;
	int* p;
	int* q;

	p = &i;
	//*q=p  error�﷨��������,����ͬһ����������
	//*q=*p  error,qû�б���ֵ ������ *q�ǲ�֪���ĵ�Ԫ�������Զ�
	p = q;
	printf("%d\n", *q);//q������ֵ��q����p,pҲ�������ֵ

		return 0;
}

/*
q�Ŀռ������ڱ�����ģ����Ա�������Զ�дq�����ݣ�
�������q�ڲ�������ֵ���򱾳����ܶ�д*q������
��Ϊ��ʱ*q��������ڴ浥Ԫ�Ŀ���Ȩ�޲�û�з����������
*/



//p127-����ָ����򻥻���������
int main()
{
	int a = 3;
	int b = 5;
	int t;

	t = a;
	a = b;
	b = t;
	printf("a=%d,b=%d\n", a, b);

	return 0;
}



void huhuan(int a, int b)//�˴�ֻ�������β�a��b��ֵ��������ִ�������β�a��bû����
{
	int t;
	t = a;
	a = b;
	b = t;
	return;
}
int main()//��������Ȼ��a=3,b=5
{
	int a = 3;
	int b = 5;
	

	huhuan(a, b);

	printf("a=%d,b=%d\n", a, b);

	return 0;
}





����ָ����򻥻���������
//���Ҫ����*p��*q��ֵ����t���붨���int,���ܶ����int *,�����﷨����
void huhuan_2(int* p, int* q)//���ڱ���a��ַ��������ַ�ı䣬a����ĵ�ַ�����ݲ�û�иı�
{                          //�ڲ�������p��q�����ݸı䣬a��bδ�ı䣬�βεĸı䲻��Ӱ��ʵ�ε�ֵ(���滻p,q,tֵ�����)
	int t;
	//t=p;
	//p=q;
	//q=t;

	t = *p;//*p����p������Ϊ��ַ�����ͱ���,p��int *����,*p��int����
	*p = *q;
	*q = t;
}
int main()
{
	int a = 3;//a�ĵ�ַ�Ѿ�������ã��ǹ̶��ģ�������ַ����ռ�ı䣬�޷�����  
	int b = 5;

	huhuan_2(&a, &b);
	printf("a=%d, b=%d");
	
}




//P134
void f(int* pArr, int len)
{
	int i;
	for (i = 0; i < len; ++i)
		printf("%d", pArr[i]);//(pArr+i)�ȼ���pArr[i] Ҳ�ȼ���b[i]Ҳ�ȼ���*(b+i)
	printf("\n");
}
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[6] = { -1,-2,-3,4,5,-6 };
	int c[100] = { 1,99,22,33 };

	f(b, 6);

	return 0;
}







//p135
void f(int* pArr, int len)
{
	pArr[2] = 10;//pArr[2] == *(pArr+2) == *(a+2) ==a[2]

}
int main()
{
	int a[5] = { 1,2,3,4,5 };
	// a = &a[2];//a�Ǹ�ָ�룬��a[0]�ĵ�ַ����ָ�볣�������ܸı�
	printf("%#X, %#X\n", a, a[0]);
	//a == &a[0]

	printf("%d\n", a[2]);
	f(a, 5 );
	printf("%d\n", a[2]);

	return 0;
}




void OutArr(int* pArr, int len)//���
{
	//pArr[2] = 10;//pArr[2] == *(pArr+2) == *(a+2) ==a[2]
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d\n", pArr[i]);
	}
}
int main()
{
	int a[5] = { 1,2,3,4,5 };
	// a = &a[2];//a�Ǹ�ָ�룬��a[0]�ĵ�ַ����ָ�볣�������ܸı�
	//printf("%#X, %#X\n", a, a[0]);
	//a == &a[0]
	OutArr(a,5)
	//printf("%d\n", a[2]);
	//f(a, 5);
	//printf("%d\n", a[2]);

	return 0;
}


//p136ָ����������㣬ֻ�ܼ�����
//Ҫ��ı�������������ݣ�ֻ�ܷ�����������ĵ�ַ
void f(int* p)
{
	*p = 10;
}
int main()
{
	int i = 5;
	f(&i);
	printf("i=%d\n", i);

	return 0;
}



//p137
char ch = 'A';
int i = 99;
double x = 66.6;
char* p = &ch;
int* q = &i;
double* r = &x;

printf("%d %d %d\n", sizeof(p), sizeof(q), sizeof(r));

return 0;
 